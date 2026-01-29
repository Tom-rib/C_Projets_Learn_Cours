//split.c

#include <unistd.h>
#include <stdlib.h>   
#include <stdio.h>     

int is_split_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n' || c == '\0');
}

int count_words(char *str) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        while (is_split_space(str[i]) && str[i] != '\0') {
            i++;
        }
        if (str[i] != '\0') {
            count++;
            while (!is_split_space(str[i])) {
                i++;
            }
        }
    }
    return count;
}

char *extract_word(char *str, int *index) {
    int start = *index;
    int length = 0;
    char *word;
    
    while (!is_split_space(str[*index + length])) {
        length++;
    }
    
    word = (char *)malloc((length + 1) * sizeof(char));
    if (word == NULL) return NULL;
    
    for (int i = 0; i < length; i++) {
        word[i] = str[start + i];
    }
    word[length] = '\0';
    
    *index += length;
    return word;
}

char **split(char *src) {
    int word_count = count_words(src);
    char **result = (char **)malloc((word_count + 1) * sizeof(char *));
    
    if (result == NULL) return NULL;
    
    int i = 0;
    int j = 0;
    
    while (src[j] != '\0') {
        while (is_split_space(src[j]) && src[j] != '\0') {
            j++;
        }
        
        if (src[j] != '\0') {
            result[i] = extract_word(src, &j);
            i++;
        }
    }
    
    result[i] = NULL;
    return result;
}
