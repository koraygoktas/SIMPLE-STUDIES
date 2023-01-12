#include <stdlib.h>
#include <stdio.h>
int main()
{
	char veri1[30]="bilgisayar ";
	char veri2[20]="muhendisligi ";
	char veri3[20]="bolumu";
	FILE *metinbelgesi;
	metinbelgesi=fopen("C:\\Users\\krygo\\Desktop\\bilgi.txt","w");
	fputs(veri1,metinbelgesi );
	fputs(veri2,metinbelgesi );
	fputs(veri3,metinbelgesi );
	
	fclose(metinbelgesi );
	
	
	return 0;
}