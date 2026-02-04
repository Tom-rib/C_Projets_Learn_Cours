#include <stdio.h>

int Parite(int a)
{
    return (a % 2 == 0);
}

int main(void)
{
    printf("%d est %s\n", 3, Parite(3) ? "pair" : "impair");
    printf("%d est %s\n", 4, Parite(4) ? "pair" : "impair");
    return 0;
}