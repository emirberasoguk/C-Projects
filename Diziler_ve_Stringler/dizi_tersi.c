#include <stdio.h>
int main(){
    int eleman_sayisi=5;
    int gecici;
    int dongu_sayisi=eleman_sayisi/2;
    int x[5]={1,2,3,4,5};
    for(int i=0;i<dongu_sayisi;i++){
        gecici=x[i];
        x[i]=x[(eleman_sayisi-i)-1];
        x[(eleman_sayisi-i)-1]=gecici;
    }
    for(int j=0;j<eleman_sayisi;j++){
        printf("%d\t",x[j]);
    }
}
