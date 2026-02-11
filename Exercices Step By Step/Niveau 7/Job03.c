#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    printf("Le nombre aléatoire est: %d\n", rand());
    return (0);
}