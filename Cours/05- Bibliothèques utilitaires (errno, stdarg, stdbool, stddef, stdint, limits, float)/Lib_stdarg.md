# 📚 Lib_stdarg.h - Arguments Variables

## À quoi sert stdarg.h?

La bibliothèque **stdarg.h** permet:
- ✅ Créer des fonctions avec nombre d'arguments variable
- ✅ Accéder aux arguments variables
- ✅ Implémenter printf-like functions

## À inclure

```c
#include <stdarg.h>
```

## va_list, va_start, va_arg, va_end

**Types et macros:**
```c
va_list args;           // Liste d'arguments
va_start(args, last);   // Initialiser
va_arg(args, type);     // Récupérer argument suivant
va_end(args);           // Terminer
```

## Exemple: Fonction somme

```c
#include <stdarg.h>
#include <stdio.h>

int somme(int count, ...)
{
    va_list args;
    va_start(args, count);
    
    int total = 0;
    for (int i = 0; i < count; i++)
    {
        int val = va_arg(args, int);
        total += val;
    }
    
    va_end(args);
    
    return (total);
}

int main(void)
{
    printf("Somme: %d\n", somme(3, 10, 20, 30));  // 60
    printf("Somme: %d\n", somme(5, 1, 2, 3, 4, 5));  // 15
    
    return (0);
}
```

## Exemple: Fonction moyenne

```c
#include <stdarg.h>
#include <stdio.h>

double moyenne(int count, ...)
{
    va_list args;
    va_start(args, count);
    
    double sum = 0;
    for (int i = 0; i < count; i++)
        sum += va_arg(args, double);
    
    va_end(args);
    
    return (sum / count);
}

int main(void)
{
    printf("Moyenne: %.2f\n", moyenne(3, 10.0, 20.0, 30.0));
    
    return (0);
}
```

## ⚠️ Important

1. **Au moins un argument nommé** avant ...
2. **Savoir le type** des arguments
3. **Savoir le nombre** d'arguments
4. **Toujours va_end()** après va_start()

---

**Prochainement: Lib_stdbool.md** 👉 Type booléen
