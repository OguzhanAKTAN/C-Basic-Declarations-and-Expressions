#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,sayac=0,maxsayac,maximum=0;

    printf("5 Tamsayi giriniz :\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&sayi);
        sayac++;
        if(sayi>maximum)
        {
            maximum=sayi;
            maxsayac=sayac;
        }
    }
    printf("\nMaximum Sayi : %d",maximum);
    printf("\nGirildigi Sira : %d",maxsayac);

    return 0;
}
