# 📚 Lib_wchar.h - Caractères Larges (Unicode)

## À quoi sert wchar.h?

La bibliothèque **wchar.h** fournit:
- ✅ Type wchar_t (large character - Unicode)
- ✅ Chaînes larges (wchar_t *)
- ✅ Fonctions pour caractères larges

## À inclure

```c
#include <wchar.h>
```

## Utiliser wchar_t

```c
#include <wchar.h>
#include <stdio.h>

int main(void)
{
    wchar_t *str = L"Bonjour";  // L = wide string
    
    wprintf(L"Texte large: %ls\n", str);
    
    return (0);
}
```

## Fonctions disponibles

```c
wchar_t str[50];
wgets(str);                     // Lire
wprintf(L"Texte: %ls\n", str);  // Afficher
wcslen(str);                    // Longueur
wcscpy(dest, src);              // Copier
```

## ✅ Rarement utilisé en Runtrack

Les caractères larges ne sont généralement pas nécessaires pour les bootcamps C.

---

**Prochainement: Lib_wctype.md** 👉 Classification caractères larges
