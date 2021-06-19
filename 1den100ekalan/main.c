#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Sayiyi giriniz : ");    scanf("%d",&sayi);
    for(int i=1;i<100;i++)
    {
        if((i%sayi)==3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
