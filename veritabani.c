#include <stdio.h>
int main() {
	int  sayac=0,j=0,n;
	char veritabani[1][9][99];
	char girdi[99];
while(1){
	printf("\nKayit eklemek için girdi giriniz\n:");
	fgets(girdi,sizeof(girdi),stdin);
for(int i=0;girdi[i]!='\n';i++){
		veritabani[0][sayac][i]=girdi[i];
		n=i;
}
	veritabani[0][sayac][n+1]='\n';
	printf("Sifirinci indisteki kayitlar\n:");
while(j<=sayac){
	for(int i=0;veritabani[0][j][i]!='\n';i++){
		printf("%c",veritabani[0][j][i]);
	}
	j++;
}
	j=0;
	sayac++;
}
	printf("\n");
    return 0;
}
