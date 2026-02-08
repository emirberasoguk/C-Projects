#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    int x[3];
    int sayi,taban,gecici;
    sayi=5;
    taban=2;
    for(int i=0;sayi>0;i++){
        gecici=sayi%taban;
        sayi=sayi/taban;
        x[i]=gecici;
    }
    for(int i=0;i<3;i++){
    printf("%d",x[i]);
    }
return 0;
}
