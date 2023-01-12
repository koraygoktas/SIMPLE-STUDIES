#include <stdlib.h>
#include <stdio.h>
 int main()
 {
 	/*int i,j;
 	for (i=0;i<5;i++)
 	{
 		for (j=5;j>i;j--)
 		{
 			printf("*");
 			
		 }
		 printf("\n");
	 }*/
	 
	int uzunluk,i,j;
	printf("Kanadin yarisinin uzunlugu kac birim olsun? --> ");
	scanf("%d",&uzunluk);
	for(i=1;i<=uzunluk;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=1;j<=uzunluk-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=uzunluk-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//diğer yarısı
	for(i=1;i<=uzunluk;i++)
	{
		for(j=i;j<=uzunluk;j++)
		{
			printf("*");
		}
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(j=i;j<=uzunluk;j++)
		{
			printf("*");
		}
		printf("\n");
	}
 	
 	
 	
 	
 	
 	return 0;
 }