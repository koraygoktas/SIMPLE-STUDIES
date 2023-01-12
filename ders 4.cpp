#include <stdio.h>

#include <stdlib.h>
int main(){
		int sayi;
	printf("%d\n",sayi); //eğer sayiyi bir şeye eşitlemezsek sistem bunu default değeri olarak sıfır kabul eder
 //%d deki d demical sayilardan gelmektedir %s deki s stringten  gelmketedir
    int sayi1,sayi2,top,fark;
    sayi1=5;
    sayi2=2;
    top = sayi1 + sayi2;
    fark = sayi1-sayi2;
    printf(" girdiginiz iki sayinin toplami=%d\n girdiginiz sayilarin farki=%d\n",top,fark);

    /* veya printf("girdiginiz iki sayinin toplami=%d",toplam)
            printf("girdiginiz iki sayinin farkı=%d",fark) şeklinde de yapabilirsin */
    //in değişken türü sadece tam sayı döndürür yani 10/6 yı 1.33 yerine 1 olarak gösterir
    
    
    // diğer
    int bagaj,el,artik,toplam,extra;
    printf("bagaj hakkinizi giriniz:");
    scanf("%d",&bagaj);
    printf("el hakkinizi giriniz:");
    scanf("%d",&el);
    printf("toplam kilonuzu giriniz:");
    scanf("%d",&toplam);
    artik=toplam-bagaj-el;
    extra = artik*5;
    printf("ekstra olarak yuk tasima hakki almak icin %d tl odemeniz gerekmektedir",extra);
    
    
	
	return 0;
}