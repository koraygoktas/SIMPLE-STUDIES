#include <stdlib.h>
#include <stdio.h>
int main()
{
	
	int n,enkucuk,enbuyuk,i;
	
	printf("bir sayi giriniz: ");
	scanf("%d",&n);
	
	enkucuk=n;
	enbuyuk=n;
	
	for(i=1;i<=7;i++)
	{
		printf("bir sayi giriniz: ");
		scanf("%d",&n);
		if(n<=enkucuk)
		{
			enkucuk=n;
		}
		if(n>=enbuyuk)
		{
			enbuyuk=n;
		}
	}
	printf("girdiginiz sayilardan en kucugu=%d\n",enkucuk);
	printf("girdiginiz sayilardan en buyugu=%d",enbuyuk);
	
	
	
	
	
	
	
	
	return 0;
}