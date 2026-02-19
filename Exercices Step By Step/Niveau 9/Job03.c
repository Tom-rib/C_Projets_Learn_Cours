#include <stdio.h>

int main(void)
{
    int a = 0;
    int produit = 1;

    while (1)
    {
        printf("Ecrire un nombre entier, pour calculer de produit de 1 a X: ");
        scanf("%d", &a);
        for (int i = 1; i <= a; i++)
        {
            produit = produit * i;
            printf("Nombre actuel: %d, Produit actuel: %d\n", i, produit);
        }
         
        printf("Le produit de 1 à %d est : %d\n", a, produit);
            break;
    }
    return 0;
}