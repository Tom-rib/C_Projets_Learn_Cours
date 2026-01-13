# 📚 Lib_locale.h - Localisation

## À quoi sert locale.h?

La bibliothèque **locale.h** permet:
- ✅ Changer la langue/région
- ✅ Format des nombres/dates selon locale
- ✅ Support international

## À inclure

```c
#include <locale.h>
```

## setlocale() - Définir la locale

```c
#include <locale.h>
#include <stdio.h>

int main(void)
{
    setlocale(LC_ALL, "fr_FR.UTF-8");
    
    printf("Locale français\n");
    
    return (0);
}
```

## Catégories

- `LC_ALL` - Toutes les catégories
- `LC_NUMERIC` - Format des nombres
- `LC_TIME` - Format date/heure
- `LC_MONETARY` - Formats monétaires
- `LC_COLLATE` - Tri

## ✅ Rarement utilisé en Runtrack

La localisation n'est généralement pas nécessaire pour les bootcamps.

---

**Prochainement: Lib_wchar.md** 👉 Caractères larges
