#include <stdio.h>

int main()
{

  int nombre = 0;
  int somme = 0 ;  
  int i=1;  
  while(i <= 10 ) { 
      i++; nombre++;
      somme = somme + nombre;
  }
   printf("La somme est : %d\n", somme);

  return 0;
}