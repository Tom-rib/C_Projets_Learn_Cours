#include <stdio.h>
#include <math.h>

int main() {
    int n = 0;
    printf("Saisir un nombre entier: ");
    scanf("%d", &n);
    
    if (n <= 1) {
        printf("%d n'est pas un nombre premier\n", n);
        return 0;
    }
    
    if (n == 2) {
        printf("%d est un nombre premier\n", n);
        return 0;
    }
    
    if (n % 2 == 0) {
        printf("%d n'est pas un nombre premier\n", n);
        return 0;
    }
    
    for (int i = 3; i <= sqrt(n); i += 2) { 
        if (n % i == 0) {
            printf("%d n'est pas un nombre premier\n", n);
            return 0;
        }
    }
    
    printf("%d est un nombre premier\n", n);
    
    return 0;
}