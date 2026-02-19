#include <stdio.h>

int main(void)
{
    int a = 0;      // ✅ Déclarées AVANT la boucle
    int sum = 0;

    while (1)
    {
        printf("Ecrire un nombre entier, 0 pour arrêter: ");
        scanf("%d", &a);
        
        if (a == 0)  // ✅ Quitter seulement si a == 0
            break;
        
        sum = sum + a;  // ✅ Ajouter a à sum
    }
    
    printf("La somme des nombres est : %d\n", sum);
    return 0;
}