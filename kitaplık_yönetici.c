#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<time.h>
struct kitap {
	char baslik[20];
	char yazar[20];
	int yayin_yili;
};
int main(){
	struct kitap kitaplar[4];
	char ad[20],yazar[20];
	int tarih,al;
	for(int i=0;i<5;i++){
	printf("\nKitabin basligi gir\n");
	fgets(ad,20,stdin);
	strcpy(kitaplar[i].baslik,ad);
	ad[0]='\0';
	getchar();
	printf("\nKitabin yazarini gir\n");
	fgets(yazar,20,stdin);
	strcpy(kitaplar[i].yazar,yazar);
	yazar[0]='\0';
	getchar();
	printf("\nKitabin basligi gir\n");
	scanf("%d",&tarih);
	kitaplar[i].yayin_yili=tarih;
	getchar();
	printf("\nBasariyla kaydedildi\n");
	if(i=4){printf("\nButun raflar doldu\n");}
}
	printf("\nKac numarali kitabi getireyim\n");
	scanf("%d",&al);
	if(al>=0&&al<5){
	printf("\nAradigin kitabin adi %s\nYazari %s \nYayinlanma tarihi %d \n",kitaplar[al].baslik,kitaplar[al].yazar,kitaplar[al].yayin_yili);
}
	else{
	printf("HATALI GIRIS!!!");
return 2;
}
return 0;
}
