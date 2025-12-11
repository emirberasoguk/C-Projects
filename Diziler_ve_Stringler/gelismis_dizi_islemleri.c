#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_DIZI_BOYUTU 1000 // Stack overflow riskine karsi makul bir sinir

void istenilendiziolusturucu(int dizi[], int elemansayisi) {
    for (int indeks = 0; indeks < elemansayisi; indeks++) {
        printf("%d. indisin degerini giriniz: ", indeks);
        scanf("%d", &dizi[indeks]);
    }
}

void diziGosterici(int dizi[], int elemansayisi) {
    printf("\n--- Dizi Icerigi ---\n");
    for (int indeks = 0; indeks < elemansayisi; indeks++) {
        printf("[%d] = %d\n", indeks, dizi[indeks]);
    }
}

void rastgelediziolusturucu(int dizi[], int elemansayisi) {
    for (int indeks = 0; indeks < elemansayisi; indeks++) {
        dizi[indeks] = rand() % 100;
    }
    printf("Rastgele dizi olusturuldu.\n");
}

int enbuyukbulucu(int dizi[], int eleman) {
    int max = dizi[0];
    for (int n = 1; n < eleman; n++) {
        if (dizi[n] > max) {
            max = dizi[n];
        }
    }
    return max;
}

int enkucukbulucu(int dizi[], int eleman) {
    int min = dizi[0];
    for (int n = 1; n < eleman; n++) {
        if (dizi[n] < min) {
            min = dizi[n];
        }
    }
    return min;
}

void buyuktensiralayici(int dizi[], int eleman) {
    // Bubble sort algoritmasi
    for (int i = 0; i < eleman - 1; i++) {
        for (int j = 0; j < eleman - i - 1; j++) {
            if (dizi[j] < dizi[j + 1]) {
                int temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
    printf("Dizi buyukten kucuge siralandi.\n");
    diziGosterici(dizi, eleman);
}

void kucuktensiralayici(int dizi[], int eleman) {
    // Bubble sort algoritmasi
    for (int i = 0; i < eleman - 1; i++) {
        for (int j = 0; j < eleman - i - 1; j++) {
            if (dizi[j] > dizi[j + 1]) {
                int temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
    printf("Dizi kucukten buyuge siralandi.\n");
    diziGosterici(dizi, eleman);
}

int matematikselislem(int dizi[], int elemansayisi) {
    int secim, alt_secim;
    int bir, iki;
    int toplam = 0;

    printf("\nIslem Seciniz:\n1- Toplama\n2- Cikarma\n3- Carpma\n4- Bolme\nSecim: ");
    scanf("%d", &secim);

    switch (secim) {
        case 1:
            printf("1- Tum diziyi topla\n2- Iki indisi topla\nSecim: ");
            scanf("%d", &alt_secim);
            if (alt_secim == 1) {
                for (int i = 0; i < elemansayisi; i++) toplam += dizi[i];
                return toplam;
            } else if (alt_secim == 2) {
                printf("Indisleri giriniz (Orn: 0 1): ");
                scanf("%d %d", &bir, &iki);
                if(bir >= 0 && bir < elemansayisi && iki >= 0 && iki < elemansayisi)
                    return dizi[bir] + dizi[iki];
            }
            break;
        case 2:
            printf("Indisleri giriniz (Orn: 0 1): ");
            scanf("%d %d", &bir, &iki);
             if(bir >= 0 && bir < elemansayisi && iki >= 0 && iki < elemansayisi)
                return dizi[bir] - dizi[iki];
            break;
        case 3:
            printf("Indisleri giriniz: ");
            scanf("%d %d", &bir, &iki);
             if(bir >= 0 && bir < elemansayisi && iki >= 0 && iki < elemansayisi)
                return dizi[bir] * dizi[iki];
            break;
        case 4:
            printf("Indisleri giriniz: ");
            scanf("%d %d", &bir, &iki);
             if(bir >= 0 && bir < elemansayisi && iki >= 0 && iki < elemansayisi && dizi[iki] != 0)
                return dizi[bir] / dizi[iki];
            else printf("Hatali islem veya sifira bolme!\n");
            break;
        default:
            printf("Hatali secim!\n");
    }
    return 0;
}

int main() {
    int dizi[MAX_DIZI_BOYUTU];
    int eleman, yapilacak, diziTipi;
    
    srand(time(NULL));

    printf("Dizi boyutu (Max %d): ", MAX_DIZI_BOYUTU);
    scanf("%d", &eleman);
    
    if (eleman > MAX_DIZI_BOYUTU || eleman <= 0) {
        printf("Gecersiz boyut. Varsayilan olarak 10 secildi.\n");
        eleman = 10;
    }

    printf("1- Rastgele Olustur\n2- Elle Gir\nSecim: ");
    scanf("%d", &diziTipi);

    if (diziTipi == 1) rastgelediziolusturucu(dizi, eleman);
    else if (diziTipi == 2) istenilendiziolusturucu(dizi, eleman);
    else {
        printf("Hatali giris, rastgele olusturuluyor.\n");
        rastgelediziolusturucu(dizi, eleman);
    }

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1- Diziyi Goster\n2- En Buyuk Eleman\n3- En Kucuk Eleman\n4- Buyukten Kucuge Sirala\n5- Kucukten Buyuge Sirala\n6- Matematiksel Islemler\n7- Cikis\nSecim: ");
        scanf("%d", &yapilacak);

        if (yapilacak == 7) break;

        switch (yapilacak) {
            case 1: diziGosterici(dizi, eleman); break;
            case 2: printf("En Buyuk: %d\n", enbuyukbulucu(dizi, eleman)); break;
            case 3: printf("En Kucuk: %d\n", enkucukbulucu(dizi, eleman)); break;
            case 4: buyuktensiralayici(dizi, eleman); break;
            case 5: kucuktensiralayici(dizi, eleman); break;
            case 6: printf("Sonuc: %d\n", matematikselislem(dizi, eleman)); break;
            default: printf("Hatali secim!\n");
        }
    }
    return 0;
}
