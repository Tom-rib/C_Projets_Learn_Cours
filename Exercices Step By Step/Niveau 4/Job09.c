#include <stdio.h>

int main(void)
{
    int N = 0;
    int exposant = 0;
    int résultat = 1 ;
    
    printf("Entrer un nombre:");
    scanf("%d", &N);

    printf("Entrer un exposant: ");
    scanf("%d", &exposant);
    
    for (int i = 1; i <= exposant; i++) {
     résultat = résultat * N ;
    }

    printf("%d ^ %d = %d\n", N , exposant, résultat);

    return 0;
}