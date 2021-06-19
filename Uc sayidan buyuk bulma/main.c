#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1,s2,s3,max;

    printf("1.Sayiyi Giriniz : "); scanf("%d",&s1);
    max=s1;
    printf("2.Sayiyi Giriniz : "); scanf("%d",&s2);
    if(max<s2)
    {
        max=s2;
    }
    printf("3.Sayiyi Giriniz : "); scanf("%d",&s3);
    if(max<s3)
    {
        max=s3;
    }
    printf("\nEn buyuk sayi = %d",max);
    return 0;
}
