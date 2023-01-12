#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
/*	char kaynak[30]="selam koray";
	char kopya[30]="";
	strcpy(kopya,kaynak);
	printf("%s",kopya);
	*/
	char nereden[30]="selam koray";
	char nereye[30]="";
	strncpy(nereye,nereden,8);
	printf("%s",nereye);
	// STRNCPY DEKİ N KAC ADET ELEMAN YAZDIRILACAĞINI BELİRLİYOR
	
	
	
	
	
	
	
	
	
	
	return 0;
}