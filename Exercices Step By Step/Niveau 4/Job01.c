#include <stdio.h>

int main() {
    int distance = 0;
    float consommation = 0; 
    float carburant = 0;
    float nombre_litre = 0;
    float moyenne = 0;

    printf("Saisir la distance total en km: ");
    scanf("%d", &distance);
   
    printf("Saisir la consommation en L/100km: ");
    scanf("%f", &consommation); 

    printf("Saisir le carburant total dépensé en litre: ");
    scanf("%f", &carburant);   

    nombre_litre = (distance / 100.0) * consommation;  
    printf("Consommation totale: %.2f L\n", nombre_litre);

    moyenne = distance / carburant; 
    printf("Consommation moyenne: %.2f KM/L\n", moyenne);

    return 0;
}