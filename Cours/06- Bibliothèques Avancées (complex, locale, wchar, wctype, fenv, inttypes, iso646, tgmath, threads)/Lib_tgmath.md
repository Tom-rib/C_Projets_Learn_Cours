# 📚 Lib_tgmath.h - Math Génériques (Type-Generic)

## À quoi sert tgmath.h?

La bibliothèque **tgmath.h** fournit:
- ✅ Macros mathématiques génériques
- ✅ Fonctionnent avec int, float, double
- ✅ Conversion automatique de type

## À inclure

```c
#include <tgmath.h>
```

## Exemple

```c
#include <tgmath.h>
#include <stdio.h>

int main(void)
{
    double x = sqrt(9.0);       // sqrt pour double
    int y = sqrt(9);            // Conversion automatique
    
    printf("%.0f\n", x);        // 3.0
    printf("%d\n", y);          // 3
    
    return (0);
}
```

## Fonctions génériques

- `sqrt()` - Marche avec int, float, double
- `sin()` - Marche avec int, float, double
- `pow()` - Marche avec int, float, double
- etc.

## ✅ Rarement utilisé en Runtrack

Les macros génériques ne sont généralement pas nécessaires. Mieux vaut être explicite.

---

**Prochainement: Lib_threads.md** 👉 Multithreading
