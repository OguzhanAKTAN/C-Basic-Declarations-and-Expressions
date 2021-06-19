#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s=0;
    for(float i=0;i<50;i++)
    {
        s+=1/(i+1);
    }
    printf("%.2f",s);
    return 0;
}
