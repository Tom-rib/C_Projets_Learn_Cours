#include <stdio.h>

int main(void)
{
    int a, b, c = 0;
    
    printf("Entrez deux angles du triangle séparés par une virgule: ");
    scanf("%d,%d", &a, &b);
    
    c = 180 - (a + b);
    
    printf("Le troisième angle est de: %d\n", c);
    
    return 0;
}