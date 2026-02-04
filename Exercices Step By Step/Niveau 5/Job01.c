#include <stdio.h>

int main() {
    float celsius, fahrenheit = 0;
    printf("Entrez la température en degrés culsius:");
    scanf("%f", &celsius);
   
    fahrenheit = (celsius*9.5) + 32;

     printf("La température en Fahrenheit est: %f\n",fahrenheit);
    

  return 0;
}
