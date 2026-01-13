# 📚 Lib_float.h - Limites des Flottants

## À quoi sert float.h?

La bibliothèque **float.h** définit:
- ✅ Valeurs min/max pour float et double
- ✅ Précision
- ✅ Digits significatifs

## À inclure

```c
#include <float.h>
```

## Limites pour float

```c
#include <float.h>
#include <stdio.h>

int main(void)
{
    printf("FLT_MAX: %f\n", FLT_MAX);       // ~3.4e38
    printf("FLT_MIN: %f\n", FLT_MIN);       // ~1.2e-38
    printf("FLT_DIG: %d\n", FLT_DIG);       // 6 chiffres significatifs
    printf("FLT_EPSILON: %f\n", FLT_EPSILON); // Plus petit x où x != 1+x
    
    return (0);
}
```

## Limites pour double

```c
#include <float.h>
#include <stdio.h>

int main(void)
{
    printf("DBL_MAX: %f\n", DBL_MAX);       // ~1.8e308
    printf("DBL_MIN: %f\n", DBL_MIN);       // ~2.2e-308
    printf("DBL_DIG: %d\n", DBL_DIG);       // 15 chiffres significatifs
    printf("DBL_EPSILON: %e\n", DBL_EPSILON);
    
    return (0);
}
```

## Comparaisons sûres avec flottants

```c
#include <float.h>
#include <stdio.h>
#include <math.h>

int are_equal(double a, double b)
{
    return fabs(a - b) < DBL_EPSILON;
}

int main(void)
{
    double x = 0.1 + 0.2;
    double y = 0.3;
    
    if (are_equal(x, y))
        printf("Égal (avec tolérance)\n");
    else
        printf("Pas égal (x=%f, y=%f)\n", x, y);
    
    return (0);
}
```

## ✅ Bonnes pratiques

1. **Ne jamais comparer** floats avec ==
2. **Utiliser une tolérance** (DBL_EPSILON ou custom)
3. **Connaître la précision** des types flottants
4. **Utiliser double** plutôt que float

---

**ÉTAPE 5 COMPLÈTE!** Tous les utilitaires maintenant! ✅
