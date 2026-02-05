#include <stdio.h>

int main(void)
{

    float hauteur, largeur, perimetre = 0;


    printf("Saisir la hauteur du rectangle:\n");
    scanf("%f", &hauteur);

    printf("Saisir la largeur du rectangle:\n");
    scanf("%f", &largeur);


    perimetre = hauteur * largeur ;


    printf("Le périmètre du rectangle est: %.4f",perimetre);

    
    return 0;
    
}