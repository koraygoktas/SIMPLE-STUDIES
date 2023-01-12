#include <stdlib.h>
#include <stdio.h>

struct kitapbilgi
{
	char kitap_adi[30];
	char kitap_yazari[30];
	float kitap_puani;
	float kitap_parasi;	
};



int main ()
{
	struct kitapbilgi kb={"fareler ve insanlar","koray goktas",9.6,150.50};
	printf("kitap adi = %s\n",kb.kitap_adi);
	printf("kitap yazari = %s\n",kb.kitap_yazari);
	printf("kitap puanlamasi = %.1f\n",kb.kitap_puani);
	printf("kitap fiyati = %.2f",kb.kitap_parasi);

	
	
	
	return 0;
}