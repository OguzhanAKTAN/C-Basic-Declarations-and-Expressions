#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sifre;
    while(sifre!=1234)
    {
        printf("\nSifreyi giriniz : "); scanf("%d",&sifre);
        if(sifre!=1234)
        {
            printf("\nYanlis Sifre");
        }
    }
    printf("\nDogru sifre");
    return 0;
}
