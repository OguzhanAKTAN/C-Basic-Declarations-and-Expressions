#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir;
    printf("satir sayisini giriniz: "); scanf("%d",&satir);
    for(int i=1;i<(satir*3)+1;i++)
    {
        printf("%d ",i);
        if(i%3==0)
        {
            printf("\n");
        }
    }
    return 0;
}
