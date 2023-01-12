#include <stdlib.h>
#include <stdio.h>

int main()
{
	int ebob,ekok,sayi1,sayi2;
	printf("sayi1 i giriniz:");
	scanf("%d",&sayi1);
	printf("sayi2 yi giriniz:");
	scanf("%d",&sayi2);
	int buyuksayi,kucuksayi;
	if(sayi1>=sayi2)
	{
		buyuksayi=sayi1;
		kucuksayi=sayi2;
	}	
	else 
	{
		buyuksayi=sayi2;
		kucuksayi=sayi1;
	}
	int i;
	for(i=buyuksayi;i>0;i--)
	{
		if(buyuksayi%i==0&&kucuksayi%i==0)
		{
			ebob=i;
			break;
		}
	}
	ekok=buyuksayi*kucuksayi/ebob;
	printf("ebobunuz =%d\nekokunuz %d",ebob,ekok);
	return 0;
}