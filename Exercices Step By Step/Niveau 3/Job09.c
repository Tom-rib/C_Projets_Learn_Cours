#include <stdio.h>

int main() {
    long N = 0;
    
    printf("Entrer un nombre: ");
    scanf("%ld", &N); 
   
    for(int i = 1; i <= N; i++) {
       for(int j = 1; j <= i ; j++) {
            printf("%d", i);
        }  
    printf("\n");

    }
    

    return 0;
}