#include <stdio.h>
#include <stdlib.h>

int main()
{
    int saat,dakika,saniye;


    printf("Toplam saniyeyi giriniz: "); scanf("%d",&saniye);

    saat=saniye/3600;
    saniye=saniye-(saat*3600);
    dakika=saniye/60;
    saniye=saniye-(dakika*60);

    printf("\nSaat:Dakika:Saniye = %d:%d:%d",saat,dakika,saniye);

    return 0;
}
