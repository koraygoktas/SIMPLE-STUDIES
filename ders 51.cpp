#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
	
{
	int sayi2,secim,sonuc,sayi1;
	
printf("1.islem= iki sayinin toplami\n");
printf("2.islem= iki sayinin bolumu\n");
printf("3.islem= ilk sayi taban ikinci sayi us\n");
printf("4.islem= girilen sayinin karekoku\n");
printf("5.islem= 5x^2+4x+3 isleminin sonucu\n");

tekrar:
printf("bir secim yapiniz: ");
scanf("%d",&secim);

switch (secim)
{
	case 1: printf("1. ve 2. sayiyi giriniz: ");
			scanf("%d%d",&sayi1,&sayi2);
			sonuc=sayi1+sayi2;
			printf("sonucunuz: %d",sonuc);
			break;
					
	case 2: printf("iki sayi giriniz: ");
			scanf("%d%d",&sayi1,&sayi2);
			float fsonuc;
			fsonuc=sayi1/sayi2;
			printf("1. sayinin 2. sayiya bolumu=%.2f",fsonuc);
			break;
			
	case 3: printf("ilk olarak bir taban giriniz daha sonra sayinin ussunu giriniz: ");
			scanf("%d%d",&sayi1,&sayi2);
			sonuc=pow(sayi1,sayi2);
			printf("sonucunuz= %.2f",sonuc);
			break;
			
	case 4: printf("bir sayi giriniz: ");
			scanf("%d",&sayi1);
			float sonucf;
			sonucf= sqrt(sayi1);
			printf("girdiginiz sayinin karekoku = %.2f",sonucf);
			break;
			
	case 5: printf("x degerini giriniz: ");
			scanf("%d",&sayi1);
			sonuc= 5*sayi1*sayi1+4*sayi1+5;
			printf("sonucunuz= %d",sonuc);
			break;				
	
	default: printf("gecersiz bir secim yaptiniz lutfen tekrar deneyiniz.\n"); 
			 goto tekrar;
}









	
	
	
	
		
	
	
	return 0;
}