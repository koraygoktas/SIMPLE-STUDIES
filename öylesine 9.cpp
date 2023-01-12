#include<stdlib.h>
#include <stdio.h>

int main()
{
	char secim;
	
	printf("eger devam etmek istiyorsaniz y'ye(yes), devam etmek istemiyorsaniz n'ye(no) basiniz\n");
	printf("seciminizi lutfen kucuk harfler ile yapiniz\n");
	printf("lutfen bir secim yapiniz= ");
	tekrar:
	scanf("%c",&secim);
	
	switch(secim){
		case 'y': printf("siradaki sayfaya yonlendiriliyosunuz --->");
		break;
		case 'n': printf("isleminiz sona ermistir:(. Sayfadan cikis islemi yapiliyor...");
		break;
		default : printf("tekrar deneyiniz");
		goto tekrar;
	}
	
	
	
	
	
	return 0;
}