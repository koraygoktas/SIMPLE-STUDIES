#include <stdlib.h>
#include <stdio.h>
int main()
{
	int i,j,yaricap;
	printf("yaricap uzunlugu giriniz:");
	scanf("%d",&yaricap);
	for(i=1;i<=yaricap;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");		
			
		}	
		for(j=1;j<=yaricap-i;j++)
		{
			printf(" ");
		}
			for(j=1;j<=yaricap-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}	
	//diğer yarisi
	
	
	
	
	return 0;
}