#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Turkish");
	printf("türkiye");
	return 0;
}