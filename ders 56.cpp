#include <stdlib.h>
#include <stdio.h>
int main()
{
	char karakter;
	FILE *belge;
	belge = fopen("C:\\Users\\krygo\\Desktop\\bilgi.txt","r"); // r readten geliyor
	
	do
	{
		karakter = getc(belge);
		printf("%c",karakter);
	}
	while (karakter!=EOF);// END OF FİLE DEMEK ve do dan sonraki whileda noktalı virgül konur
	fclose(belge);
	
	//bu program daha önceden açılmış olan belgede yazılan şeyleri okutan programdır
	
	
	
	return 0;
}