//char_is_digit.c

#include <unistd.h>
#include <stdlib.h>   
#include <stdio.h>     

int char_is_digit(char c) {
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;
}


int main()
{
    printf("Comparaison resultat (1 = is digit, 0 = not digit) :\n");
    printf("'%c' : %d\n", '5', char_is_digit('5')); 
    printf("'%c' : %d\n", 'a', char_is_digit('a'));

    return 0;
}
