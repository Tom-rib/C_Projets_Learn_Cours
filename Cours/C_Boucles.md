# Cours C - Boucles (while, for, do/while)

## Boucle while

```c
#include <stdio.h>

int main(void)
{
    int i = 1;
    
    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }
    
    return (0);
}
```
Output :
```
1
2
3
4
5
```

## Boucle for

```c
#include <stdio.h>

int main(void)
{
    // Syntaxe: for (initialisation; condition; incrémentation)
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
    
    return (0);
}
```
Output :
```
1
2
3
4
5
```

## Équivalence while et for

```c
#include <stdio.h>

int main(void)
{
    // Version while
    int i = 1;
    while (i <= 5)
    {
        printf("While: %d\n", i);
        i++;
    }
    
    // Version for (exactement équivalent)
    for (int j = 1; j <= 5; j++)
    {
        printf("For: %d\n", j);
    }
    
    return (0);
}
```

## Boucle do/while

```c
#include <stdio.h>

int main(void)
{
    int i = 1;
    
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
    
    return (0);
}
```

## Différence entre while et do/while

```c
#include <stdio.h>

int main(void)
{
    int i = 6;
    
    // while: la condition est vérifiée avant, donc la boucle ne s'exécute pas
    while (i <= 5)
        printf("While: %d\n", i);
    
    // do/while: s'exécute au moins une fois
    do
    {
        printf("Do-While: %d\n", i);
    } while (i <= 5);
    
    return (0);
}
```
Output :
```
Do-While: 6
```

## Boucle for décroissante

```c
#include <stdio.h>

int main(void)
{
    for (int i = 5; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    
    return (0);
}
```
Output :
```
5
4
3
2
1
```

## Boucles imbriquées

```c
#include <stdio.h>

int main(void)
{
    // Table de multiplication
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    
    return (0);
}
```
Output :
```
1 2 3
2 4 6
3 6 9
```

## Break : Sortir d'une boucle

```c
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
            break;  // Sortir de la boucle
        printf("%d\n", i);
    }
    
    printf("Boucle terminée\n");
    
    return (0);
}
```
Output :
```
1
2
3
4
Boucle terminée
```

## Continue : Passer à l'itération suivante

```c
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
            continue;  // Sauter le reste, aller à l'itération suivante
        printf("%d\n", i);
    }
    
    return (0);
}
```
Output :
```
1
3
5
7
9
```

## Boucle infinie

```c
#include <stdio.h>

int main(void)
{
    int i = 0;
    
    // Boucle infinie (attention!)
    while (1)
    {
        printf("%d\n", i);
        i++;
        if (i > 5)
            break;  // Sortir avec break
    }
    
    return (0);
}
```

## Parcourir une chaîne de caractères

```c
#include <stdio.h>

int main(void)
{
    char str[] = "Hello";
    
    // Méthode 1: avec while
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
    
    printf("\n");
    
    // Méthode 2: avec for
    for (int j = 0; str[j] != '\0'; j++)
    {
        printf("%c\n", str[j]);
    }
    
    return (0);
}
```
Output :
```
H
e
l
l
o

H
e
l
l
o
```

## Calculer la longueur d'une chaîne (sans strlen)

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
    
    printf("Longueur de '%s': %d\n", str, longueur);
    
    return (0);
}
```
Output :
```
Longueur de 'Hello': 5
```

## Somme des nombres

```c
#include <stdio.h>

int main(void)
{
    int somme = 0;
    
    for (int i = 1; i <= 10; i++)
    {
        somme += i;
    }
    
    printf("Somme de 1 à 10: %d\n", somme);
    // Résultat: 55
    
    return (0);
}
```

## Recherche dans une boucle

```c
#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};
    int recherche = 30;
    int trouve = 0;
    
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == recherche)
        {
            trouve = 1;
            printf("Trouvé à l'indice %d\n", i);
            break;
        }
    }
    
    if (!trouve)
        printf("Non trouvé\n");
    
    return (0);
}
```
Output :
```
Trouvé à l'indice 2
```

## Bonnes pratiques

1. **Initialiser les variables de boucle** correctement
2. **Vérifier la condition d'arrêt** pour éviter les boucles infinies
3. **Utiliser `for` pour les boucles avec nombre connu d'itérations**
4. **Utiliser `while` pour les boucles avec condition complexe**
5. **Utiliser `do/while` quand l'exécution au moins une fois est nécessaire**
6. **Éviter de modifier la variable de boucle dans le corps** (sauf si intentionnel)
7. **Utiliser `break` et `continue` modérément** pour la lisibilité
