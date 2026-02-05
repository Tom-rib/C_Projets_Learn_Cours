#include <stdio.h>

int checkNbr(int a,int b)

{
    return (a > 50 || b > 50);
}

int main(void)
{
    printf("checkNbr(3) -> %s\n", checkNbr(3,60) ? "TRUE" : "FALSE");
    printf("checkNbr(3) -> %s\n", checkNbr(-10,60) ? "TRUE" : "FALSE");
    printf("checkNbr(3) -> %s\n", checkNbr(60,-3) ? "TRUE" : "FALSE");
    return 0;
}