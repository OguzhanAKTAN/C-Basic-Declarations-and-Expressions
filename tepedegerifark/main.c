#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sayi,max=0,min=0;
    for(int i=1;i<5;i++)
    {
        printf("%d.Sayiyi giriniz : ",i);   scanf("%f",&sayi);
        if(i==1)
        {
            max=sayi;
            min=sayi;
        }
        if(sayi>max)
        {
            max=sayi;
        }
        if(sayi<min)
        {
            min=sayi;
        }
    }
    printf("Buyugun kucukten farki = %.2f",max-min);
    return 0;
}
