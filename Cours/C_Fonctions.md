# Cours C - Fonctions

## Structure d'une fonction

```c
#include <stdio.h>

// Prototype de la fonction (déclaration)
int additionner(int a, int b);

// Utilisation de la fonction
int main(void)
{
    int resultat = additionner(5, 3);
    printf("5 + 3 = %d\n", resultat);
    
    return (0);
}

// Implémentation de la fonction
int additionner(int a, int b)
{
    return (a + b);
}
```

## Types de retour

```c
#include <stdio.h>

// Fonction retournant un entier
int multiplication(int a, int b)
{
    return (a * b);
}

// Fonction retournant un float
float division(float a, float b)
{
    if (b == 0)
        return (-1);  // Erreur
    return (a / b);
}

// Fonction ne retournant rien (void)
void afficher(char *message)
{
    printf("%s\n", message);
}

int main(void)
{
    printf("Multiplication: %d\n", multiplication(4, 5));
    printf("Division: %.2f\n", division(10, 3));
    afficher("Bonjour!");
    
    return (0);
}
```

## Fonction sans paramètres

```c
#include <stdio.h>

void dire_bonjour(void)
{
    printf("Bonjour!\n");
}

int main(void)
{
    dire_bonjour();
    dire_bonjour();
    
    return (0);
}
```

## Fonction avec plusieurs paramètres

```c
#include <stdio.h>

int max(int a, int b, int c)
{
    int resultat = a;
    
    if (b > resultat)
        resultat = b;
    if (c > resultat)
        resultat = c;
    
    return (resultat);
}

int main(void)
{
    printf("Max de 5, 12, 8: %d\n", max(5, 12, 8));  // 12
    
    return (0);
}
```

## Prototype de fonction (déclaration)

```c
#include <stdio.h>

// Prototypes (déclarations)
int additionner(int a, int b);
void afficher_nombre(int n);

int main(void)
{
    printf("Résultat: %d\n", additionner(10, 20));
    afficher_nombre(42);
    
    return (0);
}

// Implémentations
int additionner(int a, int b)
{
    return (a + b);
}

void afficher_nombre(int n)
{
    printf("Nombre: %d\n", n);
}
```

## Passage par valeur

```c
#include <stdio.h>

void incrementer(int x)
{
    x++;  // Modifie la copie locale, pas l'original
}

int main(void)
{
    int a = 5;
    printf("Avant: %d\n", a);
    
    incrementer(a);
    printf("Après: %d\n", a);  // Toujours 5
    
    return (0);
}
```

## Compter avec une boucle (exemple de fonction utile)

```c
#include <stdio.h>

// Fonction pour faire une somme
int somme(int arr[], int size)
{
    int total = 0;
    
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    
    return (total);
}

int main(void)
{
    int nombres[] = {1, 2, 3, 4, 5};
    int total = somme(nombres, 5);
    printf("Somme: %d\n", total);  // 15
    
    return (0);
}
```

## Chercher un élément dans un tableau

```c
#include <stdio.h>

int trouver_indice(int arr[], int size, int valeur)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == valeur)
            return (i);
    }
    return (-1);  // Pas trouvé
}

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};
    
    int indice = trouver_indice(arr, 5, 30);
    printf("Indice de 30: %d\n", indice);  // 2
    
    indice = trouver_indice(arr, 5, 100);
    printf("Indice de 100: %d\n", indice);  // -1
    
    return (0);
}
```

## Fonction avec conditions et boucles

```c
#include <stdio.h>

// Vérifier si un nombre est premier
int est_premier(int n)
{
    if (n < 2)
        return (0);
    
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return (0);
    }
    
    return (1);
}

int main(void)
{
    printf("7 est premier: %d\n", est_premier(7));      // 1
    printf("10 est premier: %d\n", est_premier(10));    // 0
    
    return (0);
}
```

## Portée des variables

```c
#include <stdio.h>

int global = 100;  // Variable globale

void fonction1(void)
{
    int locale = 10;  // Variable locale à fonction1
    printf("Locale: %d\n", locale);
    printf("Global: %d\n", global);
}

int main(void)
{
    int locale = 50;  // Variable locale à main
    
    printf("Locale de main: %d\n", locale);
    fonction1();
    printf("Locale de main (après appel): %d\n", locale);
    // locale de main n'est pas affectée
    
    return (0);
}
```

## Récursion (fonction qui s'appelle elle-même)

```c
#include <stdio.h>

// Calcul de la factorielle
int factorielle(int n)
{
    if (n <= 1)
        return (1);
    return (n * factorielle(n - 1));
}

int main(void)
{
    printf("5! = %d\n", factorielle(5));  // 120
    printf("3! = %d\n", factorielle(3));  // 6
    
    return (0);
}
```

## Exemple : Calculatrice complète

```c
#include <stdio.h>

int ajouter(int a, int b)
{
    return (a + b);
}

int soustraire(int a, int b)
{
    return (a - b);
}

int multiplier(int a, int b)
{
    return (a * b);
}

int diviser(int a, int b)
{
    if (b == 0)
        return (-1);
    return (a / b);
}

int main(void)
{
    printf("10 + 5 = %d\n", ajouter(10, 5));
    printf("10 - 5 = %d\n", soustraire(10, 5));
    printf("10 * 5 = %d\n", multiplier(10, 5));
    printf("10 / 5 = %d\n", diviser(10, 5));
    
    return (0);
}
```

## Bonnes pratiques

1. **Toujours déclarer les prototypes** des fonctions
2. **Utiliser des noms clairs** pour les fonctions
3. **Une fonction doit faire une chose** (principe de responsabilité unique)
4. **Documenter les fonctions** avec des commentaires
5. **Utiliser void pour les paramètres** si aucun paramètre n'est attendu
6. **Vérifier les erreurs** (division par zéro, etc.)
7. **Éviter les variables globales** autant que possible
8. **Limiter la profondeur de récursion** pour éviter le débordement de pile
