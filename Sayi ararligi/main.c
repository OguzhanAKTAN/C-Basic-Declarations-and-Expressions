#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,sayac=0,i;

    printf("Sayiyi giriniz : "); scanf("%d",&sayi);
    if(sayi<0 || sayi>80)
    {
        printf("Sayi negatif veya 80 den buyuk olamaz!\n");
        return 0;
    }
    else
    {
        for(i=0;i<sayi;i++)
        {
            sayac=i*5;
            if(sayac>=sayi)
            {
                break;
            }
        }

    }
    printf("Aralik[%d,%d]",(i-1)*5,sayac);

    return 0;
}
