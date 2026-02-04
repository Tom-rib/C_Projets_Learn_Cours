# include <stdio.h>


int valeurAbsolue(int a)
{
    return a < 0 ? -a : a;
}


int main(void)
{
    int nombre;
    
    printf("Entrez un nombre entier: ");
    scanf("%d", &nombre);
    
    printf("La valeur absolue de %d est %d\n", nombre, valeurAbsolue(nombre));
    
    return 0;
}