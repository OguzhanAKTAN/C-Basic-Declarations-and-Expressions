#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,toplam=0;
    printf("sayiyi giriniz : ");    scanf("%d",&sayi);
    if(sayi>500)
    {
        printf("Sayi 500 den buyuk olamaz!\n");
        exit(1);
    }
    while(sayi>=1)
    {
        toplam+=sayi%10;
        sayi/=10;

    }
    printf("\n\nRakam toplamlari = %d",toplam);
    return 0;
}
