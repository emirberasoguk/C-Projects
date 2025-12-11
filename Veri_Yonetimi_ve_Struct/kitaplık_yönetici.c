#include <stdio.h>
#include <string.h>

#define MAX_KITAP 100
#define BASLIK_UZUNLUK 100
#define YAZAR_UZUNLUK 50

typedef struct {
    int id;
    char baslik[BASLIK_UZUNLUK];
    char yazar[YAZAR_UZUNLUK];
    int mevcut; // 1: Mevcut, 0: Odunc Alinmis
} Kitap;

void kitap_ekle(Kitap kutuphane[], int *sayac) {
    if (*sayac >= MAX_KITAP) {
        printf("Kutuphane dolu!\n");
        return;
    }
    
    kutuphane[*sayac].id = *sayac + 1;
    kutuphane[*sayac].mevcut = 1;
    
    printf("Kitap Basligi: ");
    scanf(" %[^
]s", kutuphane[*sayac].baslik);
    
    printf("Yazar Adi: ");
    scanf(" %[^
]s", kutuphane[*sayac].yazar);
    
    (*sayac)++;
    printf("Kitap eklendi! (ID: %d)\n", *sayac);
}

void kitaplari_listele(Kitap kutuphane[], int sayac) {
    printf("\n--- Kutuphane Arsivi ---\n");
    printf("%-5s %-30s %-20s %-10s\n", "ID", "Baslik", "Yazar", "Durum");
    printf("------------------------------------------------------------------\n");
    
    for(int i = 0; i < sayac; i++) {
        printf("%-5d %-30s %-20s %-10s\n", 
            kutuphane[i].id, 
            kutuphane[i].baslik, 
            kutuphane[i].yazar, 
            kutuphane[i].mevcut ? "Mevcut" : "Oduncde");
    }
    printf("------------------------------------------------------------------\n");
}

int main() {
    Kitap kutuphane[MAX_KITAP];
    int kitap_sayisi = 0;
    int secim;

    // Ornek veri
    strcpy(kutuphane[0].baslik, "Sefiller");
    strcpy(kutuphane[0].yazar, "Victor Hugo");
    kutuphane[0].id = 1;
    kutuphane[0].mevcut = 1;
    kitap_sayisi++;

    printf("Kutuphane Yonetim Sistemine Hosgeldiniz\n");

    while(1) {
        printf("\n1. Kitap Ekle\n2. Kitaplari Listele\n3. Cikis\nSecim: ");
        if(scanf("%d", &secim) != 1) {
            while(getchar() != '\n');
            continue;
        }

        if(secim == 3) break;
        
        switch(secim) {
            case 1: kitap_ekle(kutuphane, &kitap_sayisi); break;
            case 2: kitaplari_listele(kutuphane, kitap_sayisi); break;
            default: printf("Gecersiz islem.\n");
        }
    }

    return 0;
}