# 📚 ÉTAPE 6 - BIBLIOTHÈQUES AVANCÉES

## 🎯 À quoi sert cette étape?

Cette étape couvre **9 bibliothèques spécialisées et avancées** pour:
- ✅ Nombres complexes (mathématiques spécialisées)
- ✅ Internationalisation et localisation
- ✅ Caractères larges et Unicode
- ✅ Gestion des exceptions flottantes
- ✅ Types formatés pour printf/scanf
- ✅ Alternatives syntaxiques
- ✅ Mathématiques génériques
- ✅ Multithreading

## 📂 Structure des fichiers

```
06_BIBLIOTHEQUES_AVANCEES/
├── README.md                    ← Vous êtes ici
├── Lib_complex.md               🔢 complex.h - Nombres complexes
├── Lib_locale.md                🌍 locale.h - Localisation
├── Lib_wchar.md                 📱 wchar.h - Caractères larges
├── Lib_wctype.md                🔤 wctype.h - Classification larges
├── Lib_fenv.md                  ⚠️ fenv.h - Environnement flottant
├── Lib_inttypes.md              📊 inttypes.h - Types formatés
├── Lib_iso646.md                🔤 iso646.h - Opérateurs texte
├── Lib_tgmath.md                🔀 tgmath.h - Math génériques
└── Lib_threads.md               ⚙️ threads.h - Multithreading
```

## 📖 Détail de chaque bibliothèque

### 1️⃣ **Lib_complex.md** - Nombres Complexes

**Bibliothèque:** `<complex.h>`

**Utilité:** Opérations sur nombres complexes (a + bi)

```c
#include <complex.h>
#include <stdio.h>

double complex z = 3.0 + 4.0 * I;
double module = cabs(z);  // |z| = 5
```

**Fonctions clés:**
- `creal(z)` - Partie réelle
- `cimag(z)` - Partie imaginaire
- `cabs(z)` - Module
- `conj(z)` - Conjugué
- `cexp()`, `csin()`, `ccos()`, etc. - Math complexes

**Quand l'utiliser:**
- ❌ **Rarement en Runtrack C**
- ✅ Pour calculs mathématiques avancés (univers/physique)

**Priorité Runtrack:** ⭐ (Non utilisé)

---

### 2️⃣ **Lib_locale.md** - Localisation

**Bibliothèque:** `<locale.h>`

**Utilité:** Adapter format nombres/dates selon langue/région

```c
#include <locale.h>
#include <stdio.h>

setlocale(LC_ALL, "fr_FR.UTF-8");
printf("Locale français\n");
```

**Fonctions clés:**
- `setlocale(category, locale)` - Changer locale

**Catégories:**
- `LC_ALL` - Tout
- `LC_NUMERIC` - Format nombres
- `LC_TIME` - Format date/heure
- `LC_MONETARY` - Format monétaire

**Quand l'utiliser:**
- ❌ **Non nécessaire en Runtrack C**
- ✅ Pour applications internationales

**Priorité Runtrack:** ⭐ (Non utilisé)

---

### 3️⃣ **Lib_wchar.md** - Caractères Larges (Unicode)

**Bibliothèque:** `<wchar.h>`

**Utilité:** Supporter Unicode et caractères larges

```c
#include <wchar.h>

wchar_t *str = L"Bonjour";  // L = wide string
wprintf(L"Texte: %ls\n", str);
```

**Fonctions clés:**
- `wchar_t` - Type caractère large (Unicode)
- `L"string"` - Chaîne large
- `wprintf()` - printf pour wide
- `wscanf()` - scanf pour wide
- `wcslen()` - strlen pour wide
- `wcscpy()` - strcpy pour wide

**Quand l'utiliser:**
- ❌ **Non nécessaire en Runtrack C**
- ✅ Pour support complet Unicode

**Priorité Runtrack:** ⭐ (Non utilisé)

---

### 4️⃣ **Lib_wctype.md** - Classification Caractères Larges

**Bibliothèque:** `<wctype.h>`

**Utilité:** Vérifier/convertir caractères larges (Unicode)

```c
#include <wctype.h>

if (iswalpha(L'A'))
    wprintf(L"C'est une lettre\n");

wchar_t upper = towupper(L'a');
```

**Fonctions clés:**
- `iswalpha(c)` - Lettre?
- `iswdigit(c)` - Chiffre?
- `iswspace(c)` - Espace?
- `towupper(c)` - Majuscule
- `towlower(c)` - Minuscule

**Quand l'utiliser:**
- ❌ **Non nécessaire en Runtrack C**
- ✅ Pour classification Unicode

**Priorité Runtrack:** ⭐ (Non utilisé)

---

### 5️⃣ **Lib_fenv.md** - Environnement Flottant

**Bibliothèque:** `<fenv.h>`

**Utilité:** Détecter et gérer exceptions flottantes

```c
#include <fenv.h>

feclearexcept(FE_ALL_EXCEPT);
double x = 1.0 / 0.0;  // Infinity

if (fetestexcept(FE_OVERFLOW))
    printf("Débordement détecté!\n");
```

**Exceptions:**
- `FE_OVERFLOW` - Débordement
- `FE_UNDERFLOW` - Sous-débordement
- `FE_INVALID` - Opération invalide
- `FE_DIVBYZERO` - Division par zéro
- `FE_INEXACT` - Résultat imprécis

**Fonctions clés:**
- `feclearexcept()` - Effacer exceptions
- `fetestexcept()` - Tester exceptions
- `fegetround()` - Mode arrondi
- `fesetround()` - Changer mode arrondi

**Quand l'utiliser:**
- ⭐ **Rarement en Runtrack C**
- ✅ Pour calculs flottants très précis

**Priorité Runtrack:** ⭐⭐ (Avancé)

---

### 6️⃣ **Lib_inttypes.md** - Types Entiers Formatés

**Bibliothèque:** `<inttypes.h>`

**Utilité:** Macros pour printf/scanf avec types précis

```c
#include <inttypes.h>
#include <stdio.h>

int64_t x = 1234567890123LL;
printf("int64_t: %" PRId64 "\n", x);

uint32_t y = 4294967295U;
printf("uint32_t: %" PRIu32 "\n", y);
```

**Macros courantes:**
- `PRId8`, `PRId16`, `PRId32`, `PRId64` - Format signé
- `PRIu8`, `PRIu16`, `PRIu32`, `PRIu64` - Format non-signé
- `PRIx32`, `PRIx64` - Format hexa
- `PRIo32`, `PRIo64` - Format octal

**Quand l'utiliser:**
- ✅ **Très utile en Runtrack C!**
- ✅ Quand tu utilises int64_t avec printf
- ✅ Jour 2+ de Runtrack

**Priorité Runtrack:** ⭐⭐⭐ (Très important!)

---

### 7️⃣ **Lib_iso646.md** - Opérateurs Texte Alternatifs

**Bibliothèque:** `<iso646.h>`

**Utilité:** Noms texte pour opérateurs (pour claviers sans symboles)

```c
#include <iso646.h>

if (x and y > 0)      // Au lieu de &&
    z = x or y;       // Au lieu de ||

if (not (x < 0))      // Au lieu de !
    printf("OK\n");
```

**Alternatives:**
- `and` ← `&&`
- `or` ← `||`
- `not` ← `!`
- `bitand` ← `&`
- `bitor` ← `|`
- `xor` ← `^`
- `compl` ← `~`

**Quand l'utiliser:**
- ❌ **À ÉVITER absolument!**
- Code illisible et confus
- Ne jamais utiliser sauf avec clavier spécial

**Priorité Runtrack:** ❌❌❌ (NE PAS UTILISER!)

---

### 8️⃣ **Lib_tgmath.md** - Math Génériques

**Bibliothèque:** `<tgmath.h>`

**Utilité:** Macros mathématiques qui s'adaptent au type

```c
#include <tgmath.h>
#include <stdio.h>

double x = sqrt(9.0);
int y = sqrt(9);  // Conversion automatique

printf("%.0f\n", x);  // 3.0
printf("%d\n", y);    // 3
```

**Fonctions génériques:**
- `sqrt()` - Marche avec int, float, double
- `sin()`, `cos()`, `tan()` - Trig génériques
- `pow()` - Puissance générique
- `exp()`, `log()` - Exp/log génériques
- etc.

**Quand l'utiliser:**
- ⭐ Alternative à math.h
- ⭐ Plus automatique que math.h
- ⭐ Jour 2+ de Runtrack

**Priorité Runtrack:** ⭐⭐ (Alternative ok à math.h)

---

### 9️⃣ **Lib_threads.md** - Multithreading

**Bibliothèque:** `<threads.h>`

**Utilité:** Créer et gérer threads (exécution parallèle)

```c
#include <threads.h>
#include <stdio.h>

int thread_func(void *arg)
{
    printf("Thread exécuté\n");
    return 0;
}

int main(void)
{
    thrd_t tid;
    thrd_create(&tid, thread_func, NULL);
    thrd_join(tid, NULL);
    return 0;
}
```

**Compiler:**
```bash
gcc -Wall -Wextra -Werror -pthread programme.c -o programme
```

**Fonctions clés:**
- `thrd_create(tid, func, arg)` - Créer thread
- `thrd_join(tid, res)` - Attendre thread
- `thrd_exit(code)` - Terminer thread
- `mtx_lock()`, `mtx_unlock()` - Mutex
- `cnd_wait()`, `cnd_signal()` - Condition variables

**Quand l'utiliser:**
- ❌ **Rarement en Runtrack C**
- ✅ Pour programmes parallèles
- ✅ Jour 5+ (très avancé)

**Priorité Runtrack:** ⭐ (Non utilisé en bootcamp)

---

## 📊 Table récapitulatif

| Bibliothèque | Utilité | Runtrack | Priorité | À ÉVITER? |
|--------------|---------|----------|----------|-----------|
| **complex** | Nombres complexes | ❌ | ⭐ | Non |
| **locale** | Localisation | ❌ | ⭐ | Non |
| **wchar** | Caractères larges | ❌ | ⭐ | Non |
| **wctype** | Classification larges | ❌ | ⭐ | Non |
| **fenv** | Exceptions float | ⭐ | ⭐⭐ | Non |
| **inttypes** | Format types précis | ✅ | ⭐⭐⭐ | Non |
| **iso646** | Opérateurs texte | ❌ | ❌ | **OUI!** |
| **tgmath** | Math génériques | ⭐ | ⭐⭐ | Non |
| **threads** | Multithreading | ❌ | ⭐ | Non |

## 🎯 Quelles apprendre en Runtrack?

### ✅ Vraiment utile
- **Lib_inttypes.md** - Pour `printf("%" PRId64 "\n", x);`

### ⭐ Bon à connaître
- **Lib_tgmath.md** - Alternative à math.h
- **Lib_fenv.md** - Si tu fais calculs critiques

### ❌ À IGNORER
- **Lib_iso646.md** - Code illisible, ne jamais utiliser!
- **Lib_complex.md** - Trop spécialisé
- **Lib_locale.md**, **Lib_wchar.md**, **Lib_wctype.md** - Trop internationalisé
- **Lib_threads.md** - Hors scope bootcamp

## 🚀 Utilisation Runtrack C

### Jour 1-2
- Rarement nécessaire

### Jour 3
- **Lib_inttypes.md** si tu utilises `int64_t`

### Jour 4-5 (Minishell)
- **Lib_tgmath.md** comme alternative à math.h
- **Lib_inttypes.md** pour afficher types précis

## ⚠️ Avertissements importants

🛑 **NE JAMAIS UTILISER iso646.h!**
```c
// ❌ HORRIBLE
if (x and y or z)  // Illisible!

// ✅ BON
if (x && y || z)   // Clair!
```

✅ **Utilise inttypes.h** pour printf/scanf:
```c
// ❌ Risqué
printf("%lld\n", big_int64);

// ✅ Correct
#include <inttypes.h>
printf("%" PRId64 "\n", big_int64);
```

## 📚 Voir aussi

- **ÉTAPE 5:** Lib_stdint.md (types entiers: int8_t, uint64_t)
- **ÉTAPE 5:** Lib_limits.md (limites des types)
- **ÉTAPE 3:** Lib_math.md (mathématiques classiques)

---

**C'est la dernière étape!** 🎉 Toutes les bibliothèques C couvertes!
