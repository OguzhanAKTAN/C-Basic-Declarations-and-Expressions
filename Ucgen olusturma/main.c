#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("1. kenar uzunlugu : "); scanf("%d",&x);
    printf("2. kenar uzunlugu : "); scanf("%d",&y);
    printf("3. kenar uzunlugu : "); scanf("%d",&z);

    if(x<(y+z) && y<(x+z) && z<(x+y))
    {
        int cevre;
        cevre = x+y+z;
        printf("\nCevre uzunlugu = %d",cevre);
    }
    else
    {
        printf("\nBu uzunluklarda ucgen olusturulamaz!");
    }
    return 0;
}
