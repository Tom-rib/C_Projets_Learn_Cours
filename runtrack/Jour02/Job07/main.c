#include <stdlib.h>
#include <unistd.h>

void my_putchar_j7(char c) {
    write(1, &c, 1);
}

void my_putstr_j7(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        my_putchar_j7(str[i]);
        i++;
    }
}

int main(int argc, char **argv) {
    // argv[0] is program name, start at 1
    int i = 1; 
    
    while (i < argc) {
        int j = 0;
        char *current = argv[i];
        
        while (current[j] != '\0') {
            char c = current[j];
            // If uppercase, convert to lowercase
            if (c >= 'A' && c <= 'Z') {
                c = c + 32;
            }
            my_putchar_j7(c);
            j++;
        }
        my_putchar_j7('\n'); // Newline after each word
        i++;
    }
    return 0;
}
