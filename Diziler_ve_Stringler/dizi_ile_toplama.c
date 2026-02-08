#include<stdio.h>
int main(){
    int elde=0,eleman_sayisi=10;
    int dizi1[10]={9,2,3,4,5,2,6,9,4,7};
    int dizi2[10]={9,2,3,4,5,9,6,0,3,5};
    int toplam[11]={0,0,0,0,0,0,0,0,0,0,0};
    int a=eleman_sayisi;
    for(int i=eleman_sayisi-1;i>-1;i--){
        if((dizi1[i]+dizi2[i]+elde)>=10){
            elde=(dizi1[i]+dizi2[i]+elde)/10;
            toplam[a]+=(dizi1[i]+dizi2[i])%10;
            toplam[a-1]+=elde;
        }
        else{toplam[a]+=dizi1[i]+dizi2[i];}
        a--;
    }
    for(int j=0;j<eleman_sayisi+1;j++){printf("%d",toplam[j]);}
}
