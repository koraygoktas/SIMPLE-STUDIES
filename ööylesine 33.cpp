#include <stdlib.h>
#include <stdio.h>

void eniki(int matris[],int size)
{

	for(int i=0;i<size;i++)
	{
		printf("deger giriniz: ");
		scanf("%d",&matris[i]);
	}
	int enkucuk,enbuyuk,ikincienbuyuk;
	enbuyuk=matris[0];
	enkucuk=matris[0];
	for(int i=0;i<size;i++)
	{
		if(matris[i]>=enbuyuk)
		{
			enbuyuk=matris[i];
		}
		if(matris[i]<=enkucuk)
		{
			enkucuk=matris[i];
		}
	}
	int j;
	for(int i=enbuyuk-1;i>enkucuk;i--)
	{
		for(j=0;j<size;j++)
		{
			if (matris[j]==i)
			{
				ikincienbuyuk=matris[j];
				goto bitir;
			}
		
		}
		
	}
	bitir:
	printf("en buyuk sayi=%d\en buyuk ikinci sayi ise=%d",enbuyuk,ikincienbuyuk);
	
	
	
}





int main()
{
	
	int dizi[10];
	eniki(dizi,10); 

	
	
	
	return 0;
}