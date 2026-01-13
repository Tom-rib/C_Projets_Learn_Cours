# 📚 Lib_iso646.h - Opérateurs Texte Alternatifs

## À quoi sert iso646.h?

La bibliothèque **iso646.h** fournit:
- ✅ Noms texte pour opérateurs
- ✅ Alternative pour claviers sans certains symboles
- ✅ Code plus lisible pour certains

## À inclure

```c
#include <iso646.h>
```

## Opérateurs alternatifs

```c
#include <iso646.h>
#include <stdio.h>

int main(void)
{
    int x = 5;
    int y = 3;
    
    if (x and y > 0)            // Au lieu de &&
        printf("ET logique\n");
    
    if (x or y)                 // Au lieu de ||
        printf("OU logique\n");
    
    if (not (x < 0))            // Au lieu de !
        printf("NON logique\n");
    
    int z = x bitand y;         // Au lieu de &
    
    return (0);
}
```

## Tous les alternatifs

| Syntaxe | Alternative |
|---------|-------------|
| `&&` | `and` |
| `\|\|` | `or` |
| `!` | `not` |
| `&` | `bitand` |
| `\|` | `bitor` |
| `^` | `xor` |
| `~` | `compl` |
| `&=` | `and_eq` |
| `\|=` | `or_eq` |
| `^=` | `xor_eq` |

## ⚠️ À éviter

**Ne pas utiliser** iso646.h sauf si absolument nécessaire (clavier spécial).

---

**Prochainement: Lib_tgmath.md** 👉 Math génériques
