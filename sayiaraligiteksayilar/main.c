#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2,toplam=0;

    printf("1. Sayiyi Giriniz : ");  scanf("%d",&sayi1);
    printf("2. Sayiyi Giriniz : ");  scanf("%d",&sayi2);

    for(int i=sayi1;i<=sayi2;i++)
    {
        if((i%2)!=0)
        {
            printf("\n%d",i);
            toplam+=i;
        }
    }
    printf("\nTek sayi toplamlari = %d",toplam);

    return 0;
}
