#include <stdlib.h>
#include <stdio.h>

int maksimum(int sayi1,int sayi2)
{
	int maks;
	if(sayi1<sayi2)
	{
		maks=sayi2;
	}
	else 
	{
		maks=sayi1;
	}
	return maks;
}


int main()
{
	printf("%d",maksimum(4,5) );
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}