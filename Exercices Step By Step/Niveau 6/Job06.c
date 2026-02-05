#include <stdio.h>

int main(void)
{
    char prenom[100], nom[100];
    int annee = 0;

    printf("Saisissez votre prénom: \n");
    scanf("%s", prenom);

    printf("Saisissez votre nom: \n");
    scanf("%s", nom);

    printf("Saisissez votre année de naissance: \n");
    scanf("%d", &annee);


    printf("%s %s %d",prenom, nom, annee);

    return 0;
    
}