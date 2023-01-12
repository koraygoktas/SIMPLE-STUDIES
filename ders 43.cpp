#include <stdlib.h>
#include <stdio.h>




struct ogrencibilgi
{
	char ad[10];
	char soyad[10];
	double no;
	int sinif;
	
	
	
};

	struct ogrencibilgi ogr;



int main()
{
	printf("adi= ");
	gets(ogr.ad);
	printf("soyad= ");
	gets(ogr.soyad);
	printf("no= ");
	scanf("%lf",&ogr.no);
	printf("sinif= ");
	scanf("%d",&ogr.sinif);
	
	printf("\n\n");
	
	printf("ogrencinin adi= %s\n",ogr.ad);
	printf("ogrencinin soy adi= %s\n",ogr.soyad);
	printf("ogrencinin numarasi= %.lf\n",ogr.no);
	printf("ogrencinin sinifi= %d\n",ogr.sinif);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}