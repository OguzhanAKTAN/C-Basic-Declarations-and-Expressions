#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[7];
    int i;
    printf("Dizinin 7 elemanini giriniz :\n");
    for(i=0;i<7;i++)
    {
        scanf("%d",&sayilar[i]);
    }
    for(i=0;i<7;i++)
    {
        if(sayilar[i]==0||sayilar[i]<0)
        {
            sayilar[i]=100;
        }
            printf("%d\n",sayilar[i]);
    }
    return 0;
}
