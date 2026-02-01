#include <stdio.h>
#include <math.h>


int main() {
    
    int a , b , somme , triple = 0; 

    printf("Saisir un nombre entier a: ");
    scanf("%d", &a);
   
    printf("Saisir un nombre entier b: ");
    scanf("%d", &b);

    if (a == b)
    {
     triple = (a+b) *3;

     printf("FoncSomme(%d,%d) -> %d", a , b , triple );
    }
    
    else {
    
        somme = a + b;

      printf("FoncSomme(%d,%d) -> %d", a , b , somme );  

    }

    return 0;
}