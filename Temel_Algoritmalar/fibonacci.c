#include <stdio.h>
int main(){
    int x[13];
    x[0]=0;
    x[1]=1;
    for(int i=2;i<12;i++){
    x[i]=x[i-1]+x[i-2];
    printf("%d\t",x[i-2]);
    }
}
