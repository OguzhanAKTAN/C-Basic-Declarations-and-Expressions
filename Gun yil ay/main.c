#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yil,ay,gun;

    printf("Toplam gun sayisini giriniz: "); scanf("%d",&gun);

    yil=gun/365;
    gun=gun-(yil*365);
    ay=gun/30;
    gun=gun-(ay*30);

    printf("\nYil:Ay:Gun = %d:%d:%d",yil,ay,gun);
    return 0;
}
