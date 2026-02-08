#include<stdio.h>
int main(){
    int dizi1[5]={123,34,4635,65678,6789};
    int dizi2[5]={2451,4653,656,854,1234};
    int sonuc[10];
    int eleman_sayisi=5,toplam_eleman_sayisi=10,sayac=0,gecici,x1=0,x2=0;
    for (int k=0;k<eleman_sayisi-1;k++){
        for(int i=0;i<eleman_sayisi-1-k;i++){
            if(dizi1[i]>dizi1[i+1]){
                gecici=dizi1[i+1];
                dizi1[i+1]=dizi1[i];
                dizi1[i]=gecici;
            }
            if(dizi2[i]>dizi2[i+1]){
                gecici=dizi2[i+1];
                dizi2[i+1]=dizi2[i];
                dizi2[i]=gecici;
            }
        }
    }
    for(int j=0;j<toplam_eleman_sayisi;j++){
        if(x1<eleman_sayisi&&x2<eleman_sayisi){
        if(dizi1[x1]>dizi2[x2]){sonuc[j]=dizi2[x2];x2++;}
        else if(dizi2[x2]>dizi1[x1]){sonuc[j]=dizi1[x1];x1++;}
        else if(dizi1[x1]==dizi2[x2]){sonuc[j]=dizi1[x1];sonuc[j+1]=dizi2[x2];j++;x1++;x2++;}
        }
        else if(x1==eleman_sayisi&&x2==eleman_sayisi){break;}
        else if(x1==eleman_sayisi){
            sonuc[j]=dizi2[x2];
            x2++;
        }
        else if(x2==eleman_sayisi){
            sonuc[j]=dizi1[x1];
            x1++;
        }
    }
    for(int a=0;a<toplam_eleman_sayisi;a++){printf("%d\t",sonuc[a]);}
}
