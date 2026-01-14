#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct kisi{
	char ad[20];
	int yas;
	char cinsiyet[5];
};
int main(){
char ad[16],cins[6];
struct kisi kisi1;
	printf("\nAdinizi giriniz\n:");
	fgets(ad,16,stdin);
getchar();
	strcpy(kisi1.ad,ad);
	printf("\nCinsinizi giriniz\n:");
	fgets(cins,6,stdin);
getchar();
	strcpy(kisi1.cinsiyet,cins);
	printf("\nYasinizi giriniz\n");
	scanf("%d",&kisi1.yas);
getchar();
	printf("Hos Geldiniz sayin %s \n İsminizden anlasiliyorki cinsiyetiniz %s \n Yasinizida tahmin edeyim %d di mi?",kisi1.ad,kisi1.cinsiyet,kisi1.yas);
return 0;
}
