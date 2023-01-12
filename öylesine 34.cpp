#include <stdlib.h>
#include <stdio.h>
#include <string.h>




int main()

{
	char kelime[12];
	printf("bir kelime giriniz");
	scanf("%s",&kelime);
	printf("kelimenizin tersi= %s",strrev(kelime));
	
	
	
	return 0;
}