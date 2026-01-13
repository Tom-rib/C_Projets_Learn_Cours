# 📚 Lib_fenv.h - Environnement Flottant

## À quoi sert fenv.h?

La bibliothèque **fenv.h** permet:
- ✅ Gérer les exceptions flottantes
- ✅ Détecter débordement, underflow, etc.
- ✅ Contrôler les arrondis

## À inclure

```c
#include <fenv.h>
```

## Exceptions flottantes

```c
#include <fenv.h>
#include <stdio.h>

int main(void)
{
    feclearexcept(FE_ALL_EXCEPT);
    
    double x = 1.0 / 0.0;  // Infinity
    
    if (fetestexcept(FE_OVERFLOW))
        printf("Débordement détecté\n");
    
    return (0);
}
```

## Exceptions courantes

- `FE_OVERFLOW` - Débordement
- `FE_UNDERFLOW` - Sous-débordement
- `FE_INVALID` - Opération invalide
- `FE_DIVBYZERO` - Division par zéro

## ✅ Rarement utilisé en Runtrack

La gestion des exceptions flottantes n'est généralement pas nécessaire.

---

**Prochainement: Lib_inttypes.md** 👉 Types entiers formatés
