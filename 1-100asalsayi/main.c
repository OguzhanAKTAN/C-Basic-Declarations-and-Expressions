#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,m,kalan;
    printf("1 ile 200 arasi asal sayilar \n");
    for(i=2;i<200;i++)
    {
        kalan=1;
        for(m=2;m<i;m++)
        {
            if(i%m==0)
            {
                kalan=0;
                break;
            }
        }
        if(kalan==1)
        {
                printf("%d ",i);
        }
    }
    return 0;
}
