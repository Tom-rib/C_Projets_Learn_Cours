#include <stdio.h>

int check(int a)
{
    return (a % 3 == 0 || a % 7 == 0);
}

int main(void)
{
    printf("check(3) -> %s\n", check(3) ? "TRUE" : "FALSE");
    printf("check(12) -> %s\n", check(12) ? "TRUE" : "FALSE");
    printf("check(4) -> %s\n", check(4) ? "TRUE" : "FALSE");
    printf("check(7) -> %s\n", check(7) ? "TRUE" : "FALSE");
    return 0;
}