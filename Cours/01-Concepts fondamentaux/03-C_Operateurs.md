# 🎯 C_Operateurs - Opérateurs et Expressions

Ce fichier couvre les **opérateurs arithmétiques, logiques et bitwise**.

## Opérateurs arithmétiques

| Opérateur | Nom | Exemple | Résultat |
|-----------|-----|---------|----------|
| `+` | Addition | `5 + 3` | `8` |
| `-` | Soustraction | `5 - 3` | `2` |
| `*` | Multiplication | `5 * 3` | `15` |
| `/` | Division | `15 / 3` | `5` |
| `%` | Modulo | `17 % 5` | `2` |

## Exemple
```c
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 3;
    
    printf("%d + %d = %d\n", a, b, a + b);      // 13
    printf("%d - %d = %d\n", a, b, a - b);      // 7
    printf("%d * %d = %d\n", a, b, a * b);      // 30
    printf("%d / %d = %d\n", a, b, a / b);      // 3
    printf("%d %% %d = %d\n", a, b, a % b);     // 1
    
    return (0);
}
```

## Opérateurs de comparaison

| Opérateur | Signification | Exemple |
|-----------|---------------|---------|
| `==` | Égal | `x == 5` |
| `!=` | Pas égal | `x != 5` |
| `<` | Plus petit | `x < 5` |
| `>` | Plus grand | `x > 5` |
| `<=` | Plus petit ou égal | `x <= 5` |
| `>=` | Plus grand ou égal | `x >= 5` |

## Opérateurs logiques

| Opérateur | Nom | Exemple |
|-----------|-----|---------|
| `&&` | ET logique | `(x > 0) && (x < 10)` |
| `\|\|` | OU logique | `(x < 0) \|\| (x > 10)` |
| `!` | NON logique | `!(x == 0)` |

## Exemple complet
```c
#include <stdio.h>

int main(void)
{
    int age = 25;
    
    if (age >= 18 && age < 65)
        printf("Vous êtes en âge de travailler\n");
    
    if (age < 13 || age > 70)
        printf("Vous n'êtes pas en âge normal\n");
    
    return (0);
}
```

## Opérateurs d'assignation

```c
int x = 10;
x += 5;      // x = x + 5  (x = 15)
x -= 3;      // x = x - 3  (x = 12)
x *= 2;      // x = x * 2  (x = 24)
x /= 4;      // x = x / 4  (x = 6)
```

## Ordre de priorité

1. `()` Parenthèses
2. `*`, `/`, `%` Multiplication, division, modulo
3. `+`, `-` Addition, soustraction
4. `<`, `>`, `<=`, `>=` Comparaisons
5. `==`, `!=` Égalité
6. `&&` ET logique
7. `||` OU logique

```c
int resultat = 2 + 3 * 4;  // = 2 + 12 = 14 (pas 20!)
int avec_parentheses = (2 + 3) * 4;  // = 5 * 4 = 20
```

---

**Prochainement: C_Controle.md** 👉 if, else, switch
