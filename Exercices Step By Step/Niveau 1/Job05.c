#include <stdio.h>

int main() {
    float pi = 3.14;
    float r = 0;
    float surface = 0;
    float perimetre = 0;
    printf("Entrer le rayon:");
    scanf("%f", &r);
    perimetre = 2 * pi * r ;
    printf("Le Perimetre du cercle =  %f cm \n", perimetre);
    surface = pi * (r*r) ;
    printf("La surface du cercle =  %f cm2 \n", surface);

  return 0;
}

