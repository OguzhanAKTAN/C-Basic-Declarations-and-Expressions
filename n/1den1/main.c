#include <stdio.h>
#include <stdlib.h>


int main()
{
    int sayi,toplam=0;
    printf("Bir sayi giriniz : ");  scanf("%d",&sayi);
    for(int i=1;i<(sayi+1);i++)
    {
        toplam+=(1/i);
    }
    printf("Toplam = %.2f",toplam);
    return 0;
}
