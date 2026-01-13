# 📚 Lib_complex.h - Nombres Complexes

## À quoi sert complex.h?

La bibliothèque **complex.h** fournit:
- ✅ Type complex (nombres complexes)
- ✅ Fonctions mathématiques (creal, cimag, cabs, etc.)
- ✅ Calculs complexes

## À inclure

```c
#include <complex.h>
```

## Créer un nombre complexe

```c
#include <complex.h>
#include <stdio.h>

int main(void)
{
    double complex z = 3.0 + 4.0 * I;  // I = unité imaginaire
    
    printf("Complexe: %f + %fi\n", creal(z), cimag(z));
    
    return (0);
}
```

## Fonctions courantes

```c
double complex_abs = cabs(z);           // Module
double reel = creal(z);                 // Partie réelle
double imaginaire = cimag(z);           // Partie imaginaire
double complex conj = conj(z);          // Conjugué
```

## ✅ Rarement utilisé en Runtrack

Les nombres complexes ne sont généralement pas utilisés dans les bootcamps C classiques.

---

**Prochainement: Lib_locale.md** 👉 Localisation
