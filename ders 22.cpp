#include <stdlib.h>
#include <stdio.h>
int main()
{
	int i,j,en,boy;
	printf("dikdortgenin en uzunlugunu giriniz:");
	scanf("%d",&en);
	printf("dikdortgenin boy uzunlugunu giriniz");
	scanf("%d",&boy);
	for(i=1;i<=en;i++)
	{
		printf("*");
	}
	printf("\n");
	for(i=1;i<=boy-2;i++)
	{
		printf("*");
		for(j=1;j<=en-2;j++)                          
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
		for(i=1;i<=en;i++)
	{
		printf("*");
	}
	
	
	/*int i,j,en,boy;
	printf("dikdortgeninizin en uzunlugunu giriniz");
	scanf("%d",&en);
	printf("dikdortgeninizin boy uzunlugunu giriniz");
	scanf("%d",&boy);
	for (i=1;i<=boy;i++)
		{
			for(j=1;j<=en;j++)
			{
			printf("*");	
			}
		printf("\n");	
			
		}	
	
	
	
	int i,j,taban;
	printf("ucgenin taban uzunlugunu giriniz: ");
	scanf("%d",&taban);
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
	int i,j,taban;
	printf("taban degeri giriniz=");
	scanf("%d",&taban);
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=taban;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	} 
	
		int i,j,k,l;
	printf("Enter the length of one edge of a triangle:");
	scanf("%d",&l);
    
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=i;j++)                           i=3    k=1    j=1,
		{
			for(k=l-i;k>0 && j==1;k--)
			{
				printf(" ");
			}
			printf("* ");
		}
		printf("\n");
	}
	/*
		  *
		 * *
		* * *  
		        */
		     
	
	
	return 0;
}