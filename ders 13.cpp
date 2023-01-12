#include <stdlib.h>
#include <stdio.h>
int main(){
	int x;
	for(x=1;x<=50;x++){
		if (x%5==0){
		
		printf("%d\n",x);
	}
}
	int bas1,bas2,bas3,n;
	printf("3 basamakli bir sayi giriniz:");
	scanf("%d",&n);
	bas3=n%10;
	bas2=(n%100-bas3)/10;
	bas1=(n-bas2*10-bas3)/100; //direkt n/100 de yapabilirsin cünkü tam sayı olarak dondurecek zaten
	printf("1.basamak=%d\n2.basamak=%d\n3.basamak=%d",bas1,bas2,bas3);
	
	
	
	
	return 0;
}