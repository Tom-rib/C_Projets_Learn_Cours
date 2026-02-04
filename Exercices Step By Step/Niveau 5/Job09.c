#include <stdio.h>

int Multiplication(int a,int b) 
{
    int produit = 0;

    produit = a * b;
   
    return produit;
}

int main(void)
{
    int facteur1 = 0;
    int facteur2 =0;
    
    printf("Entrez le nombre de la table de multiplication souhaitée: ");
    scanf("%d", &facteur1);

    for(facteur2 =1; facteur2 <= 10 ; facteur2++)
    {
        printf("%d X %d = %d\n", facteur1, facteur2, Multiplication(facteur1,facteur2));
}
   
    return 0;
}