#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
	double sonucsin,sonuccos,derece;
	printf("derece giriniz= ");
	scanf("%lf",&derece);
	sonucsin= sin(derece);
	sonuccos= cos(derece);
	printf("sinus= %lf\ncosunus=%lf",sonucsin,sonuccos);
	
	
	
	return 0;
}