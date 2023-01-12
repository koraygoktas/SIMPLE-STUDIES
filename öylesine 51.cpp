#include <stdlib.h>
#include <stdio.h>




int main ()
{
	int n;
	printf("n gir");
	scanf("%d",&n);
	int dizi[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&dizi[i]);
	}	
	int adet=0;
	int j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n-i;j++)
		{
			if(dizi[i]==dizi[j])
			{
				adet+=1;
			}
		}
		printf("dizinin %d elemanindan %d adet var",dizi[i],adet);
	}
	
	
	
	
	return 0;
}