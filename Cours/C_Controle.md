# Cours C - Structures de Contrôle (if/else, switch)

## Structure if

```c
#include <stdio.h>

int main(void)
{
    int age = 18;
    
    if (age >= 18)
        printf("Vous êtes majeur\n");
    
    return (0);
}
```

## Structure if/else

```c
#include <stdio.h>

int main(void)
{
    int age = 15;
    
    if (age >= 18)
        printf("Vous êtes majeur\n");
    else
        printf("Vous êtes mineur\n");
    
    return (0);
}
```

## Structure if/else if/else

```c
#include <stdio.h>

int main(void)
{
    int note = 14;
    
    if (note >= 16)
        printf("Très bien\n");
    else if (note >= 12)
        printf("Bien\n");
    else if (note >= 8)
        printf("Passable\n");
    else
        printf("Insuffisant\n");
    
    return (0);
}
```

## Blocs de code avec accolades

```c
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;
    
    if (a < b)
    {
        printf("a est plus petit que b\n");
        printf("Valeur de a: %d\n", a);
        printf("Valeur de b: %d\n", b);
    }
    
    return (0);
}
```

## Conditions imbriquées

```c
#include <stdio.h>

int main(void)
{
    int age = 25;
    int solde = 100;
    
    if (age >= 18)
    {
        if (solde >= 50)
            printf("Vous pouvez acheter\n");
        else
            printf("Solde insuffisant\n");
    }
    else
        printf("Trop jeune\n");
    
    return (0);
}
```

## Structure switch/case

```c
#include <stdio.h>

int main(void)
{
    int jour = 3;
    
    switch (jour)
    {
        case 1:
            printf("Lundi\n");
            break;
        case 2:
            printf("Mardi\n");
            break;
        case 3:
            printf("Mercredi\n");
            break;
        case 4:
            printf("Jeudi\n");
            break;
        case 5:
            printf("Vendredi\n");
            break;
        case 6:
            printf("Samedi\n");
            break;
        case 7:
            printf("Dimanche\n");
            break;
        default:
            printf("Jour invalide\n");
    }
    
    return (0);
}
```

## Switch avec cas regroupés

```c
#include <stdio.h>

int main(void)
{
    int mois = 3;
    
    switch (mois)
    {
        case 12:
        case 1:
        case 2:
            printf("Hiver\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Printemps\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Été\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Automne\n");
            break;
        default:
            printf("Mois invalide\n");
    }
    
    return (0);
}
```

## Attention : le "fall-through"

```c
#include <stdio.h>

int main(void)
{
    int choix = 1;
    
    switch (choix)
    {
        case 1:
            printf("Exécution du case 1\n");
            // ATTENTION: pas de break !
        case 2:
            printf("Exécution du case 2 (aussi!)\n");
            break;
        case 3:
            printf("Exécution du case 3\n");
            break;
        default:
            printf("Cas par défaut\n");
    }
    // Résultat: Affiche case 1 ET case 2
    
    return (0);
}
```

## Conditions complexes avec opérateurs logiques

```c
#include <stdio.h>

int main(void)
{
    int age = 25;
    int permis = 1;  // 1 = possède le permis
    
    // ET logique (&&)
    if (age >= 18 && permis == 1)
        printf("Vous pouvez conduire\n");
    
    // OU logique (||)
    if (age < 5 || age > 65)
        printf("Vous êtes exempté de droits d'entrée\n");
    
    // NON logique (!)
    if (!permis)
        printf("Vous n'avez pas de permis\n");
    
    return (0);
}
```

## Pattern : Évaluation courte-circuit

```c
#include <stdio.h>

int main(void)
{
    int x = 5;
    
    // Si x est négatif, pas besoin de vérifier la division
    if (x > 0 && 10 / x > 2)
        printf("OK\n");
    // x > 0 est faux, donc 10/x n'est pas évaluée
    
    // Cela évite une division par zéro
    x = 0;
    if (x != 0 && 10 / x > 2)
        printf("OK\n");
    
    return (0);
}
```

## Exemple complet : Calculatrice simple

```c
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 5;
    char operateur = '+';
    int resultat;
    
    if (operateur == '+')
        resultat = a + b;
    else if (operateur == '-')
        resultat = a - b;
    else if (operateur == '*')
        resultat = a * b;
    else if (operateur == '/')
    {
        if (b != 0)
            resultat = a / b;
        else
        {
            printf("Erreur: division par zéro\n");
            return (1);
        }
    }
    else
    {
        printf("Opérateur invalide\n");
        return (1);
    }
    
    printf("%d %c %d = %d\n", a, operateur, b, resultat);
    
    return (0);
}
```

## Bonnes pratiques

1. **Toujours utiliser `break` dans les switch** (sauf cas spécifiques)
2. **Préférer `if/else` pour les conditions** et `switch` pour les énumérations
3. **Éviter les conditions trop complexes** : les diviser en plusieurs instructions
4. **Utiliser des accolades** même pour une seule instruction (lisibilité)
5. **Vérifier les erreurs** : division par zéro, dépassement de plage, etc.
