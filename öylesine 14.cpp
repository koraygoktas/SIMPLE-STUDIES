#include <stdlib.h>
#include <stdio.h>
int main()
{
	int sayi1,sayi2,toplam,i;
	toplam=0;
	tekrar:
	printf("say1'i giriniz= ");
	scanf("%d",&sayi1);
	printf("sayi2'yi giriniz= ");
	scanf("%d",&sayi2);
	
	if (sayi1==sayi2)
	{
		printf("girdiğiniz sayilar birbirine eşit lutfen tekrar deneyiniz\n");
		goto tekrar;
	}
	
	if (sayi1>sayi2)
	{
		for(i=sayi2+1;i<sayi1;i++)
		{
			toplam+=i;
		}
	}
	if (sayi2>sayi1)
	{
		for(i=sayi1+1;i<sayi2;i++)
		{
			toplam+=i;
		}
	}
	printf("sayi1 ile sayi2 arasindaki sayilarin toplami= %d",toplam);
	
	
	
	
	
	return 0;
}