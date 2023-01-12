#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()

{
	//LOG TABANI e DİR YANİ 2.71828182846
	// MUTLAK DEĞERLİ İŞLEMLER İÇİN DOUBLE KULLANILIR İNT KULLANILMAZ
	double sonuc,sayi,sonuc2;
	printf("bir sayi giriniz= ");
	scanf("%lf",&sayi);
	sonuc = fabs(sayi);
	printf("sonucunuz =%.lf\n",sonuc);
	sonuc2= log(sayi);
	printf("sonucunuz =%.7lf",sonuc2);
	
	
	
	
	
	
	return 0;
}