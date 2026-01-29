#include <stdlib.h>

char **array_clone(char **strs, int n) {
    int i = 0;
    int count = 0;
    
    // 1. Calculate how many strings to copy (up to n or NULL)
    while (strs[count] != NULL && count < n) {
        count++;
    }

    // 2. Allocate the array of pointers (+1 for the NULL terminator)
    char **copy = (char **)malloc((count + 1) * sizeof(char *));
    if (copy == NULL) return NULL;

    // 3. Copy each string manually
    for (i = 0; i < count; i++) {
        // Find length of current string
        int len = 0;
        while (strs[i][len] != '\0') {
            len++;
        }

        // Allocate memory for string (+1 for \0)
        copy[i] = (char *)malloc((len + 1) * sizeof(char));
        if (copy[i] == NULL) {
            // Handle error: free previously allocated memory (optional but good practice)
            return NULL; 
        }

        // Copy characters
        int j = 0;
        while (strs[i][j] != '\0') {
            copy[i][j] = strs[i][j];
            j++;
        }
        copy[i][j] = '\0';
    }

    // 4. Terminate with NULL
    copy[i] = NULL;
    return copy;
}
