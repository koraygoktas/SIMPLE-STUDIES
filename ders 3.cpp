#include <stdio.h>
#include <stdlib.h>

int main (){
	

	printf("\n");
	// scanfte boşluklu bir sey yazdığında sadece ilk kelimeyi gösterir o yüzden direkt printf tercih edilir
	// mesela fareler ve insanlar yazacak olursan sadece fareler gözükür
	
	 char kitapad[20], meslek[30],ulke [20],araba[20];
	 printf("kitap adi giriniz= ");
	 scanf("%s",&kitapad);
	 printf("mesleginizi giriniz= ");
	 scanf("%s",&meslek);
	 printf("yasadiginiz ulkeyi giriniz= ");
	 scanf("%s",&ulke);
	 printf("araba modelinizi giriniz= ");
	 scanf("%s",&araba);
	 printf("mesleginiz = %s\n yasadiginiz ulke = %s\n araba modeliniz = %s\n girdiginiz kitabin adi=%s",meslek,ulke,araba,kitapad);
	 
	 
	return 0;
}