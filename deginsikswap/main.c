#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,y,sayac=0;
    printf("x i girininz: ");   scanf("%d",&x);
    printf("y i girininz: ");   scanf("%d",&y);
    if(x>y)
    {
        for(i=y;i<x;i++)
        {
            sayac++;
        }
        printf("\nx = %d\n",x-sayac);
        printf("y = %d",y+sayac);
        exit(1);
    }
    if(y>x)
    {
        for(i=x;i<y;i++)
        {
            sayac++;
        }
        printf("\nx = %d\n",x+sayac);
        printf("y = %d",y-sayac);
        exit(1);
    }
    printf("\nx = %d\ny = %d",x,y);
    return 0;
}
