#include <stdio.h>

int main() {
    float L = 0;
    float H = 0;
    float surface = 0;
    float perimetre = 0;
    printf("Entrer la longueur:");
    scanf("%f", &L);
    printf("Entrer la Hauteur:");
    scanf("%f", &H);
    perimetre = 2 * ( L + H) ;
    printf("Le Perimetre du rectangle =  %f cm \n", perimetre);
    surface = L * H ;
    printf("La surface du rectangle =  %f cm2 \n", surface);

  return 0;
}

