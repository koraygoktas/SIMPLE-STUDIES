#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	double u,alan;
	printf("ucgenin kenar uzunluklarini giriniz");
	scanf("%d%d%d",&a,&b,&c);
	u=(a+b+c)/2;
	alan=sqrt(u*(u-a)*(u-b)*(u-c));
	printf("olusturdugunuz ucgenin alani= %.2lf",alan);
	
	//u=3  3*1*1*1	
	
	
	
	
	return 0;
}