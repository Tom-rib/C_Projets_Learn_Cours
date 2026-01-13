# Cours C - Allocation Dynamique de Mémoire

## Concepts fondamentaux

En C, il y a deux types de mémoire :
- **Stack (pile)** : Automatique, limitée, variables locales
- **Heap (tas)** : Vous gérez, grande capacité, pour malloc/free

## malloc : Allouer la mémoire

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Allouer la mémoire pour un entier
    int *ptr = (int *)malloc(sizeof(int));
    
    if (ptr == NULL)
    {
        printf("Erreur: allocation mémoire échouée\n");
        return (1);
    }
    
    *ptr = 42;
    printf("Valeur: %d\n", *ptr);
    
    free(ptr);  // Libérer la mémoire
    ptr = NULL; // Bonne pratique: mettre à NULL après free
    
    return (0);
}
```

## Allouer un tableau dynamiquement

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size = 5;
    
    // Allouer mémoire pour 5 entiers
    int *arr = (int *)malloc(size * sizeof(int));
    
    if (arr == NULL)
    {
        printf("Erreur d'allocation\n");
        return (1);
    }
    
    // Initialiser le tableau
    for (int i = 0; i < size; i++)
    {
        arr[i] = i * 10;
    }
    
    // Utiliser le tableau
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);  // Libérer la mémoire
    arr = NULL;
    
    return (0);
}
```

## calloc : Allouer et initialiser à zéro

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size = 5;
    
    // calloc: alloue et initialise à 0
    int *arr = (int *)calloc(size, sizeof(int));
    
    if (arr == NULL)
    {
        printf("Erreur d'allocation\n");
        return (1);
    }
    
    // Les valeurs sont déjà à 0
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);  // 0 0 0 0 0
    }
    printf("\n");
    
    free(arr);
    arr = NULL;
    
    return (0);
}
```

## realloc : Redimensionner la mémoire

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size = 3;
    int *arr = (int *)malloc(size * sizeof(int));
    
    if (arr == NULL)
    {
        printf("Erreur d'allocation\n");
        return (1);
    }
    
    // Initialiser
    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }
    
    // Augmenter la taille à 6
    int *temp = (int *)realloc(arr, 6 * sizeof(int));
    if (temp == NULL)
    {
        printf("Erreur de réallocation\n");
        free(arr);
        return (1);
    }
    arr = temp;
    
    // Ajouter des valeurs
    arr[3] = 3;
    arr[4] = 4;
    arr[5] = 5;
    
    // Afficher
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    arr = NULL;
    
    return (0);
}
```

## Allouer une chaîne de caractères

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int longueur = 20;
    
    // Allouer mémoire pour une chaîne
    char *str = (char *)malloc((longueur + 1) * sizeof(char));
    
    if (str == NULL)
    {
        printf("Erreur d'allocation\n");
        return (1);
    }
    
    // Utiliser la chaîne
    str[0] = 'H';
    str[1] = 'i';
    str[2] = '\0';
    
    printf("Chaîne: %s\n", str);
    
    free(str);
    str = NULL;
    
    return (0);
}
```

## Copier une chaîne avec malloc

```c
#include <stdio.h>
#include <stdlib.h>

char *my_strdup(char *src)
{
    if (src == NULL)
        return (NULL);
    
    // Compter la longueur
    int len = 0;
    while (src[len] != '\0')
        len++;
    
    // Allouer mémoire
    char *dest = (char *)malloc((len + 1) * sizeof(char));
    
    if (dest == NULL)
        return (NULL);
    
    // Copier
    for (int i = 0; i <= len; i++)
    {
        dest[i] = src[i];
    }
    
    return (dest);
}

int main(void)
{
    char source[] = "Hello";
    char *copie = my_strdup(source);
    
    if (copie != NULL)
    {
        printf("Copie: %s\n", copie);
        free(copie);
        copie = NULL;
    }
    
    return (0);
}
```

## Allouer une matrice 2D

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int rows = 3;
    int cols = 4;
    
    // Allouer le tableau de pointeurs
    int **matrix = (int **)malloc(rows * sizeof(int *));
    
    if (matrix == NULL)
    {
        printf("Erreur d'allocation\n");
        return (1);
    }
    
    // Allouer chaque ligne
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL)
        {
            printf("Erreur d'allocation ligne\n");
            return (1);
        }
    }
    
    // Utiliser la matrice
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = i * cols + j;
        }
    }
    
    // Afficher
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Libérer (ordre inverse!)
    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
        matrix[i] = NULL;
    }
    free(matrix);
    matrix = NULL;
    
    return (0);
}
```

## Tableau de chaînes dynamiquement alloué

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 3;
    
    // Allouer tableau de pointeurs
    char **words = (char **)malloc(count * sizeof(char *));
    
    if (words == NULL)
    {
        printf("Erreur d'allocation\n");
        return (1);
    }
    
    // Allouer et initialiser chaque chaîne
    words[0] = (char *)malloc(6 * sizeof(char));
    words[1] = (char *)malloc(6 * sizeof(char));
    words[2] = (char *)malloc(6 * sizeof(char));
    
    // Vérifier les allocations
    if (words[0] == NULL || words[1] == NULL || words[2] == NULL)
    {
        printf("Erreur d'allocation chaîne\n");
        return (1);
    }
    
    // Remplir les chaînes
    words[0] = "Hello";
    words[1] = "World";
    words[2] = "Test";
    
    // Afficher
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", words[i]);
    }
    
    // Libérer
    for (int i = 0; i < count; i++)
    {
        free(words[i]);
        words[i] = NULL;
    }
    free(words);
    words = NULL;
    
    return (0);
}
```

## Erreurs courantes : Memory leak

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // ERREUR: Memory leak
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 42;
    printf("%d\n", *ptr);
    // Oublie de free(ptr);
    
    // La mémoire est toujours allouée mais on ne peut plus y accéder!
    
    return (0);
}
```

**Solution** :
```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Erreur d'allocation\n");
        return (1);
    }
    
    *ptr = 42;
    printf("%d\n", *ptr);
    
    free(ptr);  // Libérer la mémoire
    ptr = NULL; // Bonne pratique
    
    return (0);
}
```

## Pattern sûr avec gestion d'erreur

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size = 10;
    int *arr = NULL;
    
    // Allouer
    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        printf("Erreur: impossible d'allouer la mémoire\n");
        return (1);
    }
    
    // Utiliser
    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }
    
    // Libérer
    free(arr);
    arr = NULL;
    
    return (0);
}
```

## Bonnes pratiques

1. **Toujours vérifier que malloc réussit** (!=  NULL)
2. **Libérer dans l'ordre inverse** d'allocation (matrice 2D)
3. **Mettre à NULL après free** pour éviter "use-after-free"
4. **Allouer size * sizeof(type)** pour les tableaux
5. **Ne pas oublier le +1** pour les chaînes ('\0')
6. **Utiliser calloc** pour initialiser à zéro
7. **Éviter les memory leaks** en libérant toute mémoire allouée
8. **Compiler avec les flags** : `-Wall -Wextra -Werror -g` pour déboguer
