#include <stdio.h>

// Matris koordinatlarini (satir, sutun) ekrana yazdiran program.

int main()
{
    int i, j, satir, sutun;
    
    printf("Satir sayisini giriniz: ");
    scanf("%d", &satir);
    
    printf("Sutun sayisini giriniz: ");
    scanf("%d", &sutun);
    
    printf("\n--- Matris Koordinatlari ---\n");
    for(i = 1; i <= satir; i++) {
        for(j = 1; j <= sutun; j++) {
            printf("(%d, %d)\t", i, j);
        }
        printf("\n");
    }
    
    return 0;
}

