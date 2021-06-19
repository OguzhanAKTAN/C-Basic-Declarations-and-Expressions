#include <stdio.h>
#include <stdlib.h>

int main()
{
    int km,yakit;
    float ortalama;
    printf("Gidilen Km : "); scanf("%d",&km);
    printf("Yakilan Yakit: "); scanf("%d",&yakit);
    ortalama=km/yakit;

    printf("\nOrtalama Tuketim = %.2f",ortalama);
    return 0;
}
