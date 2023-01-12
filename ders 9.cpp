#include <stdlib.h>
#include <stdio.h>
int main(){
	int x;
	printf("bir sayi giriniz:");
	scanf("%d",&x);
	if (x%5==0)
	{
		printf("girdiginiz sayi 5'e satm bolunur");
		
	}
	else
	{
		printf("girdiginiz sayi 5'e tam bolunmez");
	}
	int ort,snv1,snv2,snv3;
	printf("1.notunuzu giriniz");
	scanf("%d",&snv1);
	printf("2.sinavinizin notunu giriniz");
	scanf("%d",&snv2);
	printf("3. sinavinizin notunu giriniz");
	scanf("%d",&snv3);
	ort= (snv1+snv2+snv3)/3;
	if (ort>=50)
	{
		printf("gectin!!");
		
	}
	else
	{
		printf("kaldin!!");
	}
	return 0;
	
}