#include <stdio.h>

int main() {
    int n1 = 0;
    int n2 = 0;
    int c = 0;
    printf("Entrer 1er nombre entier:");
    scanf("%d", &n1);
    printf("Entrer 2eme nombre entier:");
    scanf("%d", &n2);
    c = n1;
    n1 = n2;
    n2 = c;
    printf("-----Permutation----\n");
    printf("n1 = %d\n", n1);
    printf("n2 = %d\n", n2);

  return 0;
}

