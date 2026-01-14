#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_KISI 100
#define ISIM_UZUNLUK 50
#define TEL_UZUNLUK 20

typedef struct {
    char isim[ISIM_UZUNLUK];
    char telefon[TEL_UZUNLUK];
} Kisi;

void menu_goster() {
    printf("\n--- Telefon Rehberi ---\n");
    printf("1. Kisi Ekle\n");
    printf("2. Rehberi Listele\n");
    printf("3. Kisi Ara\n");
    printf("4. Cikis\n");
    printf("Seciminiz: ");
}

void kisi_ekle(Kisi rehber[], int *kisi_sayisi) {
    if (*kisi_sayisi >= MAX_KISI) {
        printf("Rehber dolu! Daha fazla kisi eklenemez.\n");
        return;
    }

    printf("Isim: ");
    scanf(" %[^\n]s", rehber[*kisi_sayisi].isim); // Bosluklu isim alabilmek icin
    printf("Telefon: ");
    scanf("%s", rehber[*kisi_sayisi].telefon);

    (*kisi_sayisi)++;
    printf("Kisi basariyla eklendi.\n");
}

void rehberi_listele(Kisi rehber[], int kisi_sayisi) {
    if (kisi_sayisi == 0) {
        printf("Rehber bos.\n");
        return;
    }

    printf("\n--- Kayitli Kisiler ---\n");
    for (int i = 0; i < kisi_sayisi; i++) {
        printf("%d. %s - %s\n", i + 1, rehber[i].isim, rehber[i].telefon);
    }
}

void kisi_ara(Kisi rehber[], int kisi_sayisi) {
    char aranan[ISIM_UZUNLUK];
    int bulundu = 0;

    printf("Aranacak isim: ");
    scanf(" %[^\n]s", aranan);

    for (int i = 0; i < kisi_sayisi; i++) {
        if (strstr(rehber[i].isim, aranan) != NULL) {
            printf("Bulundu: %s - %s\n", rehber[i].isim, rehber[i].telefon);
            bulundu = 1;
        }
    }

    if (!bulundu) {
        printf("Kisi bulunamadi.\n");
    }
}

int main() {
    Kisi rehber[MAX_KISI];
    int kisi_sayisi = 0;
    int secim;

    do {
        menu_goster();
        if (scanf("%d", &secim) != 1) {
            while (getchar() != '\n'); // Hatali girisi temizle
            secim = 0;
        }

        switch (secim) {
            case 1:
                kisi_ekle(rehber, &kisi_sayisi);
                break;
            case 2:
                rehberi_listele(rehber, kisi_sayisi);
                break;
            case 3:
                kisi_ara(rehber, kisi_sayisi);
                break;
            case 4:
                printf("Cikis yapiliyor...\n");
                break;
            default:
                printf("Gecersiz secim! Tekrar deneyin.\n");
        }
    } while (secim != 4);

    return 0;
}
