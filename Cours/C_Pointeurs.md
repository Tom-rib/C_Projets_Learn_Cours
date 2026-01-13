# Cours C - Pointeurs

## Concepts fondamentaux

Un **pointeur** est une variable qui stocke l'adresse mémoire d'une autre variable.

- `&` : Opérateur "adresse de" (adresse d'une variable)
- `*` : Opérateur "déréférençage" (accéder à la valeur pointée)

## Déclarer et initialiser un pointeur

```c
#include <stdio.h>

int main(void)
{
    int a = 10;
    int *ptr = &a;  // ptr pointe vers a
    
    printf("Valeur de a: %d\n", a);           // 10
    printf("Adresse de a: %p\n", &a);         // 0x...
    printf("Valeur du pointeur: %p\n", ptr);  // 0x... (même adresse)
    printf("Valeur pointée: %d\n", *ptr);     // 10
    
    return (0);
}
```

## Pointeur NULL

```c
#include <stdio.h>

int main(void)
{
    int *ptr = NULL;  // Pointeur qui ne pointe nulle part
    
    // Vérifier si un pointeur est valide avant l'utiliser
    if (ptr != NULL)
    {
        printf("Valeur: %d\n", *ptr);
    }
    else
    {
        printf("Pointeur invalide\n");
    }
    
    return (0);
}
```

## Modifier la valeur via un pointeur

```c
#include <stdio.h>

int main(void)
{
    int a = 10;
    int *ptr = &a;
    
    printf("Avant: a = %d\n", a);
    
    *ptr = 20;  // Modifier a à travers le pointeur
    
    printf("Après: a = %d\n", a);  // 20
    printf("Via pointeur: %d\n", *ptr);  // 20
    
    return (0);
}
```

## Pointeur vers pointeur

```c
#include <stdio.h>

int main(void)
{
    int a = 10;
    int *ptr = &a;
    int **ptr_ptr = &ptr;  // Pointeur vers le pointeur
    
    printf("a = %d\n", a);                      // 10
    printf("*ptr = %d\n", *ptr);                // 10
    printf("**ptr_ptr = %d\n", **ptr_ptr);      // 10
    
    return (0);
}
```

## Pointeurs et tableaux

```c
#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // ptr pointe vers le premier élément
    
    // Accès via pointeur
    printf("Élément 0: %d\n", *ptr);         // 10
    printf("Élément 1: %d\n", *(ptr + 1));   // 20
    printf("Élément 2: %d\n", *(ptr + 2));   // 30
    
    // Équivalent à arr[i]
    printf("arr[1] = %d, *(ptr+1) = %d\n", arr[1], *(ptr + 1));
    
    return (0);
}
```

## Arithmétique des pointeurs

```c
#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    
    printf("ptr: %p\n", (void*)ptr);
    printf("ptr + 1: %p\n", (void*)(ptr + 1));
    printf("ptr + 2: %p\n", (void*)(ptr + 2));
    
    // Différence entre deux pointeurs
    int *ptr1 = &arr[0];
    int *ptr2 = &arr[3];
    printf("Différence: %ld éléments\n", ptr2 - ptr1);  // 3
    
    return (0);
}
```

## Passer par référence (pointeur comme paramètre)

```c
#include <stdio.h>

// Passage par valeur (ne modifie pas l'original)
void incrementer_valeur(int x)
{
    x++;
}

// Passage par référence (modifie l'original)
void incrementer_reference(int *x)
{
    (*x)++;
}

int main(void)
{
    int a = 5;
    
    incrementer_valeur(a);
    printf("Après passage par valeur: %d\n", a);  // 5
    
    incrementer_reference(&a);
    printf("Après passage par référence: %d\n", a);  // 6
    
    return (0);
}
```

## Échanger deux variables

```c
#include <stdio.h>

void echanger(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 10;
    int y = 20;
    
    printf("Avant: x = %d, y = %d\n", x, y);
    echanger(&x, &y);
    printf("Après: x = %d, y = %d\n", x, y);
    
    return (0);
}
```

## Pointeur vers une chaîne

```c
#include <stdio.h>

int main(void)
{
    char str[] = "Hello";
    char *ptr = str;  // Pointeur vers le premier caractère
    
    printf("Premier char: %c\n", *ptr);     // H
    printf("Deuxième char: %c\n", *(ptr + 1));  // e
    
    // Parcourir la chaîne
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");  // Hello
    
    return (0);
}
```

## Longueur d'une chaîne avec pointeur

```c
#include <stdio.h>

int my_strlen(char *str)
{
    int longueur = 0;
    
    while (*str != '\0')
    {
        longueur++;
        str++;  // Pointeur vers le caractère suivant
    }
    
    return (longueur);
}

int main(void)
{
    char str[] = "Hello";
    printf("Longueur: %d\n", my_strlen(str));  // 5
    
    return (0);
}
```

## Copier une chaîne avec pointeur

```c
#include <stdio.h>

char *my_strcpy(char *dest, char *src)
{
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  // Terminateur null
    
    return (dest);
}

int main(void)
{
    char source[] = "Hello";
    char destination[20];
    
    my_strcpy(destination, source);
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    
    return (0);
}
```

## Pointeur const vs const pointeur

```c
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;
    
    // Pointeur const (on ne peut pas changer l'adresse)
    int * const ptr1 = &a;
    *ptr1 = 30;      // OK - on peut changer la valeur
    // ptr1 = &b;    // ERREUR - on ne peut pas changer l'adresse
    
    // Pointeur vers const (on ne peut pas changer la valeur)
    const int *ptr2 = &a;
    // *ptr2 = 30;   // ERREUR - on ne peut pas changer la valeur
    ptr2 = &b;       // OK - on peut changer l'adresse
    
    return (0);
}
```

## Fonction retournant un pointeur

```c
#include <stdio.h>

int *get_max_address(int *a, int *b)
{
    if (*a > *b)
        return (a);
    return (b);
}

int main(void)
{
    int x = 10;
    int y = 20;
    
    int *max_ptr = get_max_address(&x, &y);
    printf("Maximum: %d\n", *max_ptr);  // 20
    
    return (0);
}
```

## Tableau de pointeurs

```c
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 30;
    
    int *ptrs[3] = {&a, &b, &c};  // Tableau de 3 pointeurs
    
    for (int i = 0; i < 3; i++)
    {
        printf("Pointeur %d: %d\n", i, *ptrs[i]);
    }
    
    return (0);
}
```

## Bonnes pratiques

1. **Toujours initialiser les pointeurs** avec une adresse valide ou NULL
2. **Vérifier que le pointeur n'est pas NULL** avant d'y accéder
3. **Attention aux pointeurs invalides** (variables qui sortent de portée)
4. **Utiliser const** pour les pointeurs qui ne doivent pas changer
5. **Documenter clairement** ce que chaque pointeur représente
6. **Éviter de déréférencer NULL** (cause un segmentation fault)
7. **Faire attention à la taille des types** en arithmétique de pointeurs
8. **Utiliser %p pour afficher** les adresses (pas %d ou %x)
