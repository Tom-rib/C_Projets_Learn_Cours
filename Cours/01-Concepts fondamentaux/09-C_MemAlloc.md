# 🎯 C_MemAlloc - Allocation Dynamique de Mémoire

## malloc - Allouer de la mémoire

```c
#include <stdlib.h>

int *tab = (int *)malloc(5 * sizeof(int));

if (tab == NULL)
{
    printf("Erreur allocation\n");
    return (1);
}

tab[0] = 10;
tab[1] = 20;

printf("%d\n", tab[0]);  // 10

free(tab);  // Libérer la mémoire!
```

## free - Libérer la mémoire

```c
int *ptr = (int *)malloc(sizeof(int));
*ptr = 42;
printf("%d\n", *ptr);  // 42
free(ptr);             // Libérer
ptr = NULL;            // Bon pratique
```

## Alouer pour une chaîne

```c
char *str = (char *)malloc(20 * sizeof(char));
str[0] = 'A';
str[1] = 'B';
str[2] = '\0';  // Terminer la chaîne!

printf("%s\n", str);  // AB
free(str);
```

## ⚠️ Erreurs courantes

- Oublier `free()` = memory leak
- Libérer deux fois = erreur
- N'oublie pas `sizeof()`

