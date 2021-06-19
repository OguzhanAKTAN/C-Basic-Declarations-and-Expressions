#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sayilar[5],kucuk=0,pozisyon;
    printf("Dizinin 5 elemanini giriniz:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&sayilar[i]);
        if(i==0)
        {
            kucuk=sayilar[i];
        }
        if(sayilar[i]<kucuk)
        {
            kucuk=sayilar[i];
            pozisyon=i;
        }
    }
    printf("\nEn kucuk deger : %d\nPozisyonu : %d",kucuk,pozisyon+1);
    return 0;
}
