# Cours C - Tableaux et Chaînes de Caractères

## Tableaux d'entiers

```c
#include <stdio.h>

int main(void)
{
    // Déclaration et initialisation
    int nombres[5] = {10, 20, 30, 40, 50};
    
    // Accès aux éléments (indexé à partir de 0)
    printf("Premier élément: %d\n", nombres[0]);      // 10
    printf("Deuxième élément: %d\n", nombres[1]);    // 20
    printf("Dernier élément: %d\n", nombres[4]);     // 50
    
    // Modification d'un élément
    nombres[2] = 35;
    printf("Élément modifié: %d\n", nombres[2]);     // 35
    
    return (0);
}
```

## Parcourir un tableau

```c
#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    
    // Avec for
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    return (0);
}
```

## Tableaux bidimensionnels (matrices)

```c
#include <stdio.h>

int main(void)
{
    // Tableau 3x3
    int matrice[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Accès à un élément
    printf("matrice[1][2] = %d\n", matrice[1][2]);  // 6
    
    // Parcourir la matrice
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
    
    return (0);
}
```
Output :
```
1 2 3
4 5 6
7 8 9
```

## Tableaux de caractères (chaînes)

```c
#include <stdio.h>

int main(void)
{
    // Chaîne de caractères
    char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", str);  // Hello
    
    // Notation simplifiée
    char str2[] = "Hello";
    printf("%s\n", str2);  // Hello
    
    // Taille du buffer (attention: ne pas dépasser!)
    char nom[20];
    printf("Entrez votre nom: ");
    scanf("%s", nom);
    printf("Bonjour %s\n", nom);
    
    return (0);
}
```

## Copier une chaîne caractère par caractère

```c
#include <stdio.h>

int main(void)
{
    char source[] = "Hello";
    char destination[20];
    
    // Copie manuelle
    for (int i = 0; source[i] != '\0'; i++)
    {
        destination[i] = source[i];
    }
    destination[5] = '\0';  // Terminateur null
    
    printf("Destination: %s\n", destination);  // Hello
    
    return (0);
}
```

## Chaînes de caractères : le caractère nul '\0'

```c
#include <stdio.h>

int main(void)
{
    char str[] = "Hi";
    
    // La chaîne est stockée comme: 'H', 'i', '\0'
    printf("str[0] = %c\n", str[0]);      // H
    printf("str[1] = %c\n", str[1]);      // i
    printf("str[2] = %d\n", str[2]);      // 0 (caractère nul)
    
    // Impression
    printf("%s\n", str);  // Hi
    
    return (0);
}
```

## Calcul de la longueur d'une chaîne

```c
#include <stdio.h>

int main(void)
{
    char str[] = "Hello";
    int longueur = 0;
    
    while (str[longueur] != '\0')
    {
        longueur++;
    }
    
    printf("Longueur: %d\n", longueur);  // 5
    
    return (0);
}
```

## Tableau de chaînes de caractères

```c
#include <stdio.h>

int main(void)
{
    // Tableau de chaînes
    char jours[7][10] = {
        "Lundi",
        "Mardi",
        "Mercredi",
        "Jeudi",
        "Vendredi",
        "Samedi",
        "Dimanche"
    };
    
    // Accès aux chaînes
    printf("Premier jour: %s\n", jours[0]);  // Lundi
    printf("Caractère 'a' du jour 1: %c\n", jours[1][1]);  // a
    
    // Parcourir
    for (int i = 0; i < 7; i++)
    {
        printf("%d: %s\n", i + 1, jours[i]);
    }
    
    return (0);
}
```

## Passer un tableau à une fonction

```c
#include <stdio.h>

void afficher_tableau(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int nombres[] = {10, 20, 30, 40, 50};
    
    afficher_tableau(nombres, 5);
    
    return (0);
}
```

## Trouver le maximum dans un tableau

```c
#include <stdio.h>

int main(void)
{
    int arr[] = {15, 9, 23, 5, 42, 18};
    int size = 6;
    int max = arr[0];
    
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    
    printf("Maximum: %d\n", max);  // 42
    
    return (0);
}
```

## Inverser un tableau

```c
#include <stdio.h>

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    
    // Inverser
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    
    // Afficher
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");  // 5 4 3 2 1
    
    return (0);
}
```

## Tableau de taille dynamique (simulation)

```c
#include <stdio.h>

int main(void)
{
    int arr[100];  // Pré-allouer de la place
    int size = 0;
    
    // Ajouter des éléments
    arr[size++] = 10;
    arr[size++] = 20;
    arr[size++] = 30;
    
    // Utiliser le tableau
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");  // 10 20 30
    
    return (0);
}
```

## Bonnes pratiques

1. **Toujours vérifier les débordements** de tableau
2. **Utiliser une taille constante ou une variable** pour les boucles
3. **Les chaînes doivent être terminées par '\0'**
4. **Faire attention à la taille du buffer** quand vous lisez des entrées
5. **Passer la taille du tableau** aux fonctions
6. **Initialiser tous les éléments** avant de les utiliser
7. **Attention à l'indexation en C** : elle commence à 0, pas 1
