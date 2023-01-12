#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char kitapadi[30],yazar[30],kitapyazar[60];
	printf("kitap di giriniz= ");
	gets(kitapadi);
	printf("kitabin yazarini giriniz= ");
	gets(yazar);
	strcat(kitapyazar,kitapadi);
	strcat(kitapyazar,"<-->");
	strcat(kitapyazar,yazar);
	printf("%s",kitapyazar);
	
	
	
	return 0;
}