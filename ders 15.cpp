#include <stdlib.h>
#include <stdio.h>
int main()
{
	int sayi;
	printf("lutfen bir ay numarasi giriniz:");
	scanf("%d",&sayi);
	switch(sayi){
		case 1:printf("ocak");      //pritnf("ocak");break; şeklinde de olabiliyormuş
		break;
		case 2:printf("subat");     // eğer break; koymazsan ve mesela 1 yazarsan sırasıyla 
		break;                      // hepsini yazar ocak subat mart nisan hatalı sayı girisi diye
		case 3: printf("mart");
		break;
		case 4: printf("nisan");
		break;
		default:printf("hatali sayi girisi");
		break;
		
		
		
	 } */
	 char harf;
	 printf(" ders kodunuzu giriniz=");
	 scanf("%s",&harf);
	 
	 switch (harf)
	 {
	 	case 'm': /*matematik*/ printf("dersiniz matematik");break;
		case 't': /*turkce*/ printf("dersiniz turkce");break;
		case 's': /*sosyal*/ printf("dersiniz sosyal");break;
		default: printf("boyle bir ders kodu bulunamadı");break;
	 	
	 	
	 	
	 }
	
	
	
	
	return 0;
	
}