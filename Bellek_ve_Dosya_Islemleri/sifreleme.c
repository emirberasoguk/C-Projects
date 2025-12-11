#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
char kullanici_girdisi[1024],veritabani[1][9][99];
int girdi_turu,girdi_uzunlugu;
void hata_mesaji(){
        printf("Hata! Hata! Hata!\n\t!HATA!\n\t!!!!!\n");
}
int dizi_alimi(){
        int sayi_adedi,harf_adedi;
        printf("Girdiyi buraya girmelisiniz(Sayi ve harf disi karakterler girmeyiniz)\n:");
        fgets(kullanici_girdisi,sizeof(kullanici_girdisi),stdin);
for(int i=0;kullanici_girdisi[i]!='\0';i++){
        if(ispunct(kullanici_girdisi[i])){
                hata_mesaji();
                return 1;
        }
        else if(isalpha(kullanici_girdisi[i])){
                harf_adedi++;
}
        else if(isdigit(kullanici_girdisi[i])){
                sayi_adedi++;
}
}
if(sayi_adedi==0&&harf_adedi!=0){
    girdi_turu=1;//girdi turu sadece harf
}
else if(harf_adedi==0&&sayi_adedi!=0){
    girdi_turu=2;//girdi turu sadece sayi
}
else if(sayi_adedi!=0&&harf_adedi!=0){
    girdi_turu=3;//girdi turu sayi harf karisik
}
}
void girdi_sifreleme_programi(){
char gecici;
for(int i=0;kullanici_girdisi[i]!='\n';i++){girdi_uzunlugu=i;}
switch(girdi_turu){
	case 1:
	for(int i=girdi_uzunlugu,int j=0;i>0;i--,j++){
		gecici=kullanici_girdisi[i];
		kullanici_girdisi[i]=kullanici_girdisi[j];
		kullanici_girdisi[j]=gecici;
	}
break;
	case 2:
break;
	case 3:
break;
	default:
}//      burada ham girdinin harf ve sayi kismini belirleyip ona gore sifreleyecegiz ve katmanli bir dizide saklayacagiz
}
void sifre_cozumleme_programi(){
//      burada silinmis girdinin harf ve sayiya göre ayrilmasi ve cozumlenip katmanli bir dizide saklanmasi islemi yapilacak
}
void veritabani_kayit(){}
int main(){
        int menu,x=0,c;
        printf("\t\t\t\tEBS uctan uca güvenlik programi baslatiliyor . . . \t\t\t\t\n\n\t\tEBS\n\n\n\tYapmak istediginiz seyin numarasini tuslayiniz\n-1-Girdi sifreleme\n-2-sifre cozumleme\n-3-Nasil kullanilir ve nasil calisir\n-0-Cikis\n:");
        scanf("%d",&menu);
        c=getchar();
        while(c!='\n'&&c!=EOF){}
if(menu==2||menu==1){x=dizi_alimi();if(x==1){return 2;}}
switch(menu){
case 0:
        printf("CIKIS YAPILIYOR . . . : : : . . .\n\t\t. . .\n");
return 0;
        break;
case 1:
        girdi_sifreleme_programi();
        break;
case 2:
        sifre_cozumleme_programi();
        break;
case 3:
//      buraya nasıl calistigini anlatan bir yazi gelecek
        break;
default:
        hata_mesaji();
return 1;
}
return 0;
}
