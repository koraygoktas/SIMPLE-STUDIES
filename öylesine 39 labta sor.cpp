#include <stdio.h>
#include <stdlib.h>

int SayiKontrol(int sayi)
{
    int basamak=sayi%10;
    sayi/=10;

    while(sayi>0)
    {
        if(basamak!=sayi%10)
        {
            return 0;
        }
        sayi/=10;

    }

    return 1;
}


int main()
{
   int a[10]={233,45,777,99999,36,90,88,11,61};
   for(int i=0;i<10;i++)
   {
       if(SayiKontrol(a[i]))
       {
           printf("%d >> tum basamaklari esit.\n",a[i]);
       }
       else
        {
        printf("%d >> tum basamaklari esit degildir.\n",a[i]);
       }
   }
    return 0;
}