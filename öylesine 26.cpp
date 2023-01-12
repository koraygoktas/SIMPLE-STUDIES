#include <stdlib.h>
#include <stdio.h>
int main()
{
	int n,toplam=0,i;
	printf("bir n sayisi giriniz: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		toplam+=i;
		
	}
	if(toplam==n)
	{
		printf("n sayisi muhtesem sayidir");
		
	}
	else
	{
		printf("sayiniz bi bok degildir");
	}
	
	
	
	
	
	
	
	
	return 0;
}