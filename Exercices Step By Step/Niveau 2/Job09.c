#include <stdio.h>

int main()
{

  int nombre = 0 ;
  int somme = 1 ;  
    
  printf("Saisir un nombre entier:");
  scanf("%d", &nombre);

   for (int i =1 ; i <= 10 ; i++)
   { 
    somme = nombre * i;

     printf("Le multiple de %d X %d = %d\n", nombre, nombre , somme);
    
  }
  

  return 0;
}