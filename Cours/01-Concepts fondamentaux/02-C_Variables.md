# 🎯 C_Variables - Types de Données et Variables

## À quoi sert ce fichier?

Ce fichier te montre comment **créer et utiliser des variables** en C, et les différents **types de données** disponibles.

## 📊 Types de données de base

| Type | Taille | Plage | Exemple |
|------|--------|-------|---------|
| `char` | 1 octet | -128 à 127 | `char c = 'A'` |
| `int` | 4 octets | -2 milliards à +2 milliards | `int x = 42` |
| `float` | 4 octets | ~7 décimales | `float f = 3.14` |
| `double` | 8 octets | ~15 décimales | `double d = 3.14159` |

## 🔤 Caractères (char)

### Déclarer et utiliser
```c
#include <stdio.h>

int main(void)
{
    char c = 'A';           // Un seul caractère
    printf("Caractère: %c\n", c);
    
    char lettre = 'Z';
    printf("Lettre: %c\n", lettre);
    
    return (0);
}
```

### Important!
- Un caractère se déclare avec **un seul guillemet** `'A'`
- NOT: `"A"` (c'est une chaîne)

## 🔢 Entiers (int)

### Déclarer et utiliser
```c
#include <stdio.h>

int main(void)
{
    int age = 25;
    int score = -100;
    int zero = 0;
    
    printf("Age: %d\n", age);
    printf("Score: %d\n", score);
    printf("Zéro: %d\n", zero);
    
    return (0);
}
```

### Variantes d'entiers
```c
short int petit = 100;          // Plus petit (2 octets)
long int grand = 1000000000;    // Plus grand (8 octets)
unsigned int positif = 100;     // Seulement positif
```

## 🔢 Nombres décimaux (float et double)

### float - Précision simple
```c
#include <stdio.h>

int main(void)
{
    float prix = 19.99f;        // Ajouter 'f' pour float
    printf("Prix: %.2f€\n", prix);
    
    return (0);
}
```

### double - Précision double (recommandé)
```c
#include <stdio.h>

int main(void)
{
    double pi = 3.14159265;
    printf("Pi: %.8f\n", pi);
    
    double nombre = 1.5;        // Pas de suffixe par défaut
    printf("Nombre: %f\n", nombre);
    
    return (0);
}
```

## 📝 Déclarer plusieurs variables

### Façon 1: Une par une
```c
int a = 1;
int b = 2;
int c = 3;
```

### Façon 2: Sur une ligne
```c
int a = 1, b = 2, c = 3;
```

### Façon 3: Sans initialisation (dangereux)
```c
int x;      // Valeur aléatoire!
int y = 5;  // Valeur 5
```

⚠️ **Toujours initialiser les variables!**

## 🔄 Opérations sur les variables

### Modifier une variable
```c
#include <stdio.h>

int main(void)
{
    int x = 10;
    printf("x = %d\n", x);      // Output: 10
    
    x = 20;                      // Changer la valeur
    printf("x = %d\n", x);      // Output: 20
    
    x = x + 5;                   // Ajouter 5
    printf("x = %d\n", x);      // Output: 25
    
    return (0);
}
```

## 🎓 Exemple complet

```c
#include <stdio.h>

int main(void)
{
    // Informations personnelles
    char prenom = 'T';
    int age = 20;
    double taille = 1.75;
    
    // Afficher les informations
    printf("Prénom: %c\n", prenom);
    printf("Age: %d ans\n", age);
    printf("Taille: %.2f m\n", taille);
    
    // Calculer l'année de naissance
    int annee_naissance = 2024 - age;
    printf("Année de naissance: %d\n", annee_naissance);
    
    return (0);
}
```

### Output
```
Prénom: T
Age: 20 ans
Taille: 1.75 m
Année de naissance: 2004
```

## ⚠️ Erreurs courantes

### Erreur 1: Mauvais format
```c
// ❌ ERREUR
int x = 42;
printf("x = %s\n", x);  // %s pour une chaîne, pas un entier!

// ✅ CORRECT
printf("x = %d\n", x);  // %d pour un entier
```

### Erreur 2: Déclarer deux fois
```c
// ❌ ERREUR
int x = 5;
int x = 10;  // Erreur: x est déjà déclaré!

// ✅ CORRECT
int x = 5;
x = 10;      // Changer la valeur, pas redéclarer
```

### Erreur 3: Oublier d'initialiser
```c
// ⚠️ DANGEREUX
int x;       // Valeur aléatoire!
printf("%d\n", x);

// ✅ BON
int x = 0;   // Initialiser à une valeur connue
printf("%d\n", x);
```

## 📌 Bonnes pratiques

1. **Toujours initialiser** les variables
2. **Utiliser le bon format** dans printf
3. **Utiliser des noms explicites** (age, prix, etc.)
4. **Ajouter 'f'** pour les floats: `3.14f`
5. **Utiliser double** plutôt que float (plus précis)

## 🚀 Pour Runtrack C

### Jour 1 - Job 01+
Tu vas avoir besoin:
- De déclarer des variables
- De les initialiser correctement
- D'utiliser les bons types

---

**Prochainement: C_Operateurs.md** 👉 Opérateurs et expressions
