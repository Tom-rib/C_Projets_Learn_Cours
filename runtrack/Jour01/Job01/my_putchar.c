//my_putchar.c

#include <unistd.h>
#include <stdlib.h>   
#include <stdio.h>     

void my_putchar(char c) {
    write(1, &c, 1);
}

int main() {
    my_putchar('A');
    my_putchar('\n');
   return 0;
}