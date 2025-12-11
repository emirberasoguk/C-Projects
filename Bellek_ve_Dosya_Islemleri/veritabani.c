#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Basit bir dosya tabanli veritabani simulasyonu
// Verileri 'veritabani.txt' dosyasina yazar ve okur.

void veri_ekle() {
    FILE *dosya = fopen("veritabani.txt", "a");
    if (dosya == NULL) {
        perror("Dosya acilamadi");
        return;
    }

    char anahtar[50];
    char deger[100];

    printf("Kayit Anahtari (rn. KullaniciAdi): ");
    scanf(" %[^
]s", anahtar);
    printf("Kayit Degeri (rn. Emir): ");
    scanf(" %[^
]s", deger);

    fprintf(dosya, "%s:%s\n", anahtar, deger);
    fclose(dosya);
    printf("Veri kaydedildi.\n");
}

void verileri_oku() {
    FILE *dosya = fopen("veritabani.txt", "r");
    if (dosya == NULL) {
        printf("Henuz hic veri yok veya dosya acilamadi.\n");
        return;
    }

    char satir[200];
    printf("\n--- Veritabani Icerigi ---\n");
    while (fgets(satir, sizeof(satir), dosya) != NULL) {
        printf("%s", satir);
    }
    printf("--------------------------\n");
    fclose(dosya);
}

int main() {
    int secim;
    
    printf("=== Basit Dosya Veritabani ===\n");
    
    while(1) {
        printf("\n1. Veri Ekle\n2. Verileri Oku\n3. Cikis\nSeciminiz: ");
        if(scanf("%d", &secim) != 1) {
            while(getchar() != '\n');
            continue;
        }

        if (secim == 3) {
            printf("Programdan cikiliyor...\n");
            break;
        }

        switch (secim) {
            case 1: veri_ekle(); break;
            case 2: verileri_oku(); break;
            default: printf("Gecersiz secim.\n");
        }
    }

    return 0;
}