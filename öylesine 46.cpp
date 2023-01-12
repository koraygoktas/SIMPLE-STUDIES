#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char kelime[20];
	printf("kelime giirniz:");
	gets(kelime);
	char tersten[20];
	int uzunluk=strlen(kelime);
	int c=uzunluk/2;					
	int temp;
	for(int i=0;i<c;i++)
	{
		temp=kelime[i];
		kelime[i]=kelime[uzunluk-i-1];
		kelime[uzunluk-i-1]=temp;
		
	}
	printf("%s",kelime);
	
	
	
	
	
	
	
	
	return 0;
}