#include <stdlib.h>
#include <stdio.h>
int main()
{
	char harf='k';
	char *pt=&harf;
	printf("ramdeki yeri %x\n",pt);
	
	pt--;
	printf("ramdeki yeri %x\n",pt);
	
	
	
	
	
	
	
	return 0;
}