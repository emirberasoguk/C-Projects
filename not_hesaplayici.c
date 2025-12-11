#include<stdio.h>
#include<string.h>
struct ogrenci {
	int not[3];
};
int not_hesaplayici(struct ogrenci ogrenciler[1]){
	int n;
	printf("hangi ogrencinin notunu hesaplayalim\n-1-\n-2-\n");
	scanf("%d",&n);
	switch(n){
	case 1:
	return (ogrenciler[0].not[0]+ogrenciler[0].not[1]+ogrenciler[0].not[2])/3;
break;
	case 2:
	return (ogrenciler[1].not[0]+ogrenciler[1].not[1]+ogrenciler[1].not[2])/3;
break;
default:
printf("HATALI GIRIS!!!");
}
}
int main(){
	struct ogrenci ogrenciler[2];
	for(int i=0;i<2;i++){
		for(int x=0;x<3;x++){
		printf("\n%d. kisinin \n%d. notu giriniz\n",i+1,x+1);
		scanf("%d",&ogrenciler[i].not[x]);
		}
	}
	printf("\n not ortalamaniz\n %d",not_hesaplayici(ogrenciler));
return 0;
}

