#include <stdlib.h>

void delete_str_array(char ***strs) {
    if (strs == NULL || *strs == NULL) return;

    int i = 0;
    // Free each string in the array
    while ((*strs)[i] != NULL) {
        free((*strs)[i]);
        i++;
    }

    // Free the array itself
    free(*strs);

    // Set the original pointer to NULL
    *strs = NULL;
}
