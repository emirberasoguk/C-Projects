#include<stdio.h>
int main(){
	char cumle[100];
	int bosluk_sayisi=0;
	printf("Kelime sayisi aranacak cumleyi giriniz\n:");
	fgets(cumle,sizeof(cumle),stdin);
	for(int i=0;i<sizeof(cumle);i++){
		if(cumle[i]==' '){
			bosluk_sayisi+=1;
			}
		}
	printf("cumledeki kelime sayisi:%d",bosluk_sayisi+1);
return 0;
}
