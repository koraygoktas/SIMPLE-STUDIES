#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20],str2[20],str3[20];
	
	printf("str1 ve str2 dizilerini yaziniz= ");
	gets(str1);
	gets(str2);
	int secim;
	printf("bir islem seciniz: ");
	scanf("%d",&secim);
	switch(secim)
	{
		case 1: 
				printf("kelime uzunlugu=%d ",strlen(str1) );
				break;
		case 2:
				printf("kelime uzunlugu= %d",strlen(str2));
				break;
		case 3:
				strcat(str3,str1);
				strcat(str3," ");
				strcat(str3,str2);
				printf("%s",str3);
				break;
		case 4: 
				int i;
				char maks;
				maks=str1[0];
				for( i=0;str1[i]!='\0';i++)
				{
					if(str1[i]>=maks)
					{
						maks=str1[i];
					}
				}		
				printf("%c",maks);
				break;
		case 5: 
				char min;
				min=str2[0];
				for(int i=0;str2[i]!='\0';i++)
				{		
					if(str2[i]<=min)
					{
						min=str2[i];	
					}	
				}		
				printf("%c",min);
				break;
		default: 
				printf("gecersiz islem");
				break;
	}
	
	
	
	
	return 0;
}