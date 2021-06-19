#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gunsayi=1329,yil,hafta,gun;
    printf("Gun sayisi :%d\n",gunsayi);

    yil  = gunsayi/365;
    hafta= (gunsayi%365)/7;
    gun = gunsayi-((yil*365)+(hafta*7));

    printf("\nYil:%d\n",yil);
    printf("Hafta:%d\n",hafta);
    printf("Gun:%d\n",gun);
    return 0;
}
