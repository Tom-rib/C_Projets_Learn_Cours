#include <stdio.h>

int verif(int tableau[],int entree,int taille)

{
    for (int i = 0; i < taille; i++)
    {
        if (tableau[i] == entree)  
            return 1;  
    }   
    return 0;
}


int main(void)
{
    int entree = 0;
    int tableau[100]={0};
    int index = 0;
    while (1)
    {
        printf("Ecrire des nombre entier,(Entre un doublon si vous voulez arrêter) \n");
        scanf("%d", &entree);

        for (int i = 0; i < 100; i++)

        if (verif(tableau, entree , index))
        {
           printf("Un doublon a été saisi. Le programme s'arrête. \n")

           break;
        }
        
         tableau[index] = entree;
        index++;

    }
    return 0;
}