#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x;
    printf("Reel sayiyi giriniz : ");   scanf("%lf",&x);
    printf("sin(1/sayi) = %.2lf",sin(1/x));
    return 0;
}
