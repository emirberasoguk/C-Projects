#include<stdio.h>
#include<stdlib.h>
int main(){
	int n1,n2, *isaretci,cevap=0;
	char islem;
	printf("\nIslem yapilacak sayi adedini giriniz\n");
	scanf("%d",&n1);
	isaretci=(int*) malloc(n1 * sizeof(int));
	if(isaretci==NULL){
	printf("\nHATALI ISLEM!!!\n");
	exit(0);
	}
	printf("\nSayilari giriniz\n");
	for(int i=0;i<n1;i++){
	printf("\n%d. sayiyi giriniz\n",i+1);
	scanf("%d",&isaretci[i]);
	cevap+=isaretci[i];
	}
	printf("\nCevap = %d\n",cevap);
	cevap=0;
	printf("\nyeni islem icin gerekli sayi adedi\n");
	scanf("%d",&n2);
	isaretci=(int*) realloc(isaretci,n2 * sizeof(int));
	printf("\nSayilari giriniz\n");
	for(int i=0;i<n2;i++){
	printf("\n%d. sayiyi giriniz\n",i+1);
	scanf("%d",&isaretci[i]);
	cevap+=isaretci[i];
	}
	printf("\nCevap = %d\n",cevap);
	free(isaretci);
return 0;
}
