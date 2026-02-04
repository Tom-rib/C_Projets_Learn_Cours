#include <stdio.h>

int strlong(char *a)
{
    int i = 0;  
    
    for(; a[i] != '\0'; i++)  
    {

    }
    
    return i;
}

int main(void)
{
    char chaîne[100]; 
    
    printf("Entrez une chaîne de caractères: ");
    scanf("%s", chaîne);
    
    printf("Le nombre de caractères est %d\n", strlong(chaîne));

    return 0;
}