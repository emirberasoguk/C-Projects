#include<stdio.h>
int main(){
	char kelime[50];
	int kelime_sayisi=0,j=0;
	printf("kontrol edilecek kelimeyi giriniz\n:");
	scanf("%s",kelime);
	printf("kelimeniz:%s\n",kelime);
	while(kelime[j]!='\0'){
	j+=1;
	kelime_sayisi+=1;
	}
	for(int i=0;i<kelime_sayisi/2;i++){//şimdi kontrol zamanı
	if(kelime[i]!=kelime[kelime_sayisi-i-1]){
		printf("Kelime palindrom degildir!");
return 0;
		}
	}
	printf("Kelime palindromdur");
return 0;
}
