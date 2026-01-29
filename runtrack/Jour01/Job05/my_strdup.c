//my_strdup.c

#include <unistd.h>
#include <stdlib.h>   
#include <stdio.h>     

char *my_strdup(char *src) {
    int len = 0;
    int i = 0;
    char *copy;

    while (src[len] != '\0') {
        len++;
    }

    copy = (char *)malloc((len + 1) * sizeof(char));
    
    if (copy == NULL) {
        return NULL;
    }

    while (src[i] != '\0') {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';

    return copy;
}

int main() {
    char *s;

    s = my_strdup("Hello, World!");

    if (s == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        return 1;
    }

    printf("Chaîne dupliquée : %s\n", s);

    free(s);
    return 0;
}