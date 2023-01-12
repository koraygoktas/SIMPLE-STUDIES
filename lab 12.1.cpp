#include <stdlib.h>
#include <stdio.h>

int main ()
{
	char sehir1[25],sehir2[25],sehir3[25];
	int i;
	for (i=1;	i<4;i++)
	{
		switch(i){
			case 1: printf("1. sehri giriniz:\n");
					scanf("%s",&sehir1);break;
			case 2: printf("2. sehri giriniz:\n");
					scanf("%s",&sehir2);break;
			case 3: printf("3. sehri giriniz:\n");
					scanf("%s",&sehir3);break;
		}
	}
		printf("1. sehir=%s\n",sehir1);
		printf("2.sehir=%s\n",sehir2);
		printf("3.sehir=%s\n",sehir3);
		
	
	
	
	
	
	return 0;
}


