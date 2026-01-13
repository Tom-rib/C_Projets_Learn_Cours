# Bibliothèque stdlib.h - Utilitaires Standard

## À quoi sert stdlib.h ?

Fournit des fonctions utilitaires : allocation mémoire, conversion, génération aléatoire, etc.

**À inclure** :
```c
#include <stdlib.h>
```

## malloc() - Allouer mémoire

Alloue n octets de mémoire dynamiquement.

**Syntaxe** :
```c
void *malloc(size_t size);
```

**Exemple** :
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
    printf("Valeur: %d\n", *ptr);
    
    free(ptr);
    ptr = NULL;
    
    return (0);
}
```

## calloc() - Allouer et initialiser

Alloue la mémoire et l'initialise à zéro.

**Syntaxe** :
```c
void *calloc(size_t num, size_t size);
```

**Exemple** :
```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr = (int *)calloc(5, sizeof(int));
    
    if (arr == NULL)
    {
        printf("Erreur d'allocation\n");
        return (1);
    }
    
    // Les éléments sont déjà à 0
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);  // 0 0 0 0 0
    }
    printf("\n");
    
    free(arr);
    arr = NULL;
    
    return (0);
}
```

## realloc() - Redimensionner mémoire

Change la taille d'une zone mémoire allouée.

**Syntaxe** :
```c
void *realloc(void *ptr, size_t size);
```

**Exemple** :
```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr = (int *)malloc(3 * sizeof(int));
    
    if (arr == NULL)
    {
        printf("Erreur d'allocation\n");
        return (1);
    }
    
    // Remplir les 3 premiers éléments
    for (int i = 0; i < 3; i++)
        arr[i] = i;
    
    // Augmenter la taille à 5
    int *temp = (int *)realloc(arr, 5 * sizeof(int));
    if (temp == NULL)
    {
        printf("Erreur de réallocation\n");
        free(arr);
        return (1);
    }
    arr = temp;
    
    // Ajouter 2 éléments
    arr[3] = 3;
    arr[4] = 4;
    
    // Afficher
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    free(arr);
    arr = NULL;
    
    return (0);
}
```

## free() - Libérer mémoire

Libère la mémoire allouée par malloc, calloc ou realloc.

**Syntaxe** :
```c
void free(void *ptr);
```

**Exemple** :
```c
#include <stdlib.h>

int main(void)
{
    int *ptr = (int *)malloc(sizeof(int));
    
    // Utiliser ptr...
    
    free(ptr);    // Libérer
    ptr = NULL;   // Bonne pratique
    
    return (0);
}
```

## atoi() - Convertir string en int

Convertit une chaîne en entier.

**Syntaxe** :
```c
int atoi(const char *str);
```

**Exemple** :
```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[] = "42";
    int nombre = atoi(str);
    printf("Nombre: %d\n", nombre);  // 42
    
    char invalid[] = "abc";
    int result = atoi(invalid);
    printf("Résultat: %d\n", result);  // 0
    
    return (0);
}
```

## atof() - Convertir string en float

Convertit une chaîne en float/double.

**Syntaxe** :
```c
double atof(const char *str);
```

**Exemple** :
```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[] = "3.14";
    double nombre = atof(str);
    printf("Nombre: %.2f\n", nombre);  // 3.14
    
    return (0);
}
```

## atol() - Convertir string en long

Convertit une chaîne en long int.

**Syntaxe** :
```c
long atol(const char *str);
```

**Exemple** :
```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[] = "1234567890";
    long nombre = atol(str);
    printf("Nombre: %ld\n", nombre);
    
    return (0);
}
```

## strtol() - Convertir avec contrôle

Conversion plus robuste que atol.

**Syntaxe** :
```c
long strtol(const char *str, char **endptr, int base);
```

**Exemple** :
```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[] = "42abc";
    char *end;
    
    long nombre = strtol(str, &end, 10);  // Base 10
    printf("Nombre: %ld\n", nombre);      // 42
    printf("Reste: %s\n", end);           // abc
    
    return (0);
}
```

## rand() - Générer un nombre aléatoire

Génère un nombre aléatoire entre 0 et RAND_MAX.

**Syntaxe** :
```c
int rand(void);
```

**Exemple** :
```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Initialiser la graine aléatoire
    srand(42);
    
    // Générer 5 nombres aléatoires
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", rand());
    }
    
    return (0);
}
```

## srand() - Initialiser le générateur aléatoire

Initialise la graine pour rand().

**Syntaxe** :
```c
void srand(unsigned int seed);
```

**Exemple avec time()** :
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // Initialiser avec un timestamp
    srand(time(NULL));
    
    // Nombres différents à chaque exécution
    printf("Nombre aléatoire: %d\n", rand() % 100);
    
    return (0);
}
```

## abs() - Valeur absolue

Retourne la valeur absolue d'un entier.

**Syntaxe** :
```c
int abs(int x);
```

**Exemple** :
```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("abs(-42) = %d\n", abs(-42));  // 42
    printf("abs(42) = %d\n", abs(42));    // 42
    
    return (0);
}
```

## labs() et llabs() - Valeur absolue (long)

Pour long int et long long int.

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("labs(-1234567890) = %ld\n", labs(-1234567890));
    printf("llabs(-9223372036854775807) = %lld\n", llabs(-9223372036854775807LL));
    
    return (0);
}
```

## exit() - Quitter le programme

Termine le programme avec un code de sortie.

**Syntaxe** :
```c
void exit(int status);
```

**Exemple** :
```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Le programme démarre\n");
    exit(0);
    printf("Cette ligne ne s'affiche pas\n");  // N'exécutera jamais
    
    return (0);
}
```

## Exemple complet : Jeu de devinette

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int secret = rand() % 100 + 1;
    int essai = 0;
    int nombre;
    
    printf("Devinez le nombre (1-100): \n");
    
    while (essai < 10)
    {
        printf("Tentative %d: ", essai + 1);
        
        if (scanf("%d", &nombre) != 1)
        {
            printf("Entrée invalide\n");
            continue;
        }
        
        if (nombre == secret)
        {
            printf("Gagné! Le nombre était %d\n", secret);
            return (0);
        }
        else if (nombre < secret)
        {
            printf("Plus haut\n");
        }
        else
        {
            printf("Plus bas\n");
        }
        
        essai++;
    }
    
    printf("Perdu! Le nombre était %d\n", secret);
    return (1);
}
```

## Bonnes pratiques

1. **Toujours vérifier** le retour de malloc/calloc (NULL)
2. **Utiliser calloc** si vous voulez initialiser à zéro
3. **Libérer la mémoire** avant de quitter
4. **Initialiser srand** avec time(NULL) pour du vrai aléatoire
5. **Utiliser strtol** au lieu d'atoi pour plus de contrôle
6. **Vérifier les débordements** avec les convertisseurs
7. **exit() termine immédiatement**, utilisez return dans main si possible
