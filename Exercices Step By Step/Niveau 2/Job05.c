#include <stdio.h>

int main()
{

  int nombre = 0 ;
  int somme = 0 ;  
    
  printf("Saisir un nombre entier:");
  scanf("%d", &nombre);

  
  int i=1;  
  while(i <= nombre ) { 
     
    somme = somme + i;
    i++;
      
  }
   printf("La somme de 1 à %d est : %d\n", nombre , somme);

  return 0;
}