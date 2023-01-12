#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()

{
	int x,y,sonuc;
	printf("taban giriniz: ");
	scanf("%d",&x);
	printf("us giriniz: ");
	scanf("%d",&y);
	
	sonuc = pow(x,y);
	printf("sonuc= %d",sonuc);
	
	
	
	
	return 0;
}