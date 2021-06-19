#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[5],i,sayac[5];
    printf("Dizinin 5 elemanini giriniz : ");
    for(i=0;i<5;i++)
    {
        sayac[i]=0;
        scanf("%d",&sayilar[i]);
        if(sayilar[i]<5)
        {
            sayac[i]=i;
        }
    }
    for(i=0;i<5;i++)
    {
        if(sayac[i]!=0)
        {
            printf("n[%d] = %d\n",sayac[i],sayilar[i]);
        }
    }
    return 0;
}
