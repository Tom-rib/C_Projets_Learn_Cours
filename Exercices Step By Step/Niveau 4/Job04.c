#include <stdio.h>

int check(int a, int b);

int main(void)
{
    printf("check(15, 5) -> %s\n", check(15, 5) ? "TRUE" : "FALSE");
    printf("check(15, 20) -> %s\n", check(15, 20) ? "TRUE" : "FALSE");
    printf("check(15, 25) -> %s\n", check(15, 25) ? "TRUE" : "FALSE");
    
    return 0;
}

int check(int a, int b)
{
    return (a == 20 || b == 20 || (a + b) == 20);
}