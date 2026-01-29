//my_strcmp.c

#include <unistd.h>
#include <stdlib.h>   
#include <stdio.h>

bool my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return false;
        i++;
    }

    // Les deux chaînes doivent finir en même temps
    return s1[i] == s2[i];
}

int main(void)
{
    printf("Comparaison resultat (1 = chaine pareille, 0 = chaine differente) :\n");
    printf("Comparaison resultat: %d\n", my_strcmp("hello", "hello"));
    printf("Comparaison resultat: %d\n", my_strcmp("hello", "hellow"));
    return 0;
}

