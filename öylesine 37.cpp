#include <stdlib.h>
#include <stdio.h>
#include <string.h>
	int kontrol(int sayac)
	{
		char kelime[10];
		printf("kelime giriniz:");
		scanf("%s",&kelime);
		char sesliler[]={'a','e','u','i','o','U','O','E','A','I',};
		int uzunluk;
		uzunluk=strlen(kelime);
		int i,j;
		for(i=0;i<uzunluk;i++)
		{
			for(j=0;j<uzunluk;j++)
			{
				if(kelime[i]==sesliler[j])
				{
					sayac+=1;
				}
			}
		}
	return sayac;
	}

int main()
{
	
		printf("kelimenizdeki %d adet sesli harf bulunmaktadir",kontrol(0) );
		
	
	return 0;
}