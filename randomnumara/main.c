#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    double numara;
    if((fp=fopen("rand.txt","w+"))==NULL)
    {
        printf("Dosya yazma hatasi!\n");
        exit(1);
    }
    fprintf(fp,"50\n");
    for(int i=0;i<50;i++)
    {
        numara = rand() % 1;
        fprintf(fp,"%.2f\n",numara);
    }
    return 0;
}
