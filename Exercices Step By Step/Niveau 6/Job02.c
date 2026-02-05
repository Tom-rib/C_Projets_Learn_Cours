#include <stdio.h>

int nbrProche(int a,int b)

{

if (a == b)

{
    return 0;
}

    return (a > b) ? a : b;
}

int main(void)
{
    printf("nbrProche(80,98) -> %d\n", nbrProche(80,98));
    printf("nbrProche(80,80) -> %d\n", nbrProche(80,80));
    printf("nbrProche(90,80) -> %d\n", nbrProche(90,80));
    
    
    return 0;
}