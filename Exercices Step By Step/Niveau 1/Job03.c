#include <stdio.h>

int main() {
    float a = 0;
    float b = 0;
    float somme = 0;
    printf("Entrer 1er nombre:");
    scanf("%f", &a);
    printf("Entrer 2eme nombre:");
    scanf("%f", &b);
    somme = a + b ;
    printf("La somme de %f et %f = %f\n", a, b, somme);
    
  return 0;
}

