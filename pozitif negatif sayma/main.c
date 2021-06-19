#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sayi,negsayac=0,pozsayac=0;

    for(i=0;i<5;i++)
    {
       printf("%d. sayiyi giriniz ",1+i); scanf("%d",&sayi);
       if(sayi<0)
       {
           negsayac++;
       }
       else
       {
           pozsayac++;
       }
    }
    printf("\nNegatif Sayi : %d",negsayac);
    printf("\nPozitif Sayi : %d",pozsayac);


    return 0;
}
