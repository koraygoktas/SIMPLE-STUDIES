#include <stdlib.h>
#include <stdio.h>
int main ()
{
	int faktor=1,n,i;
	printf("n sayisini giriniz:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		faktor*=i;
		
	}
	printf("%d'nin faktoriyeli =%d",n,faktor);
	return 0;
}