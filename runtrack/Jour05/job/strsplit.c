#include <stdlib.h>

static int count_tokens(const char *s, char d)
{
    int n = 0, in = 0;
    while (*s) {
        if (*s != d && !in) { in = 1; n++; }
        if (*s == d) in = 0;
        s++;
    }
    return n;
}

char **strsplit(const char *s, char d)
{
    int i = 0, k = 0;
    int n = count_tokens(s, d);
    char **out = malloc((n + 1) * sizeof *out);

    while (*s) {
        if (*s != d) {
            const char *start = s;
            while (*s && *s != d) s++;
            out[k] = malloc(s - start + 1);
            for (i = 0; start[i]; i++) out[k][i] = start[i];
            out[k][i] = 0;
            k++;
        } else {
            s++;
        }
    }
    out[k] = NULL;
    return out;
}