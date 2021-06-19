#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numara,ter_num=0,temp;
    printf("Numarayi giriniz : ");  scanf("%d",&numara);
    printf("Numara = %d",numara);
    while(numara>=1)
    {
        temp=numara%10;
        ter_num=ter_num*10+temp;
        numara=numara/10;
    }
    printf("\nTers numara = %d",ter_num);
    return 0;
}
