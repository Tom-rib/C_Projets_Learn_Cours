#include <stdio.h>

int main() {

    char i = 1;
    int somme = 0;

    do {
      somme = somme + i;
      i++;
    }while (i <= 10);
    { 
        printf("La somme de 1 à 10 est %d\n",somme);
  return 0;
}
}
