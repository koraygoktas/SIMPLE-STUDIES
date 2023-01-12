#include <stdlib.h>
#include <stdio.h>
int main()
{
	// %x teki x hexadecimaldeki x ten geliyor
	char kelime='a';
	int sayi=5;

	
	char *k=&kelime;
	int *s=&sayi;
	
	
	printf("kelimeniz =%c\n",kelime);
	printf("kelimenizin ramdeki yeri=%x\n",k);
	printf("\n\n");
	printf("sayiniz =%d\n",sayi);
	printf("sayinizin ram uzerindeki yeri=%x",s);
	
	
	return 0;
}