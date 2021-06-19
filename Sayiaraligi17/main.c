#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2,toplam=0;

    printf("1.Sayiyi giriniz: ");    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");    scanf("%d",&sayi2);

    for(int i=sayi1;i<sayi2;i++)
    {
        if((i%17)!=0)
        {
            toplam+=i;
        }
    }
    printf("toplam=%d",toplam);

    return 0;
}
