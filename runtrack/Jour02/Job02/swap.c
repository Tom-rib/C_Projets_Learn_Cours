// swap.c

#include <unistd.h>
#include <stdlib.h>   
#include <stdio.h>     

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main(void) {
    int a = 15;
    int b = 3;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    swap(&a, &b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    return 0;
}
