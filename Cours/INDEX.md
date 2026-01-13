# 📚 COURS COMPLET C - RUNTRACK EDITION

Bienvenue! Ceci est une **documentation complète et structurée pour apprendre le C** et réussir ta **Runtrack C!**

## 🎯 Ce que tu trouveras ici

Un cours de **39 fichiers** organisé en **6 étapes logiques**:
- ✅ Les **11 fondamentaux du C** (variables, boucles, fonctions, etc.)
- ✅ Les **23 bibliothèques essentielles** (stdio, string, math, signaux, etc.)
- ✅ **Exemples complets** prêts à utiliser
- ✅ **Erreurs courantes** à éviter
- ✅ **Bonnes pratiques** professionnelles

## 📂 Structure globale

```
COURS/
│
├── 01_CONCEPTS_FONDAMENTAUX/          (11 fichiers)
│   └── Variables, opérateurs, boucles, fonctions, pointeurs, etc.
│
├── 02_BIBLIOTHEQUES_ESSENTIELLES/     (4 fichiers)
│   └── stdio, string, stdlib, unistd
│
├── 03_BIBLIOTHEQUES_COURANTES/        (5 fichiers)
│   └── ctype, math, time, assert, signal
│
├── 04_BIBLIOTHEQUES_SYSTEME/          (3 fichiers)
│   └── fcntl, sys/types, sys/uio
│
├── 05_BIBLIOTHEQUES_UTILITAIRES/      (7 fichiers)
│   └── errno, stdarg, stdbool, stddef, stdint, limits, float
│
└── 06_BIBLIOTHEQUES_AVANCEES/         (9 fichiers)
    └── complex, locale, wchar, wctype, fenv, inttypes, iso646, tgmath, threads
```

## 🚀 Par où commencer?

### Si tu es un **débutant complet**
1. Commençe par **01_CONCEPTS_FONDAMENTAUX/** → Lis **C_Intro.md**
2. Progresse dans l'ordre: C_Variables → C_Operateurs → etc.
3. Puis **02_BIBLIOTHEQUES_ESSENTIELLES/** → Lib_stdio.md

### Si tu es en **Runtrack - Jour 1**
- 📖 Lis **C_Intro.md**, **C_Variables.md**
- 📖 Lis **Lib_stdio.md**, **Lib_string.md**
- 🔤 Lis **Lib_ctype.md** (pour char_is_digit)
- 💪 Commence les Jobs!

### Si tu es en **Runtrack - Jour 2-3**
- 📖 Lis **C_Boucles.md**, **C_Tableaux.md**, **C_Fonctions.md**
- 📖 Lis **Lib_stdlib.md** (malloc, free)
- 📖 Lis **Lib_fcntl.md** (open, fichiers)
- 💪 Travaille avec fichiers et structures

### Si tu es en **Runtrack - Jour 4-5 (Minishell)**
- 📖 Lis **C_Pointeurs.md**, **C_MemAlloc.md**, **C_Structures.md**
- 📖 Lis **Lib_unistd.md** (fork, execve)
- 📖 Lis **Lib_signal.md** (Ctrl+C, SIGINT)
- 📖 Lis **Lib_fcntl.md** (redirection)
- 💪 Implémente la minishell!

## 📖 Description de chaque ÉTAPE

### ÉTAPE 1: Concepts Fondamentaux (11 fichiers)

**Le cœur du C:** Variables, types, opérateurs, contrôle de flux, boucles, tableaux, fonctions, pointeurs, allocation mémoire, structures, compilation.

Après cette étape, tu comprendras:
- ✅ Comment déclarer et utiliser les variables
- ✅ Tous les opérateurs C
- ✅ Les boucles et conditions
- ✅ Comment écrire des fonctions
- ✅ Comment utiliser les pointeurs
- ✅ Comment allouer et gérer la mémoire
- ✅ Comment créer et utiliser les structures
- ✅ Comment compiler correctement

→ **Va à:** `01_CONCEPTS_FONDAMENTAUX/README.md`

---

### ÉTAPE 2: Bibliothèques Essentielles (4 fichiers)

**Les incontournables:** stdio (printf/scanf), string (strlen/strcpy/strcmp), stdlib (malloc/free), unistd (write/read/fork).

Après cette étape, tu sauras:
- ✅ Afficher et lire avec printf/scanf
- ✅ Manipuler les chaînes
- ✅ Allouer et libérer la mémoire
- ✅ Faire I/O bas niveau
- ✅ Créer des processus avec fork/execve

→ **Va à:** `02_BIBLIOTHEQUES_ESSENTIELLES/README.md`

---

### ÉTAPE 3: Bibliothèques Courantes (5 fichiers)

**Les pratiques:** ctype (classification caractères), math (calculs mathématiques), time (temps), assert (assertions), signal (signaux système).

Après cette étape, tu sauras:
- ✅ Vérifier les types de caractères
- ✅ Faire des calculs mathématiques
- ✅ Travailler avec le temps
- ✅ Déboguer avec des assertions
- ✅ Gérer Ctrl+C et autres signaux

→ **Va à:** `03_BIBLIOTHEQUES_COURANTES/README.md`

---

### ÉTAPE 4: Bibliothèques Système (3 fichiers)

**Bas niveau:** fcntl (manipulation fichiers), sys/types (types système), sys/uio (I/O vectorielle).

Après cette étape, tu sauras:
- ✅ Ouvrir/créer des fichiers avec open()
- ✅ Gérer les permissions
- ✅ Utiliser les types système (pid_t, mode_t)
- ✅ Faire I/O vectorielle efficace

→ **Va à:** `04_BIBLIOTHEQUES_SYSTEME/README.md`

---

### ÉTAPE 5: Bibliothèques Utilitaires (7 fichiers)

**Essentielles mais niche:** errno (gestion erreurs), stdarg (arguments variables), stdbool (booléens), stddef (définitions), stdint (types précis), limits (limites types), float (limites flottants).

Après cette étape, tu sauras:
- ✅ Déboguer les erreurs système proprement
- ✅ Créer des fonctions avec arguments variables
- ✅ Utiliser des types booléens clairs
- ✅ Utiliser des types entiers de taille garantie
- ✅ Connaître les limites des types

→ **Va à:** `05_BIBLIOTHEQUES_UTILITAIRES/README.md`

---

### ÉTAPE 6: Bibliothèques Avancées (9 fichiers)

**Spécialisées:** complex (nombres complexes), locale (localisation), wchar (Unicode), wctype (classification Unicode), fenv (exceptions float), inttypes (formats types), iso646 (opérateurs texte), tgmath (math génériques), threads (multithreading).

⚠️ **Note:** La plupart ne sont **pas utilisées en Runtrack**. Lis juste inttypes si tu utilises int64_t.

Après cette étape, tu comprendras:
- ✅ Quand utiliser chaque bibliothèque avancée
- ✅ Comment ne PAS utiliser iso646.h!
- ✅ Comment formatter correctement int64_t

→ **Va à:** `06_BIBLIOTHEQUES_AVANCEES/README.md`

---

## 🎓 Qu'est-ce que tu vas apprendre?

### Concepts fondamentaux
```c
int x = 5;              // Variables et types
char str[50];           // Tableaux
int *ptr = &x;          // Pointeurs
struct S { int a; };    // Structures
for (int i = 0; i < 10; i++)  // Boucles
int res = func(x);      // Fonctions
```

### Bibliothèques
```c
printf("%d\n", x);      // stdio
strcpy(dest, src);      // string
int *p = malloc(10);    // stdlib
write(1, buf, 5);       // unistd
isdigit('5');           // ctype
sqrt(9);                // math
time(NULL);             // time
signal(SIGINT, func);   // signal
open("file", O_RDONLY); // fcntl
fork();                 // system calls
```

## 🚀 Comment utiliser ce cours?

### 1. **Navigation**
- Commence par l'étape qui t'intéresse
- Lis le README.md de chaque étape (description claire)
- Clique sur les fichiers Lib_*.md ou C_*.md
- Chaque fichier est **indépendant et complet**

### 2. **Apprendre**
- Lis l'explication complète
- Comprends les exemples
- Essaie de copier-coller les codes
- Teste dans ta terminal!

### 3. **Pratiquer**
- Chaque fichier liste les erreurs courantes
- Évite-les!
- Applique les bonnes pratiques
- Fais des petits exercices

### 4. **Intégrer**
- Combine les concepts dans tes projets
- Utilise dans Runtrack C
- Réfère-toi aux fichiers au besoin

## ✅ Checklist Runtrack C

### Jour 1
- [ ] Lis C_Intro.md
- [ ] Lis C_Variables.md, C_Operateurs.md
- [ ] Lis Lib_stdio.md, Lib_string.md
- [ ] Lis Lib_ctype.md
- [ ] Complète Jobs 01-08

### Jour 2-3
- [ ] Lis C_Boucles.md, C_Tableaux.md, C_Fonctions.md
- [ ] Lis Lib_stdlib.md
- [ ] Lis Lib_fcntl.md
- [ ] Lis Lib_errno.md
- [ ] Travaille avec fichiers

### Jour 4-5 (Minishell)
- [ ] Lis C_Pointeurs.md, C_MemAlloc.md
- [ ] Lis C_Structures.md
- [ ] Lis Lib_unistd.md (fork, execve)
- [ ] Lis Lib_signal.md (SIGINT)
- [ ] Lis Lib_fcntl.md (redirection)
- [ ] Implémente minishell avec ces concepts

## 📊 Statistiques

- **39 fichiers de contenu**
- **6 README.md structurés**
- **~150 KB de documentation**
- **100+ exemples complets**
- **Tout en français**
- **Spécifiquement pour Runtrack C**

## 🎯 Progression visuelle

```
JOUR 1          JOUR 2-3         JOUR 4-5
│               │                │
├─ Concepts     ├─ Avancé        ├─ Système
├─ Biblio Easy  ├─ Fichiers      ├─ Signaux
├─ String       ├─ Malloc/Free   ├─ Fork/Exec
├─ Stdio        ├─ Structures    ├─ Minishell
│               │                │
100% C BASICS   INTERMEDIATE     ADVANCED SYSTEM
```

## 💡 Conseils d'or

1. ✅ **Lis dans l'ordre logique** (ne saute pas les étapes)
2. ✅ **Teste chaque exemple** dans ton IDE/terminal
3. ✅ **Comprends les erreurs courantes** (très importantes!)
4. ✅ **Applique les bonnes pratiques** (code professionnel)
5. ✅ **Réfère-toi souvent** au besoin
6. ✅ **Combine les concepts** dans tes projets
7. ✅ **Ne mémorise pas** - comprendre suffit!

## 🚀 Liens rapides

- **ÉTAPE 1:** [Concepts Fondamentaux](01_CONCEPTS_FONDAMENTAUX/README.md)
- **ÉTAPE 2:** [Essentielles](02_BIBLIOTHEQUES_ESSENTIELLES/README.md)
- **ÉTAPE 3:** [Courantes](03_BIBLIOTHEQUES_COURANTES/README.md)
- **ÉTAPE 4:** [Système](04_BIBLIOTHEQUES_SYSTEME/README.md)
- **ÉTAPE 5:** [Utilitaires](05_BIBLIOTHEQUES_UTILITAIRES/README.md)
- **ÉTAPE 6:** [Avancées](06_BIBLIOTHEQUES_AVANCEES/README.md)

## 📞 Questions fréquentes

**Q: Par où je commence?**
R: Par ÉTAPE 1 → C_Intro.md, puis dans l'ordre.

**Q: Je suis en retard en Runtrack, j'accélère?**
R: Lis juste ce qui t'intéresse (utilise les README de chaque étape).

**Q: J'ai besoin d'aide sur un sujet?**
R: Trouve le fichier correspondant dans l'étape appropriée.

**Q: Je dois mémoriser tous les codes?**
R: Non! Comprendre suffit. Utilise ce cours comme référence.

**Q: Pourquoi les fichiers sont séparés?**
R: Chaque bibliothèque = 1 fichier = facile à naviguer et trouver.

## 🎉 C'est prêt!

Tu as maintenant une **ressource complète et professionnelle** pour:
- ✅ Apprendre le C proprement
- ✅ Réussir ta Runtrack C
- ✅ Développer comme un pro
- ✅ Déboguer efficacement
- ✅ Écrire du code de qualité

**Bon apprentissage et bonne chance avec ta Runtrack!** 🚀

---

**Version:** 1.0
**Dernière mise à jour:** Janvier 2025
**Créé pour:** Runtrack C - La Plateforme
**Statut:** ✅ Complet (39 fichiers)
