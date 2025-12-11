#include<stdio.h>
#include<stdlib.h>
#include<time.h>
	int rastgele_sayi(int sk, int sb)
{
//	if()
	return(rand()% (sb-sk) + sk);
}
	int sayi_control(int gs,int as)
{
	if(gs==as)
	{
	return(0);
	}
	else
	{
	return(1);
	}
}
	int main()
{
		srand(time(NULL));
		int sayi_araligi_k,sayi_araligi_b,sayi,win_control=1,aranan_sayi;
		printf("rastgele sayiniz hangi sayi araliginde olsun(once kucuk sonra buyuk)\n:");
		scanf("%d %d",&sayi_araligi_k,&sayi_araligi_b);
		aranan_sayi=rastgele_sayi(sayi_araligi_k,sayi_araligi_b);
	do
	{
		printf("bir tahminde bulunun\n:");
		scanf("%d",&sayi);
		win_control=sayi_control(sayi,aranan_sayi);
	if(sayi<aranan_sayi)
	{
	printf("Tuttugum sayi daha buyuk\n");
	}
	else
	{
	printf("Tutugum sayi daha kucuk\n");
	}
}while(win_control);
	printf("ISTE BULDUN !!! =%d\n",aranan_sayi);
	return 0;
}
