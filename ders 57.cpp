#include <stdlib.h>
#include <stdio.h>
int main()
{
	char karakter[50];
	FILE *belge;
	belge=fopen("C:\\Users\\krygo\\Desktop\\bilgi.txt","r");
	
 //fgets komutu yeni satıra geçince,belirtilen karakter sayisini aşınca ve dosya sonu gelince almayı bırakır	
	fgets(karakter,10,belge);
	puts(karakter);
	fclose(belge);
	
	
	
	
	return 0;
}