#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,sayac=0;
    printf("1 ve x arasi bir sayi giriniz! \nx= "); scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        sayac=2*i;
        if(sayac>x)
        {
            break;
        }
        else
            printf("%d^%d=%d\n",sayac,2,sayac*sayac);
    }
    return 0;
}
