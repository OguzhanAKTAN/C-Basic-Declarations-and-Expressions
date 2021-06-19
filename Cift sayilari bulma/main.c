#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sayi,sayac=0;
    printf("1 ve 50(dahil) arasi bir sayi giriniz : "); scanf("%d",&sayi);
    for(i=1;i<=25;i++)
    {
        sayac=2*i;
        if(sayac>sayi)
        {
            break;
        }
        else
            printf("%d ",sayac);
    }
    return 0;
}
