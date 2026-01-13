# Cours C - Opérateurs et Expressions

## Opérateurs arithmétiques

```c
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 3;
    
    printf("Addition: %d + %d = %d\n", a, b, a + b);      // 13
    printf("Soustraction: %d - %d = %d\n", a, b, a - b);  // 7
    printf("Multiplication: %d * %d = %d\n", a, b, a * b); // 30
    printf("Division: %d / %d = %d\n", a, b, a / b);      // 3
    printf("Modulo: %d %% %d = %d\n", a, b, a % b);       // 1
    
    return (0);
}
```

## Opérateurs de comparaison

```c
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 5;
    
    printf("a > b: %d\n", a > b);    // 1 (vrai)
    printf("a < b: %d\n", a < b);    // 0 (faux)
    printf("a >= b: %d\n", a >= b);  // 1 (vrai)
    printf("a <= b: %d\n", a <= b);  // 0 (faux)
    printf("a == b: %d\n", a == b);  // 0 (faux)
    printf("a != b: %d\n", a != b);  // 1 (vrai)
    
    return (0);
}
```

## Opérateurs logiques

```c
#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 0;
    
    // ET logique (&&)
    printf("a && b: %d\n", a && b);     // 0 (faux)
    printf("a && 1: %d\n", a && 1);     // 1 (vrai)
    
    // OU logique (||)
    printf("a || b: %d\n", a || b);     // 1 (vrai)
    printf("b || b: %d\n", b || b);     // 0 (faux)
    
    // NON logique (!)
    printf("!a: %d\n", !a);             // 0 (faux)
    printf("!b: %d\n", !b);             // 1 (vrai)
    
    return (0);
}
```

## Opérateurs d'assignation

```c
#include <stdio.h>

int main(void)
{
    int a = 10;
    
    printf("a = %d\n", a);
    a += 5;      // a = a + 5
    printf("a += 5: %d\n", a);
    
    a -= 3;      // a = a - 3
    printf("a -= 3: %d\n", a);
    
    a *= 2;      // a = a * 2
    printf("a *= 2: %d\n", a);
    
    a /= 4;      // a = a / 4
    printf("a /= 4: %d\n", a);
    
    a %= 3;      // a = a % 3
    printf("a %%= 3: %d\n", a);
    
    return (0);
}
```

## Opérateurs d'incrémentation et décrémentation

```c
#include <stdio.h>

int main(void)
{
    int a = 5;
    
    // Pré-incrémentation (incrémenter avant d'utiliser)
    printf("++a: %d\n", ++a);  // 6
    printf("a = %d\n", a);     // 6
    
    // Post-incrémentation (utiliser avant d'incrémenter)
    printf("a++: %d\n", a++);  // 6
    printf("a = %d\n", a);     // 7
    
    // Pré-décrémentation
    printf("--a: %d\n", --a);  // 6
    
    // Post-décrémentation
    printf("a--: %d\n", a--);  // 6
    printf("a = %d\n", a);     // 5
    
    return (0);
}
```

## Opérateur ternaire (condition ? vrai : faux)

```c
#include <stdio.h>

int main(void)
{
    int age = 18;
    
    // Syntaxe: condition ? valeur_si_vrai : valeur_si_faux
    printf("Vous êtes %s\n", age >= 18 ? "majeur" : "mineur");
    
    // Peut être utilisé pour assigner une valeur
    char status = age >= 18 ? 'A' : 'M';
    printf("Status: %c\n", status);
    
    // Imbriqué
    int note = 15;
    char grade = note >= 16 ? 'A' : note >= 12 ? 'B' : note >= 8 ? 'C' : 'D';
    printf("Note: %d -> Grade: %c\n", note, grade);
    
    return (0);
}
```

## Opérateurs binaires (bitwise)

```c
#include <stdio.h>

int main(void)
{
    int a = 5;   // 0101 en binaire
    int b = 3;   // 0011 en binaire
    
    printf("a & b (ET): %d\n", a & b);      // 0001 = 1
    printf("a | b (OU): %d\n", a | b);      // 0111 = 7
    printf("a ^ b (XOR): %d\n", a ^ b);     // 0110 = 6
    printf("~a (NON): %d\n", ~a);           // Inverse tous les bits
    printf("a << 1 (décalage gauche): %d\n", a << 1);  // 10 (a * 2)
    printf("a >> 1 (décalage droite): %d\n", a >> 1);  // 2 (a / 2)
    
    return (0);
}
```

## Précédence des opérateurs

| Priorité | Opérateurs | Associativité |
|---|---|---|
| 1 (Plus haute) | `()` `[]` | Gauche à droite |
| 2 | `!` `~` `++` `--` `+` `-` | Droite à gauche |
| 3 | `*` `/` `%` | Gauche à droite |
| 4 | `+` `-` | Gauche à droite |
| 5 | `<<` `>>` | Gauche à droite |
| 6 | `<` `<=` `>` `>=` | Gauche à droite |
| 7 | `==` `!=` | Gauche à droite |
| 8 | `&` | Gauche à droite |
| 9 | `^` | Gauche à droite |
| 10 | `|` | Gauche à droite |
| 11 | `&&` | Gauche à droite |
| 12 | `||` | Gauche à droite |
| 13 | `? :` | Droite à gauche |
| 14 (Plus basse) | `=` `+=` `-=` etc. | Droite à gauche |

## Exemple complet : Calcul du prix TTC

```c
#include <stdio.h>

int main(void)
{
    double prix_ht = 100.0;
    double taux_tva = 0.20;
    
    // Calcul du prix TTC
    double tva = prix_ht * taux_tva;
    double prix_ttc = prix_ht + tva;
    
    printf("Prix HT: %.2f €\n", prix_ht);
    printf("TVA (20%%): %.2f €\n", tva);
    printf("Prix TTC: %.2f €\n", prix_ttc);
    
    // Avec opérateur ternaire
    char reduction = prix_ttc > 150.0 ? 'O' : 'N';
    printf("Réduction applicable: %c\n", reduction);
    
    return (0);
}
```

## Bonnes pratiques

1. **Utilisez des parenthèses** pour clarifier la précédence : `a + b * c` → `a + (b * c)`
2. **Attention à l'ordre d'évaluation** avec les opérateurs logiques (évaluation courte-circuit)
3. **Division par zéro** : Toujours vérifier avant de diviser
4. **Modulo négatif** : Comportement spécifique, à bien comprendre
5. **Débordement entier** : Attention quand les nombres deviennent trop grands
