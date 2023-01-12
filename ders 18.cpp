#include <stdlib.h>
#include <stdio.h>
int main()
{
	int sayilar[]={1,2,3,4,5};
	int i;
	/*
	}for (i=0;i<5;i++){
	
	printf("%d\n",sayilar[i]);
}*/
	if(sayilar[0]>sayilar[1]){
		printf("tamam");
	}	
	else {
		printf("yok\n");
	}
	char sehir[]={'a'};
	printf("%c\n",sehir[0]);
	
	int rakamlar[]={1,2,3,4};
	int toplam =0;
	for (i=0;i<4;i++){
		
		toplam+=rakamlar[i];
		
		
		
	}
	printf("sayilar toplami=%d",toplam);
	return 0;
}