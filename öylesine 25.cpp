#include <stdlib.h>
#include <stdio.h>
int main()
{
	int dizi[2][2];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		
		printf("dizinin %d. satirin %d. sutundaki elemanini giriniz:",i,j);
		scanf("%d",&dizi[i][j]);
		printf("\n");
	    }
	}
	
	int sonuc;
	sonuc= dizi[0][0]*dizi[0][1];
	printf("sonucunuz = %d",sonuc);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}