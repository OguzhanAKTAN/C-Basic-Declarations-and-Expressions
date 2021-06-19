#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1,x2,y1,y2,sonuc;

    printf("x1 : "); scanf("%f",&x1);
    printf("y1 : "); scanf("%f",&y1);
    printf("x2 : "); scanf("%f",&x2);
    printf("y2 : "); scanf("%f",&y2);

    sonuc = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("\nGirinlen Iki Nokta Arasindaki Uzaklik : %.4f",sqrt(sonuc));
    return 0;
}
