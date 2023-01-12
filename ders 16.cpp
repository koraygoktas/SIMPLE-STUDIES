#include <stdlib.h>
#include <stdio.h>
int main(){
	int sonuc,sayi1,sayi2,secim;
	sayi1=6;
	sayi2;3;
	printf("***MATEMATİKSEL İSLEMLER***\n\n\n");
	printf("1-iki sayinin toplami\n");
	printf("2-iki sayinin farki\n");
	printf("3-iki sayinin carpimi\n");
	printf("4-iki sayinin bolumu\n");
	printf("lutfen bir secim yapiniz\n");
	scanf("%d",&secim);
	 switch(secim){
	 	
	 	case 1: sonuc=9;
			printf("sonucunuz:%d",sonuc);
			break;
		case 2: sonuc=3;
			printf("sonucunuz=%d",sonuc);	 	
	 		break;
	 	case 3: sonuc=18;
	 		printf("sonucunuz=%d",sonuc);
	 		break;
	 	case 4: sonuc=2;
	 		printf("sonucunuz=%d",sonuc);
	 		break;
	 	default:printf("boyle bir islem sekli bulunmamaktadir");
	 		break;
	 }
	
	
	
	
	
	
	return 0;
}