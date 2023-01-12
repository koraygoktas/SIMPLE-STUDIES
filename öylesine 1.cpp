#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int ort,adet,sinav,sayac,toplam;
	printf("kac adet sinava girdiginizi yaziniz:");
	scanf("%d",&adet);
	sayac=0;
	toplam=0;
	while(sayac!=adet)
	{
	
		printf("sinav notunuzu giriniz:");
		scanf("%d",&sinav);
		toplam+=sinav;
		sayac++;
	}
	ort = toplam/adet;
	printf("sinavlarinizin ortalamasi=%d",ort);
	return 0;
}