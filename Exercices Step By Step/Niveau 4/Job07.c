#include <stdio.h>

int main(void)
{
    int N = 0;
    
    printf("Entrer un nombre de ligne: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) { 
            printf(" ");
        }
        for (int j = 0; j <= 2*i; j++) {      
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
