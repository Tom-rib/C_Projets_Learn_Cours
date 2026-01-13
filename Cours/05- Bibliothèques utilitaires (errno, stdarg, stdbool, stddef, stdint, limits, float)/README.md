# 📚 ÉTAPE 5 - BIBLIOTHÈQUES UTILITAIRES

## 🎯 À quoi sert cette étape?

Cette étape couvre **7 bibliothèques essentielles et pratiques** pour:
- ✅ Gérer les erreurs système correctement
- ✅ Créer des fonctions avec arguments variables
- ✅ Utiliser des types booléens clairs
- ✅ Utiliser des types entiers précis et portables
- ✅ Connaître les limites des types
- ✅ Déboguer les calculs flottants

## 📂 Structure des fichiers

```
05_BIBLIOTHEQUES_UTILITAIRES/
├── README.md                    ← Vous êtes ici
├── Lib_errno.md                 🔴 errno.h - Gestion des erreurs
├── Lib_stdarg.md                📝 stdarg.h - Arguments variables
├── Lib_stdbool.md               ✓ stdbool.h - Type booléen
├── Lib_stddef.md                📍 stddef.h - Définitions standard
├── Lib_stdint.md                🔢 stdint.h - Types entiers précis
├── Lib_limits.md                📊 limits.h - Limites des types
└── Lib_float.md                 📈 float.h - Limites des flottants
```

## 📖 Détail de chaque bibliothèque

### 1️⃣ **Lib_errno.md** - Gestion des Erreurs Système

**Bibliothèque:** `<errno.h>`

**Utilité:** Récupérer et afficher les codes d'erreur système

```c
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>

int fd = open("inexistant.txt", O_RDONLY);
if (fd == -1)
{
    perror("open");  // Affiche: "open: No such file or directory"
    printf("errno = %d\n", errno);
}
```

**Fonctions clés:**
- `perror(msg)` - Afficher message d'erreur
- `strerror(errno)` - Obtenir message en string
- `errno` - Variable globale avec le code d'erreur

**Quand l'utiliser:**
- ✅ Après `open()`, `fork()`, `execve()`, tout appel système
- ✅ Jour 2-3+ de Runtrack (fichiers, processus)

**Priorité Runtrack:** ⭐⭐⭐ (Très important!)

---

### 2️⃣ **Lib_stdarg.md** - Arguments Variables

**Bibliothèque:** `<stdarg.h>`

**Utilité:** Créer des fonctions avec nombre d'arguments variable

```c
#include <stdarg.h>

int somme(int count, ...)
{
    va_list args;
    va_start(args, count);
    
    int total = 0;
    for (int i = 0; i < count; i++)
        total += va_arg(args, int);
    
    va_end(args);
    return total;
}

// Utilisation:
printf("Somme: %d\n", somme(3, 10, 20, 30));  // 60
```

**Fonctions clés:**
- `va_list` - Type pour stocker arguments
- `va_start(list, last_named)` - Initialiser
- `va_arg(list, type)` - Récupérer argument suivant
- `va_end(list)` - Terminer

**Quand l'utiliser:**
- ⭐ Si tu crées des fonctions flexibles (type printf)
- ⭐ Jour 3+ de Runtrack

**Priorité Runtrack:** ⭐ (Optionnel)

---

### 3️⃣ **Lib_stdbool.md** - Type Booléen

**Bibliothèque:** `<stdbool.h>`

**Utilité:** Utiliser un type bool clair avec true/false

```c
#include <stdbool.h>

bool is_active = true;
bool is_empty = false;

if (is_active)
    printf("Actif!\n");
```

**Types/Constantes:**
- `bool` - Type booléen
- `true` - Valeur vraie
- `false` - Valeur fausse

**Quand l'utiliser:**
- ✅ Partout pour plus de clarté
- ✅ À la place de `int` pour conditions

**Priorité Runtrack:** ⭐⭐⭐ (Très utile pour lisibilité!)

---

### 4️⃣ **Lib_stddef.md** - Définitions Standard

**Bibliothèque:** `<stddef.h>`

**Utilité:** Accéder à NULL, size_t, et calculs bas-niveau

```c
#include <stddef.h>

int *ptr = NULL;
size_t taille = sizeof(int);
size_t offset = offsetof(struct Person, age);
```

**Éléments clés:**
- `NULL` - Pointeur nul
- `size_t` - Type pour tailles (unsigned)
- `ptrdiff_t` - Différence entre pointeurs
- `offsetof(type, member)` - Position d'un membre en bytes

**Quand l'utiliser:**
- ✅ Pour comparer pointeurs à NULL
- ⭐ Pour calculs avancés (offset)

**Priorité Runtrack:** ⭐⭐ (Assez important)

---

### 5️⃣ **Lib_stdint.md** - Types Entiers Précis

**Bibliothèque:** `<stdint.h>`

**Utilité:** Utiliser des types entiers de taille garantie

```c
#include <stdint.h>

int8_t byte = 127;          // Signé: -128 à 127
uint8_t octet = 255;        // Non-signé: 0 à 255
int32_t x = 2147483647;     // 32-bit signé
uint64_t big = 9999999999;  // 64-bit non-signé
```

**Types disponibles:**
- `int8_t`, `uint8_t` - 8-bit
- `int16_t`, `uint16_t` - 16-bit
- `int32_t`, `uint32_t` - 32-bit
- `int64_t`, `uint64_t` - 64-bit

**Format printf:**
```c
printf("int32_t: %d\n", x);
printf("uint64_t: %llu\n", big);
// Mieux avec inttypes.h: printf("%" PRId64 "\n", x);
```

**Quand l'utiliser:**
- ✅ Jour 1+ pour structures, fichiers
- ✅ Meilleur que `int`/`long` (plus portables)

**Priorité Runtrack:** ⭐⭐⭐ (Très important!)

---

### 6️⃣ **Lib_limits.md** - Limites des Types

**Bibliothèque:** `<limits.h>`

**Utilité:** Connaître min/max des types, vérifier débordements

```c
#include <limits.h>

printf("INT_MAX: %d\n", INT_MAX);       // 2147483647
printf("INT_MIN: %d\n", INT_MIN);       // -2147483648
printf("UINT_MAX: %u\n", UINT_MAX);     // 4294967295
```

**Constantes courantes:**
- `CHAR_MIN`, `CHAR_MAX` - char
- `SHORT_MIN`, `SHORT_MAX` - short
- `INT_MIN`, `INT_MAX` - int
- `LONG_MIN`, `LONG_MAX` - long
- `UINT_MAX` - unsigned int
- etc.

**Vérifier débordement:**
```c
if (a > INT_MAX - b)  // a + b débordera!
    printf("Débordement!\n");
```

**Quand l'utiliser:**
- ⭐ Pour vérifications critiques
- ⭐ Jour 2+ de Runtrack

**Priorité Runtrack:** ⭐⭐ (Utile pour sécurité)

---

### 7️⃣ **Lib_float.md** - Limites des Flottants

**Bibliothèque:** `<float.h>`

**Utilité:** Connaître précision/limites des floats, comparer avec tolérance

```c
#include <float.h>
#include <math.h>

printf("DBL_MAX: %f\n", DBL_MAX);       // ~1.8e308
printf("DBL_EPSILON: %e\n", DBL_EPSILON); // Plus petit epsilon

// Comparaison sûre
if (fabs(a - b) < DBL_EPSILON)
    printf("Égal!\n");
```

**Constantes courantes:**
- `FLT_MAX`, `FLT_MIN` - float
- `DBL_MAX`, `DBL_MIN` - double
- `FLT_DIG` - Chiffres significatifs float
- `DBL_DIG` - Chiffres significatifs double
- `FLT_EPSILON`, `DBL_EPSILON` - Plus petit écart

**Quand l'utiliser:**
- ⭐ Pour calculs flottants précis
- ⭐ Jour 2+ de Runtrack (calculs mathématiques)

**Priorité Runtrack:** ⭐ (Optionnel, mais bon à connaître)

---

## 🎯 Progression recommandée

1. **D'abord:** Lis **Lib_stdbool.md** (utilise immédiatement)
2. **Ensuite:** Lis **Lib_errno.md** (déboguer erreurs)
3. **Puis:** Lis **Lib_stdint.md** (types sûrs)
4. **Découvre:** Lis **Lib_limits.md** (vérifications)
5. **Concepts:** Lis **Lib_stddef.md** (avancé)
6. **Optionnel:** Lis **Lib_stdarg.md** (si tu crées fonctions variables)
7. **Spécial:** Lis **Lib_float.md** (si calculs critiques)

## 🚀 Application Runtrack C

### Jour 1
```c
#include <stdbool.h>
bool is_valid = true;  // Plus clair que int!
```

### Jour 2-3
```c
#include <errno.h>
int fd = open("file.txt", O_RDONLY);
if (fd == -1)
    perror("open");  // Voir l'erreur exacte!

#include <stdint.h>
uint8_t byte = 255;  // Type précis et portable
```

### Jour 4-5 (Minishell)
```c
#include <limits.h>
if (pid > INT_MAX)  // Vérifier limites critiques
    return ERROR;
```

## ✅ Table récapitulatif

| Bibliothèque | Utilité | Priorité | Jour Runtrack |
|--------------|---------|----------|---------------|
| **errno** | Erreurs système | ⭐⭐⭐ | 2-3+ |
| **stdbool** | Type booléen | ⭐⭐⭐ | 1+ |
| **stdint** | Types entiers précis | ⭐⭐⭐ | 1+ |
| **limits** | Limites des types | ⭐⭐ | 2+ |
| **stddef** | NULL, size_t, offset | ⭐⭐ | 1+ |
| **stdarg** | Arguments variables | ⭐ | 3+ |
| **float** | Limites flottants | ⭐ | 2+ |

## 🎓 Conseils importants

✅ **Utilise stdint.h** plutôt que int/long
✅ **Utilise stdbool.h** pour clarté du code
✅ **Utilise errno** après tout appel système
✅ **Utilise limits.h** pour vérifications critiques
✅ **Ne oublie pas les limites** des types

## 📚 Voir aussi

- **ÉTAPE 4:** Lib_sys_types.md (types système: pid_t, mode_t)
- **ÉTAPE 3:** Lib_math.md (calculs avec float/double)
- **ÉTAPE 6:** Lib_inttypes.md (printf avec types précis)

---

**Prochainement: ÉTAPE 6 - Bibliothèques Avancées** 👉 Pour explorer plus loin!
