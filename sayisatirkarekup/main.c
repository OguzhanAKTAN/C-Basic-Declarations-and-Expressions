#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir,sayac=1;
    printf("satir sayisini giriniz: "); scanf("%d",&satir);
    for(int i=0;i<satir;i++)
    {
        printf("%d %d %d\n",sayac,sayac*sayac,sayac*sayac*sayac);
        sayac++;
    }
    return 0;
}
