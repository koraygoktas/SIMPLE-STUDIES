#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
	
	double ust,alt,num;
	scanf("%lf",&num);
	
	alt = floor(num);
	ust = ceil(num);	
	printf("ust= %lf\nalt= %lf",ust,alt);
	
	
	return 0;
}