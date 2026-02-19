#include <stdio.h>

int main(void)
{
    int nombre = 0;
    int comparaison = 0;
    int reverse = 0;
    
    printf("Saisir un nombre: ");
    scanf("%d", &nombre);
    
    comparaison = nombre;
    
    do
    {
       reverse = reverse * 10 + nombre % 10;  
       nombre = nombre / 10;

    } while (nombre > 0);
    
    
        printf("Nombre origine %d \n", comparaison);
        printf("Nombre inverse %d \n", reverse);
    
    
    return 0;
}