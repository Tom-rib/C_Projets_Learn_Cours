//my_putstr.c

#include <unistd.h>
#include <stdlib.h>   
#include <stdio.h>     


void my_putchar(char c) {
    write(1, &c, 1);
}

void my_putstr(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
int main() {
    my_putstr("Hello, World!\n");
    return 0;
}