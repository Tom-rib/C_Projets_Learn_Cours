#include <stdio.h>

int main() {
    int nombre = 0;
    int compteur = 0;
    
    printf("Entrer un nombre: ");
    scanf("%d", &nombre);
    
    while (nombre != 0) {
        nombre = nombre / 10;
        compteur++;
    }
    
    printf("Le nombre de chiffres est de %d\n", compteur);
    
    return 0;
}