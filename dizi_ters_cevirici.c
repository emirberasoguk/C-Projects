#include<stdio.h>
int main(){
	int d[5]={5,4,3,2,1},n;
	int*x=d;
	int*y=d+4;
	printf("0.\t1.\t2.\t3.\t4.\n");
	for(int i=0;i<5;i++){//önce dizinin düz haline bakalım
	printf("%d\t",d[i]);
	}
	for(int j=0;j<2;j++){//şimdi ters halini yapalım
	printf("x:%d,y:%d,n:%d\n",*x,*y,n);
	n=*x;
	printf("x:%d,y:%d,n:%d\n",*x,*y,n);
	*x=*y;
	*y=n;
	printf("x:%d,y:%d,n:%d\n",*x,*y,n);
	printf("d %d:%d,d %d:%d\n",j,d[j],4-j,d[4-j]);
	//d[j]=*y;
	//d[4-j]=*x;
	//printf("d %d:%d,d %d:%d\n",j,d[j],4-j,d[4-j]);
	x++;
	y--;
	}
	printf("0.\t1.\t2.\t3.\t4.\n");
	for(int k=0;k<5;k++){//şimdi yeni diziyi yazdıralım
	printf("%d\t",d[k]);
	}
return 0;
}
