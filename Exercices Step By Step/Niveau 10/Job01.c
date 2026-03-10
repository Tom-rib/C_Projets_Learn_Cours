#include <stdio.h>

int estPremier(int nombre)
{
    if (nombre < 2)
        return 0;
    
    for (int i = 2; i < nombre; i++)
    {
        if (nombre % i == 0)
            return 0;
    }
    
    return 1;
}

int main(void)
{
    int limite = 0;
    int nombre = 2;     
    int somme = 0;
    
    printf("Entrez la limite des nombres premiers: ");
    scanf("%d", &limite);
    
  
    
    do
    {
        if (estPremier(nombre)) 
        {
            somme = somme + nombre; 
        }
        
        nombre++;  
    }
    while (nombre <= limite); 
    
    printf("Somme des nombres premiers jusqu'à %d est %d\n", limite, somme);
    
    return 0;
}