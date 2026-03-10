#include <stdio.h>
#include <string.h>

int main(void)
{
    char password[100] = "azerty13" ;
    char entree[100];



     do
    {
        
        printf("Saisir le mot de passe :\n");
        scanf("%99s",entree);
        if(strcmp(entree,password) !=0)
        {
        
            printf("Erreur: Mot de passe incorrect. Réessayez.\n");

        }
        

    } while (strcmp(entree, password) != 0); 
         
    printf("Mot de passe valide.\n");


    return 0;    
}