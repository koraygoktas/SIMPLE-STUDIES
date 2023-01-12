#include <stdlib.h>
#include <stdio.h>

int toplam(int s1,int s2)
{
	int s3;
	s3=s1+s2;
	return s3;
}





int main()
{
	int a,b;
	int top;
	printf("a sayisini giriniz: ");
	scanf("%d",&a);
	printf("b sayisini giriniz: ");
	scanf("%d",&b);
	
	top=toplam(a,b);
	printf("%d",top); 
	
	
	
	return 0;
}