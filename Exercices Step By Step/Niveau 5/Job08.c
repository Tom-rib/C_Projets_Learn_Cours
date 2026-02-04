#include <stdio.h>

int nombreCarractère(char *chaîne, char caractère) 
{
    int nombre = 0;
    
    for(int i = 0; chaîne[i] != '\0'; i++)
    {
        if (chaîne[i] == caractère) 
            nombre++;
    }
    
    return nombre;
}

int main(void)
{
    char chaîne[100]; 

    printf("Entrez une chaîne de caractères: ");
    scanf("%s", chaîne);

    char caractère;

    printf("Entrez le caractère à chercher: ");
    scanf(" %c", &caractère);
    
    printf("Le nombre de '%c' est %d\n", caractère, nombreCarractère(chaîne, caractère));  // ✅ Correct

    return 0;
}