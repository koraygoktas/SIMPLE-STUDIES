#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
//62fe38
	int sayi=2,sayi2=3;
	char kelime='a';
	char kelime2[10]="koray";
	
	printf("sayi1=%d\nsayi2=%d\nkelime=%c\nkelime2=%s\n",sayi,sayi2,kelime,kelime2);
	printf("\n\n");
	printf("BELLEK ADRESLERI-->\n");
	printf("\n\n");
	printf("%x\n",&sayi);
	printf("%x\n",&sayi2);
	printf("%x\n",&kelime);
	printf("%x\n",&kelime2);
	
	
	
/*	
	int sonuc,a=1,b=2;
	sonuc = fabs(a-b);
	printf("%d",sonuc);
	
	*/
	return 0;
}