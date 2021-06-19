#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,q,carpim;
    printf("Satir sayisini giriniz: "); scanf("%d",&p);
    printf("Satirdaki sayi sayisini giriniz : "); scanf("%d",&q);
    carpim=p*q;
    for(p=1;p<=carpim;p++)
    {
        printf("%d ",p);
        if(p%q==0)
        {
            printf("\n");
        }
    }
    return 0;
}
