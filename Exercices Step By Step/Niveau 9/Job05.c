#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int entree = 0;
    int tentatives = 0;

    srand(time(NULL));
    int nombre = rand() % 21 + 1;

    while (tentatives < 10)
    {
        printf("Devinez un nombre entre 1 et 20: \n");
        printf("Saisissez votre nombre:\n");
        scanf("%d", &entree);
    

        if (entree == nombre)
        {
           printf("Félicitations! vous avez deviné le bon nomnbre en %d essais. \n", tentatives);

           break;
        }
        
        tentatives++;

        printf("Réponse incorrecte. Réessayez! Il vous reste %d tentatives. \n", 10-tentatives);

        

    }
    return 0;
}