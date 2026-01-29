#include <stdio.h>

int main() {
    long long n1 = 0;
    long long n2 = 0;
    long long n3 = 0;
    long long moyenne = 0;

    printf("Saisir un nombre entier:");
    scanf("%lld", &n1);
   
  
    printf("Saisir un nombre entier:");
    scanf("%lld", &n2);

    printf("Saisir un nombre entier:");
    scanf("%lld", &n3);
   
    moyenne = (n1 + n2 + n3) / 3;
    printf("La moyenne de est : %lld\n",moyenne);

  return 0;
}
