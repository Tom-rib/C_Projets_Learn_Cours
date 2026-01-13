# 📚 Lib_limits.h - Limites des Types

## À quoi sert limits.h?

La bibliothèque **limits.h** définit:
- ✅ Valeurs min/max pour tous les types entiers
- ✅ Vérifier les débordements
- ✅ Connaître les limites

## À inclure

```c
#include <limits.h>
```

## Limites des entiers

```c
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("INT_MIN: %d\n", INT_MIN);       // -2147483648
    printf("INT_MAX: %d\n", INT_MAX);       // 2147483647
    printf("UINT_MAX: %u\n", UINT_MAX);     // 4294967295
    
    printf("LONG_MIN: %ld\n", LONG_MIN);
    printf("LONG_MAX: %ld\n", LONG_MAX);
    
    printf("CHAR_MIN: %d\n", CHAR_MIN);
    printf("CHAR_MAX: %d\n", CHAR_MAX);
    
    return (0);
}
```

## Vérifier débordement

```c
#include <limits.h>
#include <stdio.h>

int safe_add(int a, int b)
{
    // Vérifier si a + b débordera
    if (a > INT_MAX - b)
    {
        printf("Débordement détecté!\n");
        return INT_MAX;
    }
    
    return a + b;
}

int main(void)
{
    printf("100 + 50 = %d\n", safe_add(100, 50));
    printf("INT_MAX + 1 = %d\n", safe_add(INT_MAX, 1));
    
    return (0);
}
```

## ✅ Bonnes pratiques

1. **Connaître les limites** des types utilisés
2. **Vérifier les débordements** si critique
3. **Utiliser INT_MAX** plutôt que hardcoder 2147483647

---

**Prochainement: Lib_float.md** 👉 Limites des flottants
