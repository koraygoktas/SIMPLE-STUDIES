#include <stdlib.h>
#include <stdio.h>

# define size 10
void sayikontrol(int matris[])
{
	int a;
	int b;
	int c;                      //233  c=233 a=3 
	for(int i=0;i<size;i++)
	{
		c=matris[i];
		a=matris[i]%10;
		b=(matris[i]/10)%10;
		while(matris[i]!=0&&a==b)
		{
			matris[i]/=10;
			b=matris[i]%10;
		}
		if(matris[i]==0)
		{
			printf("%d sayinizin tum basamkalari aynidir\n",c);
		}
		else
		{
			printf("%d sayinizin tum basamaklari ayni degildir\n",c);
		}
		
	}
}



int main()
{
	
int dizi[size]={233,45,777,81,999999,36,90,88,11,61};
sayikontrol(dizi);	
	
	
	
	
	
	return 0;
}