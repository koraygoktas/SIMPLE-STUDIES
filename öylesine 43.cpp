#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char c,metin[20],sifrelenmismetin[20];
	int anahtar ,i=0;
	printf("sifrelenecek metni giriniz:");
	scanf("%s",&metin);
	printf("anahtar giriniz:");
	scanf("%d",&anahtar);
	while(i<strlen(metin))
	{
		c=metin[i];
		sifrelenmismetin[i]= (char) (((int) c)+anahtar);
		i++;
	}
	
	
	printf("sifrelenmis ifade=%s",sifrelenmismetin);
	
	return 0;
}