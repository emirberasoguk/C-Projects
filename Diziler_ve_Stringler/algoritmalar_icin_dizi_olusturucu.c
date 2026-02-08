#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
int main() {
    const int ELEMAN_SAYISI = 1000;
    int dizi[ELEMAN_SAYISI];
    srand(time(NULL));
    printf("1000 elemanli dizi rastgele sayilarla dolduruluyor...\n");
    for (int i = 0; i < ELEMAN_SAYISI; i++) {
        dizi[i] = rand() % 10000;
    }
    printf("Dizi basariyla olusturuldu!\n\n");
    printf("Dizinin tüm elemanları:\n");
    for (int i = 0; i < ELEMAN_SAYISI; i++) {
        printf("%d,", dizi[i]);
    }
    printf("\n\n--------------------------------------------------\n");
    printf("Bu diziyi algoritmalarinda kullanabilirsin.\n");
    return 0;
}

