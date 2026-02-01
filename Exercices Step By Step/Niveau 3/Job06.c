#include <stdio.h>

int main() {
    long N = 0;
    
    printf("Entrer un nombre: ");
    scanf("%ld", &N); 
   
    for(int i = 0; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }  
    }
    
    printf("\n");

    return 0;
}