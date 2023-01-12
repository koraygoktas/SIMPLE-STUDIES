#include <stdlib.h>
#include <stdio.h>
int main()
{
	// FİLE *DOSYA dediğimizde oradaki * gösterici olmaktadır
	// sallıyorum deneme adında bir dosya oluşturdun ve içine merhaba yazdın eğer programı
	// tekrar çalıştırırsan deneme adlı metin belgesi sıfırdan oluşturulur ve içindeki merahaba silinir
	// puts taki s stringten gelip putc deki c chardan gelmektedir
	
	
	FILE *dosya;
	dosya=fopen("C:\\Users\\krygo\\Desktop\\bilgi.txt","w");
	
	fputc('a',dosya);// dersen deneme adlı oluşturulan dosyada a yazmakta olacaktır
	fputc('\n',dosya);//a ile b yi farklı satırlara yazdırdı
	fputc('b',dosya);
	//programı üst üste çalıştırdıkça hep yeni a ve b yazmayacak 
	fclose(dosya);// ile birlikte okumayı kapattık,kapattıktan kastım dosyayı ortadna silmek veya
	//yazılanları ortadan akldırmak değil
	
	return 0;
}