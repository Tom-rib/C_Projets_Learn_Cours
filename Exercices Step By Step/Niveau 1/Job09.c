#include <stdio.h>

int main() {
    long long n1 = 0;
    printf("Saisir un nombre entier:");
    scanf("%lld", &n1);

    long long n2 = 0;
    printf("Saisir un nombre entier:");
    scanf("%lld", &n2);

    long long n3 = 0;
    printf("Saisir un nombre entier:");
    scanf("%lld", &n3);
   


    if ( n1 > n2 && n1 > n3) {
        printf("Le nombre le plus grand est %lld\n" , n1);    
    }

    else if ( n2 > n3 ) {
        printf("Le nombre le plus grand est %lld\n" , n2);    
    }

    else {
        printf("Le nombre le plus grand est %lld\n" , n3);
    }

  return 0;
}
