#include <stdlib.h>
#include <stdio.h>
int main()
{
	int secim;
	printf("lutfen bir secim yapiniz=");
	scanf("%d",&secim);
	switch(secim)
	{
		case 1: printf("beni aldatiyor");
			break;
		case 2: printf("beni özlüyor");
			break;
		case 3: printf("benden gercekten nefret ediyor");
			break;
		case 4: printf("cani bir şeye sikilmis");
			break;
		case 5: printf("karabuke geliyor :)))");
			break;
		case 6: printf("acikmis");
			break;
		case 7: printf("dayak istiyor");
			break;
		case 8: printf("isirilmak istiyor");
			break;
		case 9: printf("benden ayrilmayi dusunuyor??????!!!!");
			break;
		case 10: printf("kucak istiyor");
			break;
		default : printf("boyle bir secim bulunamadı");
			break;
		
		
		
	}
	
	
	
	return 0;
}