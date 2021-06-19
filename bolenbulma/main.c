#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("sayiyi giriniz: "); scanf("%d",&sayi);
    for(int i=1;i<=sayi;i++)
    {
        if(sayi % i == 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
