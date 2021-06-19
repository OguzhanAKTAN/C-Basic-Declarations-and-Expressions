#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aysayisi;

    printf("Kacinci ay oldugunu giriniz : ");   scanf("%d",&aysayisi);
    if(aysayisi==1)
    {
        printf("\nOCAK");
    }
    if(aysayisi==2)
    {
        printf("\nSUBAT");
    }
    if(aysayisi==3)
    {
        printf("\nMART");
    }
    if(aysayisi==4)
    {
        printf("\nNISAN");
    }
    if(aysayisi==5)
    {
        printf("\nMAYIS");
    }
    if(aysayisi==6)
    {
        printf("\nHAZIRAN");
    }
    if(aysayisi==7)
    {
        printf("\nTEMMUZ");
    }
    if(aysayisi==8)
    {
        printf("\nAGUSTOS");
    }
    if(aysayisi==9)
    {
        printf("\nEYLUL");
    }
    if(aysayisi==10)
    {
        printf("\nEKIM");
    }
    if(aysayisi==11)
    {
        printf("\nKASIM");
    }
    if(aysayisi==12)
    {
        printf("\nARALIK");
    }
    if(aysayisi<=0 || aysayisi>12 )
    {
        printf("\nHATALI GIRIS!");
    }
    return 0;
}
