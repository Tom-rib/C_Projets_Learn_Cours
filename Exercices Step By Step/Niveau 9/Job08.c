#include <stdio.h>

int main(void)
{
    int nombre = 0;
    int comparaison = 0;
    int reverse = 0;
    
    printf("Saisir un nombre: ");
    scanf("%d", &nombre);
    
    comparaison = nombre;
    
    while (nombre > 0)  
    {
        reverse = reverse * 10 + nombre % 10;  
        nombre = nombre / 10;
    }
    
    if (comparaison == reverse)
    {
        printf("%d est un palindrome.\n", comparaison);
    }
    else
    {
        printf("%d n'est pas un palindrome.\n", comparaison);
    }
    
    return 0;
}