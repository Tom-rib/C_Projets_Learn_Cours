#include <stdio.h>

int main(void)
{
    int a = 0;

    // Boucle croissante : 1 à 10
    while (a < 10)
    {
        a += 1;
        printf("%d ", a);
    }

    // Boucle décroissante : 9 à 0
    while (a > 0)
    {
        a -= 1;
        printf("%d ", a);
    }

    printf("\n");
    return 0;
}
