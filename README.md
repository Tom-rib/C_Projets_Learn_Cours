# 📚 RUNTRACK C - COURS COMPLET

**Documentation complète et structurée pour réussir ta Runtrack C!**

## 🎯 Ce que tu trouveras ici

Un **cours professionnel de 49 fichiers** couvrant:
- ✅ Les **11 fondamentaux du C** (variables, boucles, pointeurs, etc.)
- ✅ Les **23 bibliothèques essentielles** (stdio, string, malloc, fork, signaux, etc.)
- ✅ **100+ exemples complets** prêts à utiliser
- ✅ **Erreurs courantes** à éviter
- ✅ **Bonnes pratiques** professionnelles
- ✅ **Spécifiquement adapté pour Runtrack C**

## 📂 Structure du repository

```
runtrack_c/
│
├── README.md                    ← Vous êtes ici
│
└── COURS/                       ← Dossier principal
    │
    ├── README.md                (guide d'accueil du cours)
    │
    ├── 01_CONCEPTS_FONDAMENTAUX/    (11 fichiers)
    │   └── Variables, opérateurs, boucles, fonctions, pointeurs, etc.
    │
    ├── 02_BIBLIOTHEQUES_ESSENTIELLES/   (4 fichiers)
    │   └── stdio, string, stdlib, unistd
    │
    ├── 03_BIBLIOTHEQUES_COURANTES/      (5 fichiers)
    │   └── ctype, math, time, assert, signal
    │
    ├── 04_BIBLIOTHEQUES_SYSTEME/        (3 fichiers)
    │   └── fcntl, sys/types, sys/uio
    │
    ├── 05_BIBLIOTHEQUES_UTILITAIRES/    (7 fichiers)
    │   └── errno, stdarg, stdbool, stddef, stdint, limits, float
    │
    └── 06_BIBLIOTHEQUES_AVANCEES/       (9 fichiers)
        └── complex, locale, wchar, wctype, fenv, inttypes, iso646, tgmath, threads
```

## 🚀 Démarrage rapide

### 1️⃣ **Télécharge/Clone le repository**
```bash
git clone https://github.com/ton-nom/runtrack_c.git
cd runtrack_c
```

### 2️⃣ **Accède au dossier COURS**
```bash
cd COURS
```

### 3️⃣ **Lis le README principal**
```bash
# Ouvre COURS/README.md dans ton éditeur
# ou dans ton navigateur si c'est un repo GitHub
```

### 4️⃣ **Navigue selon ton besoin**

**Si tu es débutant:**
→ Commence par `01_CONCEPTS_FONDAMENTAUX/C_Intro.md`

**Si tu es en Runtrack Jour 1:**
→ Lis `COURS/README.md`, section "Jour 1"

**Si tu es en Runtrack Jour 4-5 (Minishell):**
→ Lis `COURS/README.md`, section "Jour 4-5"

## 📖 Structure du cours COURS/

Le dossier `COURS/` contient **6 étapes logiques**:

### ÉTAPE 1: Concepts Fondamentaux (11 fichiers)
Apprends les **bases du C**: variables, types, opérateurs, contrôle, boucles, tableaux, fonctions, pointeurs, mémoire, structures, compilation.

**Fichiers:**
- C_Intro.md - Introduction
- C_Variables.md - Variables et types
- C_Operateurs.md - Tous les opérateurs
- C_Controle.md - if/else/switch
- C_Boucles.md - for/while
- C_Tableaux.md - Tableaux
- C_Fonctions.md - Fonctions
- C_Pointeurs.md - Pointeurs (crucial!)
- C_MemAlloc.md - malloc/free
- C_Structures.md - struct/typedef
- C_Compilation.md - gcc/compilation

→ [Voir ÉTAPE 1](COURS/01_CONCEPTS_FONDAMENTAUX/README.md)

---

### ÉTAPE 2: Bibliothèques Essentielles (4 fichiers)
Les **bibliothèques incontournables**: stdio, string, stdlib, unistd.

**Fichiers:**
- Lib_stdio.md - printf, scanf, fichiers
- Lib_string.md - strlen, strcpy, strcmp, strcat
- Lib_stdlib.md - malloc, free, atoi, atof, rand
- Lib_unistd.md - write, read, open, close, fork, execve

→ [Voir ÉTAPE 2](COURS/02_BIBLIOTHEQUES_ESSENTIELLES/README.md)

---

### ÉTAPE 3: Bibliothèques Courantes (5 fichiers)
Les **bibliothèques courantes**: ctype, math, time, assert, signal.

**Fichiers:**
- Lib_ctype.md - isdigit, isalpha, toupper, tolower
- Lib_math.md - sqrt, sin, cos, pow, log
- Lib_time.md - time, clock, localtime, strftime
- Lib_assert.md - assert, assertions
- Lib_signal.md - signal, SIGINT, handlers

→ [Voir ÉTAPE 3](COURS/03_BIBLIOTHEQUES_COURANTES/README.md)

---

### ÉTAPE 4: Bibliothèques Système (3 fichiers)
La **programmation bas niveau**: fcntl, sys/types, sys/uio.

**Fichiers:**
- Lib_fcntl.md - open, flags, permissions
- Lib_sys_types.md - pid_t, mode_t, types système
- Lib_sys_uio.md - readv, writev, I/O vectorielle

→ [Voir ÉTAPE 4](COURS/04_BIBLIOTHEQUES_SYSTEME/README.md)

---

### ÉTAPE 5: Bibliothèques Utilitaires (7 fichiers)
Les **utilitaires essentiels**: errno, stdarg, stdbool, stddef, stdint, limits, float.

**Fichiers:**
- Lib_errno.md - Gestion des erreurs système
- Lib_stdarg.md - Arguments variables
- Lib_stdbool.md - Type booléen
- Lib_stddef.md - NULL, size_t, offsetof
- Lib_stdint.md - Types entiers précis
- Lib_limits.md - Limites des types
- Lib_float.md - Limites flottants

→ [Voir ÉTAPE 5](COURS/05_BIBLIOTHEQUES_UTILITAIRES/README.md)

---

### ÉTAPE 6: Bibliothèques Avancées (9 fichiers)
Les **spécialisées**: complex, locale, wchar, wctype, fenv, inttypes, iso646, tgmath, threads.

⚠️ **Note:** La plupart ne sont pas utilisées en Runtrack. Lis juste inttypes.md si nécessaire.

**Fichiers:**
- Lib_complex.md - Nombres complexes
- Lib_locale.md - Localisation
- Lib_wchar.md - Caractères larges
- Lib_wctype.md - Classification larges
- Lib_fenv.md - Exceptions flottantes
- Lib_inttypes.md - Types formatés (IMPORTANT!)
- Lib_iso646.md - Opérateurs texte (À ÉVITER!)
- Lib_tgmath.md - Math génériques
- Lib_threads.md - Multithreading

→ [Voir ÉTAPE 6](COURS/06_BIBLIOTHEQUES_AVANCEES/README.md)

---

## 🎓 Par où commencer?

### Si tu es **complètement débutant**
1. Clique: [COURS/01_CONCEPTS_FONDAMENTAUX/C_Intro.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Intro.md)
2. Progresse dans l'ordre
3. Lis ÉTAPE 2 ensuite

### Si tu es en **Runtrack - Jour 1**
1. Lis: [COURS/README.md - Section "Jour 1"](COURS/README.md)
2. Commence par:
   - [C_Intro.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Intro.md)
   - [C_Variables.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Variables.md)
   - [Lib_stdio.md](COURS/02_BIBLIOTHEQUES_ESSENTIELLES/Lib_stdio.md)
   - [Lib_string.md](COURS/02_BIBLIOTHEQUES_ESSENTIELLES/Lib_string.md)
   - [Lib_ctype.md](COURS/03_BIBLIOTHEQUES_COURANTES/Lib_ctype.md)

### Si tu es en **Runtrack - Jour 2-3**
1. Lis: [COURS/README.md - Section "Jour 2-3"](COURS/README.md)
2. Focus sur:
   - [C_Boucles.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Boucles.md)
   - [C_Tableaux.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Tableaux.md)
   - [C_Fonctions.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Fonctions.md)
   - [Lib_stdlib.md](COURS/02_BIBLIOTHEQUES_ESSENTIELLES/Lib_stdlib.md)
   - [Lib_fcntl.md](COURS/04_BIBLIOTHEQUES_SYSTEME/Lib_fcntl.md)

### Si tu es en **Runtrack - Jour 4-5 (Minishell)**
1. Lis: [COURS/README.md - Section "Jour 4-5"](COURS/README.md)
2. Priorité absolue:
   - [C_Pointeurs.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Pointeurs.md)
   - [C_MemAlloc.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_MemAlloc.md)
   - [C_Structures.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Structures.md)
   - [Lib_unistd.md](COURS/02_BIBLIOTHEQUES_ESSENTIELLES/Lib_unistd.md)
   - [Lib_signal.md](COURS/03_BIBLIOTHEQUES_COURANTES/Lib_signal.md)
   - [Lib_fcntl.md](COURS/04_BIBLIOTHEQUES_SYSTEME/Lib_fcntl.md)

## 📊 Contenu global

### Statistiques
- **39 fichiers de contenu** (C et bibliothèques)
- **7 fichiers README** (guide par étape)
- **49 fichiers .md au total**
- **~150 KB de documentation**
- **100+ exemples complets**
- **Format Markdown** (lisible partout)

### Couverture
✅ Variables et types
✅ Opérateurs
✅ Contrôle de flux
✅ Boucles
✅ Tableaux
✅ Fonctions
✅ Pointeurs
✅ Allocation mémoire
✅ Structures
✅ Compilation

✅ I/O (stdio, unistd)
✅ Chaînes (string, ctype)
✅ Utilitaires (stdlib)
✅ Mathématiques (math)
✅ Temps (time)
✅ Assertions (assert)
✅ Signaux (signal)
✅ Fichiers (fcntl)
✅ Types système
✅ I/O vectorielle

✅ + 16 autres bibliothèques (ÉTAPES 5-6)

## 💡 Comment utiliser ce cours?

### 1. **Lecture structurée**
- Lis dans l'ordre logique
- Ne saute pas les étapes
- Chaque fichier est complet et indépendant

### 2. **Exemples pratiques**
- Chaque fichier contient des exemples complets
- Copie-colle dans ton IDE et teste!
- Comprends avant de mémoriser

### 3. **Erreurs courantes**
- Chaque fichier liste les erreurs à ÉVITER
- Lis la section "Erreurs courantes" en premier
- Applique les "Bonnes pratiques"

### 4. **Référence rapide**
- Chaque fichier est court et focalisé
- Une bibliothèque = 1 fichier = facile à trouver
- Utilise Ctrl+F pour chercher rapidement

### 5. **Application Runtrack**
- Chaque fichier indique: "Quand l'utiliser"
- "Application Runtrack C"
- "Jour X de Runtrack" (si applicable)

## ✅ Checklist Runtrack C

### Jour 1 - Jobs 01-08
- [ ] Lis [C_Intro.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Intro.md)
- [ ] Lis [C_Variables.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Variables.md)
- [ ] Lis [C_Operateurs.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Operateurs.md)
- [ ] Lis [Lib_stdio.md](COURS/02_BIBLIOTHEQUES_ESSENTIELLES/Lib_stdio.md)
- [ ] Lis [Lib_string.md](COURS/02_BIBLIOTHEQUES_ESSENTIELLES/Lib_string.md)
- [ ] Lis [Lib_ctype.md](COURS/03_BIBLIOTHEQUES_COURANTES/Lib_ctype.md)
- [ ] Complète Jobs 01-08

### Jour 2-3
- [ ] Lis [C_Boucles.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Boucles.md)
- [ ] Lis [C_Tableaux.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Tableaux.md)
- [ ] Lis [C_Fonctions.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Fonctions.md)
- [ ] Lis [Lib_stdlib.md](COURS/02_BIBLIOTHEQUES_ESSENTIELLES/Lib_stdlib.md)
- [ ] Lis [Lib_fcntl.md](COURS/04_BIBLIOTHEQUES_SYSTEME/Lib_fcntl.md)
- [ ] Lis [Lib_errno.md](COURS/05_BIBLIOTHEQUES_UTILITAIRES/Lib_errno.md)
- [ ] Travaille avec fichiers et structures

### Jour 4-5 (Minishell)
- [ ] Lis [C_Pointeurs.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Pointeurs.md)
- [ ] Lis [C_MemAlloc.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_MemAlloc.md)
- [ ] Lis [C_Structures.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Structures.md)
- [ ] Lis [Lib_unistd.md](COURS/02_BIBLIOTHEQUES_ESSENTIELLES/Lib_unistd.md)
- [ ] Lis [Lib_signal.md](COURS/03_BIBLIOTHEQUES_COURANTES/Lib_signal.md)
- [ ] Lis [Lib_fcntl.md](COURS/04_BIBLIOTHEQUES_SYSTEME/Lib_fcntl.md)
- [ ] Implémente minishell avec tous ces concepts!

## 🔗 Liens rapides

**README du cours:**
- [COURS/README.md](COURS/README.md) - Guide d'accueil principal

**ÉTAPES:**
- [ÉTAPE 1: Concepts](COURS/01_CONCEPTS_FONDAMENTAUX/README.md)
- [ÉTAPE 2: Essentielles](COURS/02_BIBLIOTHEQUES_ESSENTIELLES/README.md)
- [ÉTAPE 3: Courantes](COURS/03_BIBLIOTHEQUES_COURANTES/README.md)
- [ÉTAPE 4: Système](COURS/04_BIBLIOTHEQUES_SYSTEME/README.md)
- [ÉTAPE 5: Utilitaires](COURS/05_BIBLIOTHEQUES_UTILITAIRES/README.md)
- [ÉTAPE 6: Avancées](COURS/06_BIBLIOTHEQUES_AVANCEES/README.md)

## 💬 Questions fréquentes

**Q: Par où je commence?**
R: Lis [COURS/README.md](COURS/README.md) d'abord, puis suis le guide "Par où commencer".

**Q: Je suis en retard, j'accélère?**
R: Va directement à [COURS/README.md](COURS/README.md) et saute aux sections qui t'intéressent.

**Q: Je ne comprends pas un concept?**
R: Trouve le fichier correspondant dans COURS/, chaque fichier est complet avec exemples.

**Q: Je dois mémoriser tous les codes?**
R: Non! Comprendre suffit. Utilise ce cours comme référence quand tu oublies.

**Q: Pourquoi les fichiers sont séparés?**
R: Chaque bibliothèque = 1 fichier = facile à naviguer, copier, et trouver.

**Q: C'est gratuit?**
R: OUI! Entièrement gratuit et open source.

## 🎓 Conseils d'or

1. ✅ **Lis dans l'ordre** (respecte la progression logique)
2. ✅ **Teste chaque exemple** dans ton terminal/IDE
3. ✅ **Comprends les erreurs courantes** (très importantes!)
4. ✅ **Applique les bonnes pratiques** (code professionnel)
5. ✅ **Réfère-toi souvent** (c'est une ressource, pas à mémoriser)
6. ✅ **Combine les concepts** dans tes projets
7. ✅ **Ne saute pas** les étapes 1-2 (vraiment importants!)

## 🚀 C'est prêt!

Tu as maintenant une **ressource complète et professionnelle** pour:
- ✅ Apprendre le C proprement
- ✅ Réussir ta Runtrack C
- ✅ Déboguer efficacement
- ✅ Écrire du code de qualité
- ✅ Développer comme un pro

**Commence dès maintenant:** [COURS/README.md](COURS/README.md)

---

## 📞 Support

- Questions sur un concept? → Trouve le fichier correspondant
- Erreur de compilation? → Cherche dans la section "Erreurs courantes"
- Besoin d'aide Runtrack? → Consulte [COURS/README.md](COURS/README.md)

## 📝 Informations

- **Version:** 1.0
- **Création:** Janvier 2025
- **Format:** Markdown (lisible partout)
- **Statut:** ✅ Complet et testé
- **Pour:** Runtrack C - La Plateforme

---

**Bonne chance avec ta Runtrack C!** 🎓

Tu as maintenant l'une des meilleures ressources pour apprendre le C! 🚀
