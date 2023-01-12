#include <stdlib.h>
#include <stdio.h>
int main()
{
	
	int n,i,toplam=0;
	printf("diziniz kac elemanli olacak?");
	scanf("%d",&n);
	int dizi[n];
	for(i=0;i<n;i++)
	{
		printf("diiznin %d. elemanini giriniz:",i);
		scanf("%d",&dizi[i]);
		toplam+=dizi[i];
		
	}
	
	int ort;
	ort=toplam/n;
	printf("dizinizin ortalamasindan buyuk olan elemanlar=");
	for(i=0;i<n;i++)
	{
		
		if(dizi[i]>ort)
		{
			
			printf("%d ",dizi[i]);
		}
	}	
	printf("\n");
	int enkucuk,enbuyuk;
	enkucuk=dizi[0];
	enbuyuk=dizi[0];
	for(i=1;i<n;i++)
	{
		if(dizi[i]<=enkucuk)
		{
			enkucuk=dizi[i];
		}
		if(dizi[i]>=enbuyuk)
		{
			enbuyuk=dizi[i];
		}
	}
	printf("enkucuk=%d\n",enkucuk);
	printf("enbuyuk=%d\n",enbuyuk);
	printf("ortalama=%d\n",ort);
	printf("toplam=%d\n",toplam);
	
	int dizi2[n];
	int j=n;
	
	for(i=0;i<j;i++)
	{
		dizi2[i]=dizi[n-1];
		n=n-1;
	}
	
	
	printf("yeni dizinin elemanlari= ");//tersten yazma
	for(i=0;i<j;i++)
	{
		printf("%d ",dizi2[i]);
	}
	printf("\n");
	int temp;
	printf("kucukten buyuge siralama= ");//  4 3 5 2 8
	for(i=0;i<j;i++)
	{
		for(int m=i+1;m<j;m++)
		{
			if(dizi[i]>dizi[m])
			{
				temp=dizi[i];
				dizi[i]=dizi[m];
				dizi[m]=temp;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%d\t",dizi[i]);
	}
	return 0;
}