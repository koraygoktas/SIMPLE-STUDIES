#include <stdlib.h>
#include <stdio.h>

	struct meslekbilgi
{
	char meslek[30];
	int yili;
	int maasi;
	
	
};

	struct meslekbilgi bilgi;



int main()
{
	printf("mesleginizi giriniz= ");
	gets(bilgi.meslek);
	printf("kac yillik oldugunu yaziniz= ");
	scanf("%d",&bilgi.yili);
	printf("meslegin maasini giriniz= ");
	scanf("%d",&bilgi.maasi);
	
	printf("\n\n");
	
	printf("mesleginiz : %s\n",bilgi.meslek);
	printf("ogrenim yili : %d\n",bilgi.yili);
	printf("meslegin maasi : %d\n",bilgi.maasi);
	
	
	
	
	
	
	return 0;
}