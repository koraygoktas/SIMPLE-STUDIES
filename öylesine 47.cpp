#include <stdlib.h>
#include <stdio.h>
int main()
{
	
	char elemanlar[10];
	int i;
	printf("elemanlari giriniz:");
	for( i=0;i<10;i++)
	{
		scanf("%c",&elemanlar[i]);
	}
	int sayac=0;
	int j;
	char enfazla;          
	int siklik;
	for(i=0;i<10;i++)          
	{
		for(j=i+1;j<10;j++)
		{
			if(elemanlar[i]==elemanlar[j])
			{
				sayac+=1;
			}
			
		}
		printf("%c elemaninin sikligi=%d\n",elemanlar[i],siklik);
		
		
	}
	
	
	
	
	
	
	
	
	
return 0;	
} 