#include<stdio.h>
int main(){
    int kucuk,buyuk,eleman_sayisi=10;
    int dizi[10]={54,78,651,189635,1658,2984,984265,645,6231,3094};
    buyuk=dizi[0];
    kucuk=dizi[0];
    for(int i=1;i<eleman_sayisi;i++){
        if(buyuk<dizi[i]){buyuk=dizi[i];}
        if(kucuk>dizi[i]){kucuk=dizi[i];}
    }
    printf("En buyuk bu: %d\n En kucuk bu: %d",buyuk,kucuk);
}
