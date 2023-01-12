#include <stdlib.h>	
#include <stdio.h>



	
	int main()
{
 char kelime[10];
 printf("kelime girin");
 scanf("%s",&kelime);
 char harfler[]={'a','b'};
 int i,j;
 int sayac=0;
 for(i=0;i<5;i++)
 {
 	for(j=0;j<2;j++)
	 {
	 	if(harfler[j]==kelime[i])
	 	{
	 		sayac+=1;
		 }
		 }	
 }	
	
	printf("%d",sayac);
	return 0;
}