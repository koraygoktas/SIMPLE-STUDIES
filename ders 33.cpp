#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()

{
	double sayi,sayi1,sayi2;
	/*
	printf("sayi giriniz= ");
	scanf("%lf",&sayi);
	printf("sayiniz =%.2lf",sayi); */
	
	printf("sayi giriniz= ");
	scanf("%lf",&sayi);
	
	sayi1=floor(sayi);
	
	sayi2=ceil(sayi);
	
	printf("sayi1= %lf\n",sayi1);
	printf("sayi2= %lf",sayi2);
	
	
	
	
	return 0;
}