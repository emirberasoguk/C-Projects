#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int  matris1[10][10],matris2[10][10],matris_sayisi;
const char*  hata_mesaji(){
        return"HATALI GIRIS!!!\n";
}
void rastgele_matris_olusturucu(int satir, int sutun, int matris[10][10]){
        for(int i=0;i<satir;i++){
                for(int j=0;j<sutun;j++){
                matris[i][j]=rand()%100;
                printf("%d ",matris[i][j]);
                }
        printf("\n");
        }
}
void elle_matris_olusturucu(int satir,int sutun, int matris[10][10]){
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
void matris_olusturma_programi(){
        int deger_turu,satir2,sutun2,satir1,sutun1;
        printf("\t\t\tMatris olusturma programına hos geldiniz!!!\nKac adet matris ureteceksiniz?\n!(en fazla 2 adet uretebilirsiniz)!");
	scanf("%d",&matris_sayisi);
	if(matris_sayisi<=0||matris_sayisi>2){printf("%s\n",hata_mesaji());}
	while(matris_sayisi>0){
        printf("Olusturmak istediğiniz matrisin degerleri;\n-1-rastgele girin\n-2-elle girin\n");
        scanf("%d",&deger_turu);
        switch(deger_turu){
        case 1:
		if(matris_sayisi==2){
        	rastgele_matris_olusturucu(satir2,sutun2,matris2);
        	printf("Olusturmak istediginiz matrisin once satir daha sonra sutun bilgilerini giriniz\n!(10 dan buyuk deger girmeyiniz)!\n");
        	scanf("%d %d",&satir2,&sutun2);
        	if(satir2<=0||sutun2<=0||satir2>10||sutun2>10){printf("%s\n",hata_mesaji());}
		}
		else{
		rastgele_matris_olusturucu(satir1,sutun1,matris1);
        	printf("Olusturmak istediginiz matrisin once satir daha sonra sutun bilgilerini giriniz\n!(10 dan buyuk deger girmeyiniz)!\n");
        	scanf("%d %d",&satir1,&sutun1);
        	if(satir1<=0||sutun1<=0||satir1>10||sutun1>10){printf("%s\n",hata_mesaji());}
		}
break;
        case 2:
		if(matris_sayisi==2){
        	elle_matris_olusturucu(satir2,sutun2,matris2);
        	printf("Olusturmak istediginiz matrisin once satir daha sonra sutun bilgilerini giriniz\n!(10 dan buyuk deger girmeyiniz)!\n");
        	scanf("%d %d",&satir1,&sutun1);
		}
		else{
		elle_matris_olusturucu(satir1,sutun1,matris1);
        	printf("Olusturmak istediginiz matrisin once satir daha sonra sutun bilgilerini giriniz\n!(10 dan buyuk deger girmeyiniz)!\n");
        	scanf("%d %d",&satir1,&sutun1);
		}
break;
        default:
        printf("%s\n",hata_mesaji());
        }
	matris_sayisi-=1;
	}
}
int matris_toplami(int satir1, int satir2, int sutun1, int sutun2){
	//for(int i=0;i<satir1;i++){}
}
int main(){
        srand(time(NULL));
	int ana_menu_secenek;
	printf("\t\t\t MATRISCI BABA'ya Hos Geldin!!!\nNe yapmak istersiniz?\n-1-Matris Toplami\n-2-Matris Carpimi\nDevami Gelecek...\n");//ana menü
	scanf("%d",&ana_menu_secenek);
	if(ana_menu_secenek<=0||ana_menu_secenek>2){printf("%s\n",hata_mesaji());}
	printf("Islem Yapilacak Matrisleri Belirlemen icin,\nMatris Olusturma Programina Yonlendiriliyor...\n");
	matris_olusturma_programi();
	switch(ana_menu_secenek){
	case 1:
	
break;
	case 2:
	
break;
	case 3:
	printf("Gelecek Daha Beklemede Kalın!!!\n");
break;
	default:
	printf("%s\n",hata_mesaji());
	}
return 0;
}

