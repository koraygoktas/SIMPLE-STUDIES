#include <stdlib.h>
#include <stdio.h>


int *hesapla(int d1[],int d2[],int n1,int n2,int d3[])
	{
	int i,j;
	for(i=0;i<n1;i++)
	{
	
	d3[i]=d1[i];
	}
	for(j=0;j<n2;j++,i++)
	{
	
	d3[i]=d2[j];
	}
	return d3;
}


int main()
{
	int dizi3[7];
	int	dizi1[]={1,2,3};
	int dizi2[]={5,8,4,2};
	
	hesapla(dizi1,dizi2,3,4,dizi3);
	
	
	int i;
	
	
	for(i=0;i<7;i++)
	{
		printf("%d",dizi3[i]);
	}
	
		
	
	
	return 0;
	}


