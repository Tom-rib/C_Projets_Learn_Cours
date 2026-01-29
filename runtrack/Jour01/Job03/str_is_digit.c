//str_is_digit.c

#include <unistd.h>
#include <stdlib.h> 
#include <stdio.h>

int str_is_digit(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
    }
    return 1;
}

int main()
{
    printf("'12345' = %d\n", str_is_digit("12345"));
    printf("'123a5' = %d\n", str_is_digit("123a5"));
    printf("'999' = %d\n", str_is_digit("999"));
    printf("'abc' = %d\n", str_is_digit("abc"));
    
    return 0;
}