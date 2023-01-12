
#include <stdio.h>

int main()
{
/*	int i,sayi,bolenler;
	printf("bir sayi giriniz");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		if(sayi%i==0)
		{
			printf("%d\n",i);
		}
	}
	
	*/
	
	int x,y,sonuc;
	char secim;

	printf("x ve y giriniz");
	scanf("%d%d",&x,&y);
	printf("\n");
	printf("**MENU**\n");
	printf("1.islem: toplama(+)\n");
	printf("2.islem: çıkarma(-)\n");
	printf("3.islem: carpam(*)\n");
	printf("4.islem: bolme(/)\n");
	
	printf("bir islem secimi yapiniz:");
	scanf("%s", &secim);
	switch(secim)
	{
		case '+': 
				sonuc= (x+y) ;
				printf("iki sayiyi topladiniz ve sonuc= %d",sonuc);
				break;
		
		case '-': 
				sonuc=(x-y);
				printf("iki sayiyi cikardiniz ve sonuc = %d",sonuc);
				break;
		
		case '*': 
				sonuc=(x*y);
				printf("girilen iki sayiyi carpiniz ve sonucunuz= %d",sonuc);
				break;
		case '/': 
				sonuc=(x/y);
				printf("iki sayiyi birbirine boldunuz ve sonuc= %d",sonuc);
				break;
		default:
				printf("gecersiz islem secimi");
				break;
	}
	
	return 0;
}