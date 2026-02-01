#include <stdio.h>

int main() {
    int n1 = 0, n2 = 0;
    
    printf("Entrer deux nombres: ");
    scanf("%d %d", &n1, &n2);
    
    while (n2 != 0) {
        int reste = n1 % n2;
        n1 = n2;
        n2 = reste;
    }
    
    printf("Le PGCD est : %d\n", n1);
    
    return 0;
}
