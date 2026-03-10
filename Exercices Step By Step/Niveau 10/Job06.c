#include <stdio.h>

int main(void)
{
    int nombre[10];
    int somme = 0;
    float moyenne = 0;
    
    printf("Saisir les 10 nombres:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Nombre-%d: ", i + 1);
        scanf("%d", &nombre[i]);
        somme = somme + nombre[i];
    }
    
    printf("La somme des 10 nombres est: %d\n", somme);
    
    moyenne = (float)somme / 10;
    
    printf("La moyenne est: %.2f\n", moyenne);
    
    return 0;
}