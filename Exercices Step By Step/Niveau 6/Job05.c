#include <stdio.h>

int main(void)
{
    int a, b, c, somme  = 0;
    
    printf("Entrez trois nombres séparés par une virgule: ");
    scanf("%d,%d,%d", &a, &b, &c);
    
    somme= a + b + c ;

    printf("La somme des trois nombresest:%d\n",somme);

    return 0;

}