#include<stdio.h>
int main(){
    int sayac=1,degerlendirilecek,eleman_sayisi=10;
    int dizi[10]={65,651,849,652,9845,21258,6369,147,52,123};
    int deger[10];
    for(int i=0;i<eleman_sayisi;i++){
        degerlendirilecek=dizi[i];
        for(int j=0;j<eleman_sayisi;j++){
            if(degerlendirilecek>dizi[j]){sayac++;}
        }
        deger[i]=sayac;
        sayac=1;
    }
    for(int a=0;a<eleman_sayisi;a++){printf("%d\t",deger[a]);}
}
