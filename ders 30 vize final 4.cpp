#include <stdlib.h>
#include <stdio.h>
int main()
{
/*	int a,b;
	tekrar:
	printf("a sayisini giriniz= ");
	scanf("%d",&a);
	printf("b sayisini giriniz= ");
	scanf("%d",&b);
	if (a==b)
	{
		printf("lutfen tekrar giriniz\n");
		goto tekrar;
	}
	if (a>b)
	{
		for(b;b<a-1;b++)
		printf("%d\n",b+1);
	}
	else if(b>a)
	{
		for(a;a<b-1;a++)
		{
			printf("%d\n",a+1);
		}
	}
	
	
	int kiskalan=320,ilkbkalan,sonbkalan,yazkalan,toplam;
	
	ilkbkalan=kiskalan/4;
	yazkalan=ilkbkalan*8;
	sonbkalan=yazkalan/10;
	toplam=kiskalan+yazkalan+ilkbkalan+sonbkalan;
	printf("sene boyu otelde kalan kisi sayisi=%d",toplam);
	*/
	
	int yuzler,onlar,birler,sayi,toplam;
	printf("uc basamakli bir sayi giriniz");
	scanf("%d",&sayi);
	yuzler=sayi/100;
	onlar=(sayi/10)%10;
	birler=sayi % 10;
	printf("yuzler basamagi=%d\nonlar basamagi=%d\nbirler basamagi=%d\n",yuzler,onlar,birler);
	
	toplam=yuzler+onlar+birler;
	printf("rakamlarin toplami=%d",toplam);
	
	
	
	
	
	return 0;
}