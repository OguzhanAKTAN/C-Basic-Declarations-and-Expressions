#include <stdio.h>
#include <stdlib.h>

int main()
{
    int miktar,toplam;

    printf("Toplma miktari giriniz: "); scanf("%d",&miktar);

    toplam=miktar/100;

    printf("\n100'luk banknot sayisi : %d\n",toplam);

    miktar=miktar-(toplam*100);

    toplam=miktar/50;

    printf("50'lik banknot sayisi : %d\n",toplam);

    miktar=miktar-(toplam*50);

    toplam=miktar/20;

    printf("20'lik banknot sayisi : %d\n",toplam);

    miktar=miktar-(toplam*20);

    toplam=miktar/10;

    printf("10'luk banknot sayisi : %d\n",toplam);

    miktar=miktar-(toplam*10);

    toplam=miktar/5;

    printf("5'lik banknot sayisi : %d\n",toplam);


    return 0;
}
