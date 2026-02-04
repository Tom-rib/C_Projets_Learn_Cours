#include <stdio.h>

int checkTemp(int a,int b)
{
    return ((a < 0 && b > 50) || (a > 50 && b < 0));
}

int main(void)
{
    printf("checkTemp(3) -> %s\n", checkTemp(3,60) ? "TRUE" : "FALSE");
    printf("checkTemp(3) -> %s\n", checkTemp(-10,60) ? "TRUE" : "FALSE");
    printf("checkTemp(3) -> %s\n", checkTemp(60,-3) ? "TRUE" : "FALSE");
    return 0;
}