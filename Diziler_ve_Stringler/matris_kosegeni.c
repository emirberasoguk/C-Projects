#include <stdio.h>
int main(){
    int matris[5][5];
    int satir=5,sutun=5;
    for(int i=0;i<satir;i++){
        for(int j=0;j<sutun;j++){
            if(i==j){matris[i][j]=1;}
            else if(j>i){matris[i][j]=2;}
            else if(i>j){matris[i][j]=3;}
        }
    }
    for(int a=0;a<satir;a++){
        for(int b=0;b<sutun;b++){
            printf("%d\t",matris[a][b]);
        }
        printf("\n\n\n");
    }
}
