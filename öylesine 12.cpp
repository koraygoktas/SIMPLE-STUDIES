#include <stdlib.h>
#include <stdio.h>
int main()
{
	int sayi,toplam=0;
	printf("bir sayi giriniz : ");
	tekrar:
	scanf("%d",&sayi);
	if (sayi!=0)
	{
		toplam+=sayi;
		printf("tekrar sayi giriniz : ");
		goto tekrar;
	}
	else
	{
		printf("klavyeden 0 girdiniz ve program sonlandi:(((\n");
		printf("sifir girilene kadar girdiginiz sayilarin toplami=%d",toplam);
	}
	
	
	return 0;
}