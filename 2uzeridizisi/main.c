#include <stdio.h>
#include <stdlib.h>

int main()
{
    int toplam=0,n,m=1;
    printf("Sayiyi giriniz : ");    scanf("%d",&n);
    for(int i=1;m<=n;i++)
    {
        toplam += m*m*m*m;
        m+=i;
    }
    printf("\nToplam = %d",toplam);
    return 0;
}
