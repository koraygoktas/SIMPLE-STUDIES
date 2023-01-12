#include <stdlib.h>
#include <stdio.h>
int main(){
	int toplam,sayi1,sayi2;
	printf("birinci sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	toplam = sayi1 + sayi2;
	if(toplam>50)
	{printf("sayilarin toplami=%d ve 50 den buyuktur",&toplam);
	}

	else
	{printf("sayilarin toplami=%d ve 50 den kucuktur",&toplam);
	}
	return 0;
}