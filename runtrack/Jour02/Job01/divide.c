// divide.c

#include <unistd.h>
#include <stdlib.h>   
#include <stdio.h>     

void divide(int *val) {
    // *val =/ 2;
    *val = *val / 2;
}


int main(void) {
    int i = 15;
    printf("Avant division: %d\n", i);
    divide(&i);
    printf("Après division: %d\n", i);
    return 0;
}