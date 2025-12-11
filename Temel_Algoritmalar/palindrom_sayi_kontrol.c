#include <stdio.h>

// Bir sayinin tersini bulur (Orn: 123 -> 321)
int sayiyi_ters_cevir(int sayi) {
    int ters_sayi = 0;
    while (sayi > 0) {
        ters_sayi = (ters_sayi * 10) + (sayi % 10);
        sayi /= 10;
    }
    return ters_sayi;
}

int main()
{
    int sayi, tersi;
    
    printf("Palindrom kontrolu icin bir sayi giriniz: ");
    if(scanf("%d", &sayi) != 1) {
        printf("Gecersiz giris.\n");
        return 1;
    }

    if (sayi < 0) {
        printf("Negatif sayilar palindrom kabul edilmez (isaret farkliligi).\n");
    } else {
        tersi = sayiyi_ters_cevir(sayi);
        printf("Sayinin tersi: %d\n", tersi);
        
        if (sayi == tersi) {
            printf("SONUC: Girilen sayi PALINDROMDUR.\n");
        } else {
            printf("SONUC: Girilen sayi palindrom DEGILDIR.\n");
        }
    }
    
    return 0;
}
