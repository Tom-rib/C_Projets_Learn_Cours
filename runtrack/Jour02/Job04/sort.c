#include <stddef.h> // For NULL definition if needed

// Helper: compare two strings manually (returns diff like strcmp)
int my_strcmp_manual(char *s1, char *s2) {
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0') {
        i++;
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

char **sort(char **strs) {
    int i = 0;
    int j = 0;
    char *temp;
    
    // Count elements first
    int count = 0;
    while (strs[count] != NULL) {
        count++;
    }

    // Bubble Sort
    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            // If strs[j] > strs[j+1], swap them
            if (my_strcmp_manual(strs[j], strs[j+1]) > 0) {
                temp = strs[j];
                strs[j] = strs[j+1];
                strs[j+1] = temp;
            }
        }
    }
    return strs;
}
