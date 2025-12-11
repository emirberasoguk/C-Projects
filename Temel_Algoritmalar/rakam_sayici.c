#include <stdio.h>
#include <stdlib.h>

// Girilen tam sayinin basamaklarindaki rakamlarin adetlerini bulur.

int main()
{
    int sayi, rkontrol, basamak = 1, toplamrakam = 0;
    // Rakam sayaclarini dizi olarak tutmak daha pratik olurdu ama
    // orijinal koddaki yapiyi koruyarak duzenliyorum.
    int sifir = 0, bir = 0, iki = 0, uc = 0, dort = 0, bes = 0, alti = 0, yedi = 0, sekiz = 0, dokuz = 0;
    
    printf("Bir tam sayi giriniz: ");
    if(scanf("%d", &sayi) != 1) {
        printf("Gecersiz giris.\n");
        return 1;
    }

    // Negatif sayilar icin islem yapabilmek adina mutlak deger alalim
    if(sayi < 0) sayi = -sayi;

    int temp_sayi = sayi; // Orijinal sayiyi bozmamak icin kopya kullanalim

    if (temp_sayi == 0) {
        sifir = 1;
        toplamrakam = 1;
    } else {
        while (temp_sayi > 0) {
            rkontrol = temp_sayi % 10; // Son basamagi al
            
            switch (rkontrol) {
                case 0: sifir++; break;
                case 1: bir++; break;
                case 2: iki++; break;
                case 3: uc++; break;
                case 4: dort++; break;
                case 5: bes++; break;
                case 6: alti++; break;
                case 7: yedi++; break;
                case 8: sekiz++; break;
                case 9: dokuz++; break;
            }
            toplamrakam++;
            temp_sayi /= 10; // Sayiyi kucult
        }
    }

    printf("\n--- Rakam Sayilari ---\n");
    printf("0 -> %d\n1 -> %d\n2 -> %d\n3 -> %d\n4 -> %d\n5 -> %d\n6 -> %d\n7 -> %d\n8 -> %d\n9 -> %d\n",
           sifir, bir, iki, uc, dort, bes, alti, yedi, sekiz, dokuz);
    printf("Toplam rakam sayisi: %d\n", toplamrakam);
    
    return 0;
}
