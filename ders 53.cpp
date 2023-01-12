#include <stdlib.h>
#include <stdio.h>
#define maksimum(s1,s2) (s1>s2) ? s1 : s2
#define minimum(sayi1,sayi2) (sayi1<sayi2) 

int main()
{
	printf("%d\n",maksimum(4,5) );
// 4, 5ten buyuk mü diye sorgulatıp buyukse s1 değilse s2 yazdır diyor yani
	printf("%d\n",minimum(5,6));//eger ? sayi1:sayi2 yazmazsan sadece yukardaki gibi sayi1<sayi2
	//yazarsan çalıştırdığında eger dogruysa 1 yanlıssa 0 sonucunu dondurecektir
	//bu kullanım yapısına MACRO denmektedir
		
	
	
	
	
	return 0;
}