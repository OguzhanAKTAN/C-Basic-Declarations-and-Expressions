#include <stdio.h>
#include <stdlib.h>

int main()
{
    float agir1,agir2,tane1,tane2;

    printf("1.esyanin agirligi : "); scanf("%f",&agir1);
    printf("1.esyanin adeti    : "); scanf("%f",&tane1);
    printf("\n2.esyanin agirligi : "); scanf("%f",&agir2);
    printf("2.esyanin adeti : "); scanf("%f",&tane2);

    printf("\nOrtalama Deger = %f",((agir1*tane1)+(agir2*tane2))/(tane1+tane2));
    return 0;
}
