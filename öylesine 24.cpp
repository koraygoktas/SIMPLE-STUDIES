#include <stdlib.h>
#include <stdio.h>
int main()
{
	int dizi[10];
	int i,asallar,tekler,ciftler;
	tekler=0;
	ciftler=0;
	asallar=0;
	int j;
	int sayac;
	for(i=0;i<10;i++)
	{
		printf("%d. elemani giriniz: ",i);
		scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<10;i++)
	{
		sayac=0;
		if(dizi[i]%2==1)
		{
			tekler+=dizi[i];
		}
		if(dizi[i]%2==0)
		{
			ciftler+=dizi[i];
		}
		for(j=2;j<dizi[i];j++)
		{
			if(dizi[i]%j==0)
			{
				sayac+=1;
			}
			
			
		}
		if (sayac==0)
		{
			asallar=asallar+dizi[i];
		}
	}
	printf("dizideki asal sayilar toplami= %d",asallar);
	printf("dizideki tek sayilar toplami= %d",tekler);
	printf("dizideki cift sayilar toplami= %d",ciftler);
	
	
	
	
	return 0;
}