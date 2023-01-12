#include <stdio.h>
#include <stdlib.h>

int main () {
	printf("koray\n");
	char kitapadi[20]="mufettisfjkewfnksei";
	printf("%s\n",kitapadi);
	char kitaptur[7]="roman"; //burada metinin içerdiği harf sayısından daha az yazsaydık çalıştırmazdı
	printf("kitap turu =%s\n",kitaptur );
	
	
	printf("**********kitap tanitimi**********\n");
	char yayin[20]="koray";
	char cilt[20]="roman";
	char sayfasayisi[20]="234";
	
	printf(" kitab yayini=%s\n kitap cildi=%s\n sayfa sayisi=%s",yayin,cilt,sayfasayisi );
	return 0;
}
