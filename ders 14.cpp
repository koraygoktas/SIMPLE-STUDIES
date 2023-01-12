#include <stdio.h> 
#include <locale.h>


int main()
{
	
	//0-20 çiftleri listele ama 14 hariç
	int x;
	x=0;
	while(x<=20){
		if (x==14){
			x=16;
			while(x<=20){
				printf("%d\n",x);
				x+=2;
			}
		}
		else{
		printf("%d\n",x);
		x+=2;
		}
		
	}
	int n,faktor;
	faktor=1;
	printf("bir n sayisi giriniz:");
	scanf("%d",&n);
	while(n!=1){
		faktor*=n;
		n--;
	}
	printf("girdiginiz sayinin faktoriyeli=%d",faktor);
	return 0;

	
}