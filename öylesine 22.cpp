#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
	
	float x;
	int ondalikli,tamkisim;
	printf("bir x sayisi giriniz= ");
	scanf("%f",&x);
	
	tamkisim= ceil(x)-1;
	ondalikli= (x-floor(x))*1000;
	
	printf("ondalikli kisim=%d\n",ondalikli);
	printf("tam kismi= %d",tamkisim);
	
	
	
	
	 
	
	
	return 0;
}