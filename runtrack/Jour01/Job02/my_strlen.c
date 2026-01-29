//my_strlen.c

#include <unistd.h>
#include <stdlib.h>   
#include <stdio.h>     

int my_strlen(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}


int main(void) {
    printf("Longueur de la chaine: %d\n", my_strlen("Hello, World!"));
    return 0;
}