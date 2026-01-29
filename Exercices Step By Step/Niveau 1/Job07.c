#include <stdio.h>

int main() {
    long long n = 0;
    long long resultat = 1;
    printf("Saisir un nombre entier:");
    scanf("%lld", &n);
   
    for (long long i = 1; i <= n; i++) {
        resultat = resultat * i;
    }

    printf("Le factoriel de %lld est : %lld\n", n , resultat);


  return 0;
}

