//trim.c

#include <unistd.h>
#include <stdlib.h>   
#include <stdio.h>     

int is_whitespace_trim(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

char *trim(char *src) {
    if (src == NULL) return NULL;

    int start = 0;
    int end = 0;
    int len = 0;
    int i;
    char *trimmed;

    while (src[len] != '\0') {
        len++;
    }

    while (src[start] != '\0' && is_whitespace_trim(src[start])) {
        start++;
    }

    if (start == len) {
        trimmed = (char *)malloc(1);
        if (trimmed) trimmed[0] = '\0';
        return trimmed;
    }

    end = len - 1;
    while (end > start && is_whitespace_trim(src[end])) {
        end--;
    }

    int new_len = end - start + 1;
    trimmed = (char *)malloc((new_len + 1) * sizeof(char));
    
    if (trimmed == NULL) {
        return NULL;
    }

    for (i = 0; i < new_len; i++) {
        trimmed[i] = src[start + i];
    }
    trimmed[new_len] = '\0';

    return trimmed;
}
