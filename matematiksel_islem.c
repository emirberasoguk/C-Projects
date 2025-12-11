#include<stdio.h>
int main()
{
int istenen,sayi_1,sayi_2;
printf("Ne yapmak istersiniz iste secenekler;\n1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n");
scanf("%d",&istenen);
printf("Ilk sayiyi giriniz\n=");
scanf("%d",&sayi_1);
printf("Ikinci sayiyi giriniz\n=");
scanf("%d",&sayi_2);
switch(istenen)
{
case 1:
printf("%d + %d = %d",sayi_1,sayi_2,sayi_1+sayi_2);
break;
case 2:
printf("%d - %d = %d",sayi_1,sayi_2,sayi_1-sayi_2);
break;
case 3:
printf("%d * %d = %d",sayi_1,sayi_2,sayi_1*sayi_2);
break;
case 4:
printf("%d / %d = %d",sayi_1,sayi_2,sayi_1/sayi_2);
break;
default:
printf("HATALI GIRIS!!!:::...");
}
return 0;
}
