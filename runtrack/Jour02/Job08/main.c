#include <stdlib.h>
#include <unistd.h>

// --- Helpers ---
void my_putchar_j8(char c) {
    write(1, &c, 1);
}

void my_putstr_j8(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        my_putchar_j8(str[i]);
        i++;
    }
}

int my_strcmp_j8(char *s1, char *s2) {
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0') {
        i++;
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int is_space_j8(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

// Custom Trim Function
char *my_trim_copy(char *src) {
    int len = 0;
    while (src[len] != '\0') len++;

    int start = 0;
    while (src[start] != '\0' && is_space_j8(src[start])) start++;

    if (start == len) { // Empty or all spaces
        char *empty = (char *)malloc(1);
        if (empty) empty[0] = '\0';
        return empty;
    }

    int end = len - 1;
    while (end > start && is_space_j8(src[end])) end--;

    int new_len = end - start + 1;
    char *trimmed = (char *)malloc((new_len + 1) * sizeof(char));
    if (!trimmed) return NULL;

    for (int i = 0; i < new_len; i++) {
        trimmed[i] = src[start + i];
    }
    trimmed[new_len] = '\0';
    return trimmed;
}

// Main logic
int main(int argc, char **argv) {
    if (argc < 2) return 0;

    int count = argc - 1;
    char **words = (char **)malloc((count + 1) * sizeof(char *));
    if (!words) return 1;

    // 1. Trim all arguments and store them
    for (int i = 0; i < count; i++) {
        words[i] = my_trim_copy(argv[i + 1]);
    }
    words[count] = NULL;

    // 2. Sort (Bubble Sort)
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (my_strcmp_j8(words[j], words[j+1]) > 0) {
                char *temp = words[j];
                words[j] = words[j+1];
                words[j+1] = temp;
            }
        }
    }

    // 3. Print joined by spaces
    for (int i = 0; i < count; i++) {
        my_putstr_j8(words[i]);
        if (i < count - 1) {
             my_putchar_j8(' ');
        }
        // Free memory as we go
        free(words[i]);
    }
    my_putchar_j8('\n');

    free(words);
    return 0;
}
