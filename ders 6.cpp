#include <stdlib.h>
#include <stdio.h>
int main(){
	//FLOAT DEĞİŞKENLER
	
	float alan,cevre,ort,top,sayac,adet,sinav,kisa,uzun;
	printf("kac adet sinava girdiginizi yaziniz:");
	scanf("%f",&adet);
	sayac=0;
	top=0;
	while(sayac!=adet){
		printf("sinav notu giriniz:");
		scanf("%f",&sinav);
		top+=sinav;
		sayac++;
	}
	ort=top/sayac;
	printf("sinavinizin ortalamasi =%f\n",ort);
	printf("dikdortgeninizin kisa kenarini giriniz:");
	scanf("%f",&kisa);
	printf("dikdortgeninizin uzun kenarini giriniz:");
	scanf("%f",&uzun);
	cevre=uzun*2+kisa*2;
	alan=uzun*kisa;
	printf("dikdortgeninizin cevresi=%f\n alani=%f",cevre,alan);
	return 0;
}