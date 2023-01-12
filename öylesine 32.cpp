#include <stdlib.h>
#include <stdio.h>

//geri dönüşümsüz yani voidli fonsiyonları int mainde çağırırken direkt fonkadı() ile çağırabililriz
//fakat geri dönüşümlüllerde int main içinde çağırırken printf("%d",fonkadı()) ile çağırmamız gerekiyor

/* float pisayisiilecarpim(int sayi1)
return(sayi1*3,14)*/  //bu da örnek bir fonk tipi yani islemi direkt returnun icinde yapabiliyoruz

int fact(int sayi1){
	int faktoriyel=1;
	int i;
	for(i=1;i<=sayi1;i++)
	{
		faktoriyel=faktoriyel*i;
	
	}
	return faktoriyel;
}

void asalmi(int sayi1){
	int i;
	int sayac=0;
	for(i=2;i<sayi1;i++)
	{
		if(sayi1%i==0)
		{
			sayac+=1;
			printf("sayiniz asal degildir");
			
		}
	}
	if(sayac==0){
		printf("sayiniz asaldir");
	}
}

void tekcift(int sayi1)
{
	if(sayi1%2==0)
	{
		printf("sayiniz cifttir");
	}
	else {
		printf("sayiniz tektir");
	}
}


int main()
{
	int secim,s1;
	printf("secim yapiniz: ");
	scanf("%d",&secim);
	switch(secim)
	{
		case 1:
		printf("bir sayi giriniz: ");
		scanf("%d",&s1);
		printf("%d",fact(s1));
		break;
		case 2:
		printf("bir sayi giriniz: ");
		scanf("%d",&s1);
		asalmi(s1); 
		break;
		case 3:
		printf("bir sayi giriniz: ");
		scanf("%d",&s1);
		tekcift(s1);
		break;
		default:
		break;
	}
	
	
	
	
	
	return 0;
}