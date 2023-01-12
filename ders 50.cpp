#include <stdlib.h>
#include <stdio.h>

/*int kupbul(int sayi1)
{
	int sonuc=sayi1*sayi1*sayi1;
	return sonuc;
	
}*/

int dikdortgen(int kisa,int uzun)
{
	int i,j;
	for(i=0;i<uzun;i++)
	{
		for(j=0;j<kisa;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}




int main()
{
/*	int sayi;
	printf("sayi giriniz: ");
	scanf("%d",&sayi);
	printf("sayinizin kubu= %d",kupbul(sayi));
	*/
	dikdortgen(5,10); 
	
	
	
	
	
	return 0;
}