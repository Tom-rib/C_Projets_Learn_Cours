#include <stdio.h>

int main() {

    char i = 1;
    int somme = 0;
    int N = 0;

    printf("Entrer un nombre: ");
    scanf("%d", &N);

    do {
     if (i % 2 != 0 )
     {
        somme = somme + i;
     }
        
      
      i++;
    }while (i <= N);
    { 
        printf("La somme de 1 à 10 est %d\n",somme);
  return 0;
}
}
