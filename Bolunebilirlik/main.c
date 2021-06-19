#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2;

    printf("1.sayiyi giriniz : ");  scanf("%d",&sayi1);
    printf("2.sayiyi giriniz : ");  scanf("%d",&sayi2);

    if((sayi1<sayi2 && sayi2 % sayi1 == 0) || (sayi2<sayi1 && sayi1 % sayi2==0))
    {
        printf("\nBu iki sayi birbirine bolunebilir!");
    }
    else
    {
        printf("\nBu iki sayi birbirine bolunemez!");
    }

    return 0;
}
