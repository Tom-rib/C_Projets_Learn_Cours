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



printf("Entrer 3 nombres entiers séparer d'une virgule: ");
 scanf("%d %d %d", &a, &b, &c);
 printf("checkList(%d,%d,%d)->%s\n", a, b, c, checkList(a, b, c) ? "TRUE" : "FALSE");