#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sayilar[5],toplam=0;
    for(i=0;i<5;i++)
    {
        printf("%d. sayiyi giriniz",i);
        scanf("%d",&sayilar[i]);
    }
    for(i=0;i<5;i++)
    {
        if((sayilar[i]%2) != 0)
        {
            toplam+=sayilar[i];
        }
    }

    printf("Asal Sayilarin Toplami : %d\n",toplam);
    return 0;
}
