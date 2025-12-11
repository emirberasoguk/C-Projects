#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int matris[10][10];
const char**  hata_mesaji(){
	return"HATALI GIRIS!!!\n";
}
void rastgele_matris_olusturucu(int satir, int sutun){
	for(int i=0;i<satir;i++){
		for(int j=0;j<sutun;j++){
		matris[i][j]=rand()%100;
		printf("%d ",matris[i][j]);
		}
	printf("\n");
	}
}
void elle_matris_olusturucu(int satir,int sutun){
	int sayi;
	for(int i=0;i<satir;i++){
		for(int j=0;j<sutun;j++){
		printf("%d. satirin %d. sutunun degerini giriniz\n(en fazla 100 girebilirsiniz!)\n",i,j);
		scanf("%d",&sayi);
		if(sayi<0||sayi>100){printf("%s\n",hata_mesaji());}
		matris[i][j]=sayi;
		}
	printf("*********************************************************************************************************************************************************");
	printf("\n");
	}
}
int main(){
	srand(time(NULL));
	int deger_turu,satir,sutun;
	printf("\t\t\tMatris olusturma programına hos geldiniz!!!\n");
	printf("Olusturmak istediginiz matrisin once satir daha sonra sutun bilgilerini giriniz\n(10 dan buyuk deger girmeyiniz!)\n");
	scanf("%d %d",&satir,&sutun);
	if(satir<=0||sutun<=0||satir>10||sutun>10){printf("%s\n",hata_mesaji());return 0;}
	printf("Olusturmak istediğiniz matrisin degerleri;\n-1-rastgele girin\n-2-elle girin\n");
	scanf("%d",&deger_turu);
switch(deger_turu){
	case 1:
	rastgele_matris_olusturucu(satir,sutun);
break;
	case 2:
	elle_matris_olusturucu(satir,sutun);
break;
	default:
	printf("%s\n",hata_mesaji());
return 0;
	}
return 	0;
}
