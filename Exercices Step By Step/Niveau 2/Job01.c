#include <stdio.h>

int main() {
    long long n = 0;
    long long absolue = 0;
    printf("Saisir un nombre:");
    scanf("%lld", &n);

    if (n < 0){
    absolue = n * (-1);
    printf("La valeur absulue de %lld est %lld\n", n , absolue);
    }
    
    else {
    absolue = n;
    printf("La valeur absulue de %lld est %lld\n", n, absolue);
    }
   
  return 0;
}
