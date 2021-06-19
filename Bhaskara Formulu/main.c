#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,pr1;

    printf("ax^2+bx+c\n");
    printf("\na Giriniz: "); scanf("%lf",&a);
    printf("b Giriniz: "); scanf("%lf",&b);
    printf("c Giriniz: "); scanf("%lf",&c);

    pr1=(b*b)-(4*(a)*(c));

    if(pr1 > 0 && a!=0)
    {
        double x,y;
        pr1 = sqrt(pr1);
        x= (-b + pr1)/ (2*a);
        y= (-b - pr1)/ (2*a);

        printf("\n1.Kok : %.5lf\n",x);
        printf("2.Kok    : %.5lf\n",y);
    }
    else
    {
        printf("Kokler Bulunamadi!\n");
    }

    return 0;
}
