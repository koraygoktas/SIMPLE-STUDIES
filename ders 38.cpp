#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main ()
{
	char kelime[100];
//	printf("katar uzunlugu =%d",strlen("merhaba dunya"));
	
	
/*	printf("kelimeyi giriniz= ");
	scanf("%s",&kelime);
	printf("katar uzunlugu=%d",strlen(kelime));
	*/
	//scanfte kelime eğer bir kelimeden fazlaysa sadece ilk kelimenin uzunlugunu ölcer 
	//onun için gets puts ile yapman daha dogru olur
	
	printf("kelimeyi giriniz= ");
	gets(kelime);
	printf("katar uzunlugu = %d",strlen(kelime));
	
	
	
	
	
	
	
	
	
	
	return 0;
}