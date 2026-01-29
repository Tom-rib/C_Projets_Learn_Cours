#include <stdio.h>

int main() {
    long long n = 0;
    printf("Saisir un nombre entier:");
    scanf("%lld", &n);
   
    if (n % 2 == 0) {
        printf("Le nombre est Pair\n");
    }
    else {
        printf("Le nombre est Impair\n");
    }

  return 0;
}
