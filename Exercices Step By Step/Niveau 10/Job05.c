#include <stdio.h>

int main() {
    int n = 1 ;
    int somme=0;
    int limite =0;
    
    printf("Entrée le nombres d'élements voulu: \n");
    scanf("%d", &limite);
    printf("Les %d premiers entiers naturels sont: \n", limite);
   while (n <= limite)
   {
    printf("%d ",n);
    somme = somme + n;
    n++;
   }
   
    printf(" \n La somme est: %d \n",somme);
  return 0;
  
}
