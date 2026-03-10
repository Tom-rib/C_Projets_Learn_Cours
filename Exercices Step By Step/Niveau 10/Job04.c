#include <stdio.h>

int main() {
    int n = 1 ;
    int somme=0;
    
    printf("Les 10 premiers entiers naturels sont: \n");
   while (n <= 10)
   {
    printf("%d ",n);
    somme = somme + n;
    n++;
   }
   
    printf(" \n La somme est: %d \n",somme);
  return 0;
}
