#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sayi,pozsayac=0,toplam=0;

    for(i=0;i<5;i++)
    {
       printf("%d. sayiyi giriniz ",1+i); scanf("%d",&sayi);
       if(sayi>=0)
       {
           pozsayac++;
           toplam+=sayi;
       }
    }
    printf("\nPozitif Sayi : %d",pozsayac);
    printf("\nOrtalama     : %d",toplam/pozsayac);


    return 0;
}
