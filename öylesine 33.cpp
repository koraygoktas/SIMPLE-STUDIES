#include <stdlib.h>
#include <stdio.h>

void sirala(char soz[],int size)
{
	printf("bir metin giriniz: ");
	scanf("%s",&soz);
	int i,j,temp;
	for(i=0;i!='\0';i++)
	{
		for(j=i+1;j!='\0';j++)
		{
			if(soz[i]>soz[j])
			{
			
			temp=soz[i];
			soz[i]=soz[j];
			soz[j]=temp;
			}
		}
	}	
	printf("%s",soz);
}




int main()
{

char metin[20];
sirala(metin[],20); 
	
	
	
	
	
	
	
	
	return 0;
}