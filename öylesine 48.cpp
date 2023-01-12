#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()

{

	char kelime[10];	
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%c\t",&kelime[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%c\t",kelime[i]);
	}
	
	
		
	
	
	return 0;
}