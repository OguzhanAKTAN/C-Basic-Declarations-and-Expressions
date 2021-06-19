#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Sayiyi girniz : "); scanf("%d",&sayi);
    if(sayi<0)
    {
        printf("\nNegatif ");
    }
    else
    {
        printf("\nPozitif ");
    }
    if((sayi % 2)== 0)
    {
        printf("cift");
    }
    else
    {
        printf("tek");
    }
    return 0;
}
