# 📚 Lib_wctype.h - Classification Caractères Larges

## À quoi sert wctype.h?

La bibliothèque **wctype.h** fournit:
- ✅ Vérifier type de caractères larges
- ✅ Convertir caractères larges
- ✅ Version large de ctype.h

## À inclure

```c
#include <wctype.h>
```

## Fonctions disponibles

```c
iswalpha(c);                    // Lettre?
iswdigit(c);                    // Chiffre?
iswspace(c);                    // Espace?
towupper(c);                    // Convertir en majuscule
towlower(c);                    // Convertir en minuscule
```

## ✅ Rarement utilisé en Runtrack

La classification de caractères larges n'est généralement pas nécessaire.

---

**Prochainement: Lib_fenv.md** 👉 Environnement flottant
