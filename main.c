#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NFOIS 5

int main()
{
    int i;
    float x=10.0;
    float racx;

    printf("Bonjour\n");

    for (i=0; i<NFOIS; i++) {
        printf("Donnez un nombre : ");
        scanf("%f",&x);
        if (x<0.0) {
            printf("Le nombre ne possede pas de racine carree. ");
        } else {
            racx=sqrt(x);
            printf("Le nombre %f a pour racine carree : %f\n. ", x, racx);
        }
    }


    return 0;
}
