#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2;

    printf("1.Sayiyi giriniz: ");    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");    scanf("%d",&sayi2);

    for(int i=sayi1;i<sayi2;i++)
    {
        if((i%7)==2 || (i%7)==3)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
