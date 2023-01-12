#include <stdio.h>
#include <stdlib.h>
int main ()
{
	// 0 1 1 2 3 5 8 13 21 34 55 
	int a,b,c,i;
	a=1;
	b=1;
	printf("%d\n",a);
	printf("%d\n",b);
	
	for (i=1;i<=8;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}

	
	return 0;
}