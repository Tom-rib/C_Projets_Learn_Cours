# Bibliothèque string.h - Manipulation de Chaînes

## À quoi sert string.h ?

Fournit des fonctions pour manipuler les chaînes de caractères.

**À inclure** :
```c
#include <string.h>
```

## strlen() - Longueur d'une chaîne

Retourne la longueur d'une chaîne (sans compter le '\0').

**Syntaxe** :
```c
size_t strlen(const char *str);
```

**Exemple** :
```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello";
    
    printf("Longueur: %lu\n", strlen(str));  // 5
    
    return (0);
}
```

## strcpy() - Copier une chaîne

Copie une chaîne source dans une destination.

**Syntaxe** :
```c
char *strcpy(char *dest, const char *src);
```

**Exemple** :
```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char source[] = "Hello";
    char destination[20];
    
    strcpy(destination, source);
    printf("Copie: %s\n", destination);  // Hello
    
    return (0);
}
```

⚠️ **Attention** : strcpy ne vérifie pas la taille du buffer. Utilisez strncpy à la place.

## strncpy() - Copier avec limite

Copie au maximum n caractères.

**Syntaxe** :
```c
char *strncpy(char *dest, const char *src, size_t n);
```

**Exemple** :
```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char source[] = "HelloWorld";
    char destination[10];
    
    strncpy(destination, source, 5);
    destination[5] = '\0';  // Ajouter le terminateur
    printf("Copie: %s\n", destination);  // Hello
    
    return (0);
}
```

## strcmp() - Comparer deux chaînes

Retourne 0 si identiques, <0 si première < deuxième, >0 sinon.

**Syntaxe** :
```c
int strcmp(const char *str1, const char *str2);
```

**Exemple** :
```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "apple";
    char str2[] = "apple";
    char str3[] = "banana";
    
    if (strcmp(str1, str2) == 0)
        printf("str1 et str2 sont identiques\n");
    
    if (strcmp(str1, str3) < 0)
        printf("str1 est avant str3 alphabétiquement\n");
    
    return (0);
}
```

## strncmp() - Comparer avec limite

Compare les n premiers caractères.

**Syntaxe** :
```c
int strncmp(const char *str1, const char *str2, size_t n);
```

**Exemple** :
```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "HelloWorld";
    char str2[] = "HelloUniverse";
    
    if (strncmp(str1, str2, 5) == 0)
        printf("Les 5 premiers caractères sont identiques\n");  // Affiche ceci
    
    return (0);
}
```

## strcat() - Concatener deux chaînes

Ajoute la chaîne source à la fin de la destination.

**Syntaxe** :
```c
char *strcat(char *dest, const char *src);
```

**Exemple** :
```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char destination[50] = "Hello";
    char source[] = " World";
    
    strcat(destination, source);
    printf("%s\n", destination);  // Hello World
    
    return (0);
}
```

⚠️ **Attention** : Assurez-vous que destination a assez de place!

## strncat() - Concatener avec limite

Ajoute au maximum n caractères.

**Syntaxe** :
```c
char *strncat(char *dest, const char *src, size_t n);
```

**Exemple** :
```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char destination[50] = "Hello";
    char source[] = " Beautiful World";
    
    strncat(destination, source, 10);  // Ajoute seulement 10 caractères
    printf("%s\n", destination);  // Hello Beautiful
    
    return (0);
}
```

## strchr() - Trouver un caractère

Recherche la première occurrence d'un caractère.

**Syntaxe** :
```c
char *strchr(const char *str, int c);
```

**Exemple** :
```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello World";
    
    char *result = strchr(str, 'o');
    if (result != NULL)
    {
        printf("Trouvé à: %s\n", result);  // "o World"
    }
    else
    {
        printf("Non trouvé\n");
    }
    
    return (0);
}
```

## strstr() - Trouver une sous-chaîne

Recherche une sous-chaîne.

**Syntaxe** :
```c
char *strstr(const char *str, const char *substring);
```

**Exemple** :
```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello World";
    
    char *result = strstr(str, "World");
    if (result != NULL)
    {
        printf("Trouvé: %s\n", result);  // "World"
    }
    else
    {
        printf("Non trouvé\n");
    }
    
    return (0);
}
```

## memcpy() - Copier de la mémoire

Copie n octets d'une source vers une destination.

**Syntaxe** :
```c
void *memcpy(void *dest, const void *src, size_t n);
```

**Exemple** :
```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char source[20] = "Hello";
    char destination[20];
    
    memcpy(destination, source, 6);  // Copier 6 octets (Hello\0)
    printf("%s\n", destination);  // Hello
    
    return (0);
}
```

## memset() - Remplir de mémoire

Remplit n octets avec une valeur donnée.

**Syntaxe** :
```c
void *memset(void *ptr, int value, size_t n);
```

**Exemple** :
```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[10];
    
    // Remplir avec des zéros
    memset(buffer, 0, sizeof(buffer));
    printf("Buffer rempli de zéros\n");
    
    // Remplir avec des 'A'
    memset(buffer, 'A', 5);
    buffer[5] = '\0';
    printf("Buffer: %s\n", buffer);  // AAAAA
    
    return (0);
}
```

## memcmp() - Comparer de la mémoire

Compare n octets.

**Syntaxe** :
```c
int memcmp(const void *ptr1, const void *ptr2, size_t n);
```

**Exemple** :
```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    
    if (memcmp(str1, str2, 5) == 0)
        printf("Les 5 octets sont identiques\n");
    
    return (0);
}
```

## strcspn() - Trouver le premier caractère d'un ensemble

Retourne la longueur jusqu'au premier caractère qui est dans charset.

**Syntaxe** :
```c
size_t strcspn(const char *str, const char *charset);
```

**Exemple** :
```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello World";
    
    size_t pos = strcspn(str, " ");
    printf("Position du premier espace: %lu\n", pos);  // 5
    
    return (0);
}
```

## Exemple complet : Manipuler une phrase

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char phrase[100] = "Hello";
    char word[] = " World";
    
    // Vérifier la longueur
    printf("Longueur initiale: %lu\n", strlen(phrase));
    
    // Concatener
    strcat(phrase, word);
    printf("Après concat: %s\n", phrase);
    
    // Chercher
    char *pos = strstr(phrase, "World");
    if (pos != NULL)
        printf("'World' trouvé\n");
    
    // Comparer
    char autre[] = "Hello World";
    if (strcmp(phrase, autre) == 0)
        printf("Les phrases sont identiques\n");
    
    return (0);
}
```

## Tableau comparatif des fonctions

| Fonction | Rôle | Risque |
|---|---|---|
| `strcpy` | Copier | Buffer overflow |
| `strncpy` | Copier (limité) | Plus sûr |
| `strcat` | Ajouter | Buffer overflow |
| `strncat` | Ajouter (limité) | Plus sûr |
| `strcmp` | Comparer | Aucun |
| `strlen` | Longueur | Aucun |

## Bonnes pratiques

1. **Préférer strncpy à strcpy** pour éviter les débordements
2. **Préférer strncat à strcat** pour la même raison
3. **Vérifier les retours** de strchr, strstr (peuvent être NULL)
4. **Utiliser memset** pour initialiser les buffers
5. **Attention à la taille des buffers** quand vous concatenez
6. **Les chaînes doivent être null-terminated** ('\0')
