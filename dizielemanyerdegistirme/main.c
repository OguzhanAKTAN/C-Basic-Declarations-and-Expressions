#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[6],i,temp;
    printf("Dizinin 6 elemanini giriniz:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&sayilar[i]);
    }
    temp=sayilar[5];
    sayilar[5]=sayilar[0];
    sayilar[0]=temp;
    temp=sayilar[4];
    sayilar[4]=sayilar[1];
    sayilar[1]=temp;
    printf("\n");
    for(i=0;i<6;i++)
    {
        printf("%d\n",sayilar[i]);
    }
    return 0;
}
