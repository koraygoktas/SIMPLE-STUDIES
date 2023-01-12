#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int i;
	for(i=0;i<=10;i++)
	{
		printf("metaverse\n");
	}
	int x;
	for(x=0;x<=10;x++)      // x++ yerine x+=1 yapabilirsin veya kaç arttırmak istediğini yazarsın
	{
		printf("%d. sayi=%d\n",x,x);
	}

	return 0;
}