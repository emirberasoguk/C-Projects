#include<stdio.h>
int main(){
	int x=5,y=3,degisen;
	int *ptrx,*ptry;
	printf("x:%d,y:%d\n",x,y);
	ptrx=&x;
	ptry=&y;
	degisen=*ptrx;
	*ptrx=*ptry;
	*ptry=degisen;
	printf("x:%d,y:%d\n",x,y);
return 0;
}
