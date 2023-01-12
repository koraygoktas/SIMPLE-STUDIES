#include <stdlib.h>
#include <stdio.h>
int main()
{
	/*int saat;
	printf("otoparkta kac saat kaldiginizi giriniz= ");
	scanf("%d",&saat);
	
	if (saat>=0&&4>=saat)
	{
		printf("odemeniz gereken tutar 5 liradir");
	}
	else if (saat>4&&8>=saat)
	{
		printf("odemeniz gerekn tutar 10 liradir");
	}
	*/
	int saat;
	printf("saati giriniz= ");
	scanf("%d",&saat);
	switch(saat)
	{
		case 0 ... 4:
			printf("selam");
			break;
			
		default:
			printf("doesn't exist");
			break;
		
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}