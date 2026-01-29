//my_strcpy.c

#include <unistd.h>
#include <stdlib.h>   
#include <stdio.h>     

char *my_strcpy(char *dest, char *src) {
    int i;
    for (i = 0; src[i] != '\0'; i++) {
    dest[i] = src[i];
    }
    dest[i] = '\0';

    return dest;
}

int main() {
    char buffer[50];
    printf("%s\n", my_strcpy( buffer, "Hello, World!eaze"));
}