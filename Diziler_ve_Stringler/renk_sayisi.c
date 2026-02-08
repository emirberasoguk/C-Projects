#include <stdio.h>
int main(){
    int matris[3][3]={{5,4,5},{6,2,8},{7,5,4}};
    int renkler[9]={0,0,0,0,0,0,0,0,0};
    int satir=3,sutun=3,toplam_eleman=9,a=0,sayac=0;
    for(int i=0;i<satir;i++){
        for(int j=0;j<sutun;j++){
            for(int k=0;k<toplam_eleman;k++){
                if(renkler[k]==matris[i][j]){sayac++;}
            }
            if(sayac==0){renkler[a]=matris[i][j];a++;}
            sayac=0;
        }
    }
    for(int l=0;l<a+1;l++){printf("%d\t",renkler[l]);}
}
