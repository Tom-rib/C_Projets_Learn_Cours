#include <stdlib.h>

void func_to_array(char **strs, void (*fun)(char*)) {
    int i = 0;
    while (strs[i] != NULL) {
        fun(strs[i]);
        i++;
    }
}
