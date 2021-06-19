#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,q,r,s;

    printf("1. No Giriniz: "); scanf("%d",&p);
    printf("2. No Giriniz: "); scanf("%d",&q);
    printf("3. No Giriniz: "); scanf("%d",&r);
    printf("4. No Giriniz: "); scanf("%d",&s);

    if((q > r) && (s > p) && ((r+s) > (p+q)) && (r > 0) && (s > 0) && (p%2 == 0))
    {
        printf("\nDogru Degerler!");
    }
    else
        printf("\nYanlis Degerler!");
    return 0;
}
