#include <stdio.h>
#include <string.h>

int main(void)
{
    int longueur = 8;
    char user[100];

    while (longueur != strlen(user))
    {
        printf("Entrez un nom d'utilisateur (au moins 8 caractères):\n");
        scanf("%99s",user);
        
        if (strlen(user) != longueur )
        {

            printf("Erreur: Le nom d'utilisateur doit comporter au moins 8 caractères.\n");
    
        }

    }
    
    printf("Nom d'utilisateur valide.\n");
    
    return 0;
}