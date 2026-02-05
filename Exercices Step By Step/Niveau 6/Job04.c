#include <stdio.h>

int main(void)
{
    int a, b, somme, soustraction, produit, division, reste = 0;
    
    printf("Entrez deux nombres séparés par une virgule: ");
    scanf("%d,%d", &a, &b);
    
    somme= a + b;
    soustraction= a-b;
    produit = a*b;
    division = a/b;
    reste = a%b;

    printf("La somme est:%d\n",somme);
    printf("La soustraction est:%d\n",soustraction);
    printf("Le produit est:%d\n",produit);
    printf("La division est:%d\n",division);
    printf("Le reste est:%d\n",reste);
    
    return 0;
}