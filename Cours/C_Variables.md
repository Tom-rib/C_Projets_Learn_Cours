# Cours C - Variables et Types de Données

## Types de données primitifs

### Entiers (int)

```c
#include <stdio.h>

int main(void)
{
    int age = 25;              // Entier standard (au moins 16 bits)
    signed int nombre = -100;  // Entier signé (par défaut)
    unsigned int positif = 100; // Entier non signé (0 et positifs)
    
    printf("age = %d\n", age);
    printf("nombre = %d\n", nombre);
    printf("positif = %u\n", positif);
    
    return (0);
}
```

### Caractères (char)

```c
#include <stdio.h>

int main(void)
{
    char lettre = 'A';
    char code = 65;  // Même caractère, mais par code ASCII
    
    printf("lettre = %c\n", lettre);
    printf("code = %d\n", code);  // Affiche le code ASCII
    printf("lettre en ASCII = %d\n", lettre);
    
    return (0);
}
```

### Nombres décimaux (float, double)

```c
#include <stdio.h>

int main(void)
{
    float prix = 19.99f;      // 32 bits, moins précis
    double pi = 3.14159265;   // 64 bits, plus précis
    
    printf("prix = %.2f\n", prix);   // Affiche 2 décimales
    printf("pi = %.8f\n", pi);       // Affiche 8 décimales
    
    return (0);
}
```

## Déclaration et initialisation

```c
#include <stdio.h>

int main(void)
{
    // Déclaration avec initialisation
    int nombre = 42;
    
    // Déclaration sans initialisation (valeur aléatoire)
    int variable;
    
    // Plusieurs variables du même type
    int a = 1, b = 2, c = 3;
    
    return (0);
}
```

## Format des printf (spécificateurs de format)

| Spécificateur | Type | Exemple |
|---|---|---|
| `%d` | int | `printf("%d", 42);` → 42 |
| `%u` | unsigned int | `printf("%u", 42);` → 42 |
| `%c` | char | `printf("%c", 'A');` → A |
| `%f` | float/double | `printf("%f", 3.14);` → 3.140000 |
| `%.2f` | float/double (2 décimales) | `printf("%.2f", 3.14);` → 3.14 |
| `%s` | char* (string) | `printf("%s", "hello");` → hello |
| `%x` | hex | `printf("%x", 255);` → ff |
| `%o` | octal | `printf("%o", 8);` → 10 |

## Constantes

```c
#include <stdio.h>

#define PI 3.14159
#define NOM "Alice"
#define MAX_AGE 150

int main(void)
{
    // Constante définie par macro
    printf("PI = %f\n", PI);
    
    // Constante avec const
    const float taux = 0.05;
    printf("Taux = %.2f\n", taux);
    
    // Tentative de modification d'une constante (ERREUR)
    // taux = 0.10;  // Compilation error
    
    return (0);
}
```

## Les entiers signés vs non signés

```c
#include <stdio.h>

int main(void)
{
    signed char s = -128;     // Peut être de -128 à 127
    unsigned char u = 255;    // Peut être de 0 à 255
    
    printf("signed char: %d\n", s);
    printf("unsigned char: %u\n", u);
    
    // Attention au débordement !
    unsigned char overflow = 256;  // Devient 0
    printf("overflow: %u\n", overflow);
    
    return (0);
}
```

## Tailles des types (sizeof)

```c
#include <stdio.h>

int main(void)
{
    printf("Taille de int: %lu octets\n", sizeof(int));
    printf("Taille de char: %lu octets\n", sizeof(char));
    printf("Taille de float: %lu octets\n", sizeof(float));
    printf("Taille de double: %lu octets\n", sizeof(double));
    
    return (0);
}
```

## Conversion de type (casting)

```c
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 3;
    
    // Division entière (résultat tronqué)
    printf("%d / %d = %d\n", a, b, a / b);  // 3
    
    // Division avec conversion en float
    printf("%d / %d = %.2f\n", a, b, (float)a / b);  // 3.33
    
    // Conversion char en int
    char lettre = 'A';
    int code = (int)lettre;
    printf("Code ASCII de %c = %d\n", lettre, code);  // 65
    
    return (0);
}
```

## Bonnes pratiques

1. **Initialisez toujours vos variables** avant de les utiliser
2. **Utilisez le bon type** pour votre donnée (int pour nombres entiers, float pour décimaux)
3. **Préférez double à float** pour la précision
4. **Attention aux débordements** avec unsigned char et short
5. **Utilisez const** pour les valeurs qui ne changent pas
