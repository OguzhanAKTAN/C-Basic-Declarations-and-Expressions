#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[7],i;
    printf("Dizinin ilk elemanini giriniz: ");  scanf("%d",&sayilar[0]);
    for(i=1;i<7;i++)
    {
        sayilar[i]=sayilar[i-1]*3;
    }
    for(i=0;i<7;i++)
    {
        printf("n[%d] = %d\n",i,sayilar[i]);
    }
    return 0;
}
