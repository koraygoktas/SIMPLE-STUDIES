#include <stdio.h>
#include <stdlib.h>
int main(){
	int sayi,dizi[100],ort,toplam,i;
	toplam=0;
	ort=0;
	
	printf(" eleman sayisi giriniz:");
	scanf("%d",&sayi);
	
	for (i=0;i<sayi;i++)
		{	
			printf("dizinizin %d. elemanini giriniz:",i+1);
			scanf("%d",&dizi[i]);
		
		
		}	
	for (i=0;i<sayi;i++)
		{
			toplam+=dizi[i];
			
		}
	
	ort=toplam/sayi;
	printf("dizinizin elemanlarinin toplami=%d\ndizinizin elemanlarinin ortalamasi=%d",toplam,ort);
	return 0;
}