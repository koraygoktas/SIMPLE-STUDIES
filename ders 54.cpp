#include <stdlib.h>
#include <stdio.h>
int main()
{
	FILE *dosya;
	dosya=fopen("C:\\Users\\krygo\\Desktop\\deneme3.txt","w"); 
	
	//yeni bi metin belgesi açılıyor programı çalıştırınca
	fputc('a',dosya);
	
	return 0;
}