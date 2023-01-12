#include <stdlib.h>
#include <stdio.h>

int main ()
{
	int sayilar[10];
	int i;
	for (i=0;i<10;i++){
		printf("dizi elemanlari giriniz=");
		scanf("%d",&sayilar[i]);
	}
	printf("sayilar dizinin elemanlari=");
	for (i=0;i<10;i++){
		printf("%d, ",sayilar[i]);
	}
	
	return 0;
}