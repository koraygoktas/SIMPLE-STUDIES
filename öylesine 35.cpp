#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	
	char kelime[30];
	printf("kelime giriniz: ");
	scanf("%s",&kelime);
	int uz,i=0,j,temp;
	uz=strlen(kelime);
	for(i=0;i<uz;i++)
	{
		for(j=i+1;j<uz;j++)
		{
			if(kelime[i]>kelime[j])
			{
				temp=kelime[i];
				kelime[i]=kelime[j];
				kelime[j]=temp;
			}
		}
	}
	
	printf("kelimenizin yemi hali=%s",kelime);
	
	
	
	
	return 0;
	
}