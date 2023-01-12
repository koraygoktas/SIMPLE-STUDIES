#include <stdlib.h>
#include <stdio.h>

int ekle(int matris[],int size)
{
	int sayi;
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	int i,temp;
	for(i=0;i<size;i++)
	{
		if(sayi<=matris[i])
		{									//1 2 3 4 5 7 8
			
			for(i;i<size-i-1;i++)
			{
				temp=matris[i];
				matris[i]=sayi;
				matris[i+1]=temp;
			}
		}
	}
	return matris;
}


int main()
{
	int dizi[8]= {1,2,3,4,5,7,8};
	printf("diziniz=%d",ekle(dizi,8));
	
	
	
	
	
	
		return 0;
}