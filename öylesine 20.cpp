#include <stdlib.h>
#include <stdio.h>
int main()
{
	FILE *dosya;
	// dosya adını genelde yeni bi metin belgesi açıp ordan kopyalayıp yapıştırıyoruz
	// fakat kopyasında aralarda sadece tek ters slash olmakta fakat program 2 tanesiyel çalışıyor
	dosya=fopen("C:\\Users\\krygo\\Desktop\\deneme2.txt","w");// write ın w si
	//fopen daki f filedan geliyor
	fputs("adi:koray",dosya);
	fputs("\nsoy adi:goktas",dosya);
	fputs("\nmeslegi:yazilim muhendisligi",dosya);
	
	fclose(dosya);
	
	
	
	return 0;
}