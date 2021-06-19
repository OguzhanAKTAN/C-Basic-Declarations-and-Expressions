#include <stdio.h>
#include <stdlib.h>

int main()
{
    int not,sayac=0,toplam=0;
    while(1)
    {
        printf("Ogrencinin notlarini girin(bitirmek icin 0): ");    scanf("%d",&not);
        if(not==0||not<0)
        {
            break;
        }
        sayac++;
        toplam+=not;
    }
    printf("Ortalama = %d",toplam/sayac);
    return 0;
}
