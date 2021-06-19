#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Sayiyi giriniz : ");    scanf("%d",&a);
    printf("\nKaydirilmamis deger : %d",a);
    printf("\nKaydirilmis deger : %d",a<<=3);
    return 0;
}
