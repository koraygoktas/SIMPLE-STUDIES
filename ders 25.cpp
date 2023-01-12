#include <stdlib.h>
#include <stdio.h>
int main()
{
	int satir,sutun,i,j;
	printf("dizinin satir sayisini giriniz= ");
	scanf("%d",&satir);
	printf("dizinin sutun sayisini giriniz= ");
	scanf("%d",&sutun);
	int matris[satir][sutun];
	printf("\n");
	for (i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
		printf("matrisin [%d][%d] elemani= ",i+1,j+1);
		scanf("%d",&matris[i][j]);
		}
		printf("\n");
	}
	int k,m;
	for(k=0;k<satir;k++)
	{
		for(m=0;m<sutun;m++)
		{
			printf("%d ", matris[k][m]);
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}