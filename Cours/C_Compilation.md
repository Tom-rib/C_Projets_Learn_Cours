# Cours C - Compilation et Bonnes Pratiques

## Commandes de compilation courantes

### Compilation simple

```bash
gcc mon_programme.c -o mon_programme
./mon_programme
```

### Compilation avec avertissements

```bash
gcc -Wall -Wextra -Werror mon_programme.c -o mon_programme
```

**Signification des flags** :
- `-Wall` : Active tous les avertissements importants
- `-Wextra` : Active les avertissements supplémentaires
- `-Werror` : Traite les avertissements comme des erreurs

### Compilation avec débogage

```bash
gcc -Wall -Wextra -Werror -g mon_programme.c -o mon_programme
gdb ./mon_programme
```

### Compilation multi-fichier

```bash
gcc -Wall -Wextra -Werror -c mon_programme.c -o mon_programme.o
gcc -Wall -Wextra -Werror -c utils.c -o utils.o
gcc mon_programme.o utils.o -o mon_programme
```

## Makefiles

Un Makefile automatise la compilation.

**Exemple simple** :
```makefile
CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = mon_programme
SOURCES = main.c utils.c
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean
```

**Utilisation** :
```bash
make          # Compiler
make clean    # Supprimer les fichiers générés
```

## Fichiers d'en-tête (.h)

Les fichiers d'en-tête contiennent les déclarations.

**math.h** :
```c
#ifndef MATH_H
#define MATH_H

int additionner(int a, int b);
int soustraire(int a, int b);

#endif
```

**math.c** :
```c
#include "math.h"

int additionner(int a, int b)
{
    return (a + b);
}

int soustraire(int a, int b)
{
    return (a - b);
}
```

**main.c** :
```c
#include <stdio.h>
#include "math.h"

int main(void)
{
    printf("5 + 3 = %d\n", additionner(5, 3));
    printf("5 - 3 = %d\n", soustraire(5, 3));
    
    return (0);
}
```

## Guards : Éviter les inclusions multiples

```c
#ifndef UTILS_H
#define UTILS_H

void ma_fonction(void);

#endif  // UTILS_H
```

## Commandes utiles

### Vérifier la syntaxe sans compiler

```bash
gcc -fsyntax-only mon_programme.c
```

### Voir les avertissements détaillés

```bash
gcc -Wall -Wextra -Wunused -Wuninitialized mon_programme.c
```

### Compiler avec optimisation

```bash
gcc -O2 -Wall -Wextra mon_programme.c -o mon_programme
```

## Messages d'erreur courants

### Undeclared identifier

```
error: 'fonction_inconnue' undeclared
```

**Cause** : Fonction non déclarée (oubli du prototype ou du header)

**Solution** : Ajouter le prototype ou l'en-tête

### Implicit declaration

```
warning: implicit declaration of function 'printf'
```

**Cause** : Header manquant

**Solution** : Ajouter `#include <stdio.h>`

### Conflicting types

```
error: conflicting types for 'foo'
```

**Cause** : Déclaration vs implémentation inconsistente

**Solution** : Vérifier les prototypes

### Undefined reference

```
undefined reference to 'fonction'
```

**Cause** : Implémentation manquante ou non compilée

**Solution** : Vérifier que tous les fichiers sont compilés

## Pattern : Structure d'un projet

```
mon_projet/
├── Makefile
├── src/
│   ├── main.c
│   ├── utils.c
│   └── math.c
├── include/
│   ├── utils.h
│   └── math.h
└── README.md
```

## Conventions de nommage

### Fonctions et variables

```c
int calcul_somme(int a, int b);  // snake_case
int nombre_total;
```

### Types

```c
typedef struct
{
    int x;
    int y;
} point_t;  // Suffixe _t

typedef enum
{
    TRUE,
    FALSE
} booleen_t;
```

### Constantes

```c
#define MAX_SIZE 1000
#define PI 3.14159
```

### Macros

```c
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
```

## Gestion des erreurs

### Pattern courant

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr = (int *)malloc(sizeof(int));
    
    if (ptr == NULL)
    {
        fprintf(stderr, "Erreur: allocation échouée\n");
        return (1);  // Code d'erreur
    }
    
    *ptr = 42;
    printf("Valeur: %d\n", *ptr);
    
    free(ptr);
    ptr = NULL;
    
    return (0);  // Succès
}
```

### Utiliser errno

```c
#include <stdio.h>
#include <errno.h>

int main(void)
{
    FILE *file = fopen("fichier.txt", "r");
    
    if (file == NULL)
    {
        perror("fopen");  // Affiche le message d'erreur
        return (1);
    }
    
    fclose(file);
    
    return (0);
}
```

## Recommandations courantes pour Runtrack

1. **Toujours compiler avec** : `-Wall -Wextra -Werror`
2. **Créer un header** pour chaque module
3. **Éviter les variables globales** autant que possible
4. **Tester chaque fonction** individuellement
5. **Lire les retours d'erreur** de toutes les fonctions
6. **Libérer la mémoire** avec free() si malloc() a réussi
7. **Fermer les fichiers** après utilisation
8. **Vérifier les pointeurs NULL** avant utilisation
9. **Initialiser les variables** avant de les utiliser
10. **Mettre des prototypes** au début des fichiers

## Exemple de projet Runtrack-like

**my_lib.h** :
```c
#ifndef MY_LIB_H
#define MY_LIB_H

void my_putchar(char c);
void my_putstr(char *str);
int my_strlen(char *str);
char *my_strcpy(char *dest, char *src);

#endif
```

**my_putchar.c** :
```c
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
```

**my_putstr.c** :
```c
#include "my_lib.h"

void my_putstr(char *str)
{
    if (str == NULL)
        return;
    
    while (*str != '\0')
    {
        my_putchar(*str);
        str++;
    }
}
```

**my_strlen.c** :
```c
int my_strlen(char *str)
{
    int len = 0;
    
    if (str == NULL)
        return (0);
    
    while (str[len] != '\0')
        len++;
    
    return (len);
}
```

**main.c** :
```c
#include "my_lib.h"

int main(void)
{
    my_putstr("Hello, World!\n");
    my_putstr("Longueur: ");
    int len = my_strlen("Hello");
    // Afficher len en chiffres...
    
    return (0);
}
```

**Makefile** :
```makefile
CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = programme

SOURCES = main.c my_putchar.c my_putstr.c my_strlen.c
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

re: clean all

.PHONY: all clean re
```

## Checklist avant de rendre

- [ ] Compilation sans erreur : `make`
- [ ] Compilation avec warnings : `-Wall -Wextra -Werror`
- [ ] Mémoire bien gérée : pas de memory leak
- [ ] Prototypes exacts : correspondre aux énoncés
- [ ] Tous les fichiers dans le bon répertoire
- [ ] Code bien indenté (4 espaces)
- [ ] Pas de variables globales inutiles
- [ ] Fonctions trop longues ? Les décomposer
- [ ] Repository git : `git push origin main`
- [ ] README ou documentation (si requis)
