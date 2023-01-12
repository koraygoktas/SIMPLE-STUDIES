#include <stdio.h>
#include <stdlib.h>
int main()
{
	int toplam,i;
	toplam=0;
	for(i=1;i<=41;i+=4){
		toplam+=i;
	}
	printf("%d",toplam);
	
	
	
	return 0;
}