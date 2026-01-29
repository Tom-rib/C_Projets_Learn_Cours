#  C_Projets_Learn_Cours

**Mon parcours complet pour maîtriser le C: la Runtrack officielle, mes cours, mes exercices et mes projets.**

---

## 📋 À propos

C'est **mon espace d'apprentissage complet en C** qui regroupe:
- ✅ La **Runtrack C officielle** (40 jobs structurés sur 5 jours)
- ✅ Mes **cours détaillés** (39 fichiers de documentation)
- ✅ Mes **exercices progressifs** (9 niveaux pour apprendre petit à petit)
- ✅ Mes **projets perso** (en évolution constante)

**Mon objectif:** Maîtriser le C de zéro jusqu'aux concepts avancés, en passant par des projets concrets.

---

## 📂 Structure du Repository

```
C_Projets_Learn_Cours/
│
├── 📚 Cours/                    # Documentation complète (39 fichiers)
│   ├── 01_CONCEPTS_FONDAMENTAUX/
│   ├── 02_BIBLIOTHEQUES_ESSENTIELLES/
│   ├── 03_BIBLIOTHEQUES_COURANTES/
│   ├── 04_BIBLIOTHEQUES_SYSTEME/
│   ├── 05_BIBLIOTHEQUES_UTILITAIRES/
│   ├── 06_BIBLIOTHEQUES_AVANCEES/
│   └── INDEX.md
│
├── 🚀 Runtrack/                 # Runtrack officielle (40 jobs)
│   ├── Jour01/                  (Chaînes: putchar, strlen, strcpy, split...)
│   ├── Jour02/                  (Pointeurs & Tableaux)
│   ├── Jour03/                  (Conversion & Maths)
│   ├── Jour04/                  (Structures & Listes chaînées)
│   ├── Jour05/                  (Projet final: Music Sorter)
│   └── README.md
│
├── 📝 Exercices/                # Exercices par Niveau (progressifs)
│   ├── Niveau01/
│   ├── Niveau02/
│   ├── Niveau03/
│   ├── ...
│   ├── Niveau09/
│   └── README.md
│
├── 🔧 Projets/                  # Mes projets personnels
│   ├── minishell/               (Shell interactif)
│   ├── game-of-life/            (Conway's Game of Life)
│   ├── 2048/                    (Jeu 2048)
│   └── (à enrichir...)
│
└── README.md                    (Vous êtes ici!)
```

---

## 🎓 Contenu détaillé

### 📚 Cours/ (39 fichiers de documentation)

**Ma base de connaissances** structurée en 6 étapes:

| Étape | Contenu | Exemples |
|-------|---------|----------|
| **01** | Concepts fondamentaux | Variables, types, pointeurs, structures, mémoire |
| **02** | Bibliothèques essentielles | stdio.h, stdlib.h, string.h, unistd.h |
| **03** | Bibliothèques courantes | math.h, time.h, ctype.h, errno.h |
| **04** | Bibliothèques système | fcntl.h, sys/types.h, signaux, fichiers |
| **05** | Bibliothèques utilitaires | Regex, XML, JSON, etc. |
| **06** | Concepts avancés | Optimisation, patterns, best practices |

**Comment j'utilise ces cours:**
- Je les lis dans l'ordre logique (sans sauter les étapes)
- Je teste chaque exemple dans mon terminal
- Je les utilise comme référence pendant mes projets

---

### 🚀 Runtrack/ (40 jobs + 1 projet final)

Ma **progression officielle de La Plateforme**, divisée en **5 jours** progressifs que je dois compléter:

#### **Jour 01 - Fondamentaux Chaînes (8 jobs)** 🔴
```
Job01: my_putchar, my_putstr
Job02: my_strlen
Job03: char_is_digit, str_is_digit
Job04: my_strcpy
Job05: my_strdup (introduction à malloc)
Job06: my_strcmp
Job07: trim
Job08: split (algo important!)
```

#### **Jour 02 - Pointeurs & Tableaux (8 jobs)** 🟠
```
Job01: divide
Job02: swap
Job03: array_clone
Job04: sort
Job05: func_to_array (pointeurs de fonction)
Job06: delete_str_array
Job07: Programme: lowercase
Job08: Programme: trim & sort
```

#### **Jour 03 - Conversion & Maths (8 jobs)** 🟡
```
Job01: my_atoi
Job02: my_itoa
Job03: power
Job04: my_sqrt
Job05: Prog: factorial
Job06: Prog: fibonacci
Job07: itoa_hex
Job08: sudoku_solver
```

#### **Jour 04 - Structures & Listes (8 jobs)** 🟢
```
Job01: manhattan
Job02: print_album (structures)
Job03: realloc_album
Job04: create_album
Job05: push_back_album
Job06: push_front_album
Job07: album_del_one
Job08: sort_album_by (tri avancé)
```

#### **Jour 05 - Projet Final: Music Sorter** 🔵
```
Lecteur de fichiers CSV
Tri par différentes méthodes
Gestion complète d'erreurs
Makefile complet
```
---

### 🔧 Projets/ (En progression)

Mes **projets personnels** qu'on va créer ensemble au fur et à mesure.

---

## 🚀 Comment démarrer

```bash
# 1. Cloner mon repository
git clone https://github.com/ton-username/C_Projets_Learn_Cours.git
cd C_Projets_Learn_Cours

# 2. Lire mon premier cours
cat Cours/01_CONCEPTS_FONDAMENTAUX/C_Intro.md

# 3. Commencer mes exercices
cd Exercices/Niveau01/
cat sujet.md
gcc -Wall -Wextra -Werror solution.c test.c -o test
./test

# 4. Commencer mon premier job
cd ../../Runtrack/Jour01/Job01
cat sujet.md
gcc -Wall -Wextra -Werror solution.c test.c -o test
./test
```

---

## 🎯 Comment je progresse sur ce Repository

### **1. J'apprends les bases:**
```bash
# Je commence par les Cours/
cd Cours
cat INDEX.md                    # Vue d'ensemble
cat 01_CONCEPTS_FONDAMENTAUX/C_Variables.md   # Premiers pas
```

### **2. Je pratique avec les exercices:**
```bash
cd ../Exercices
cd Niveau01
# Résoudre les exercices du niveau (progressif et guidé)
```

### **3. Je fais la Runtrack:**
```bash
cd ../../Runtrack
cd Jour01/Job01
# Résoudre les jobs progressivement
```

### **4. Je crée mes projets:**
```bash
cd ../../../minishell
make
./minishell
```

---

## 💡 Ma stratégie pour réussir

✅ **Ce que je fais:**
- Je lis les cours AVANT de commencer les jobs correspondants
- Je teste chaque exemple en live dans mon terminal
- Je comprends les concepts (je ne mémorise pas)
- J'ajoute mes propres projets au fur et à mesure
- Je fais des commits réguliers pour tracker ma progression

❌ **Ce que j'évite:**
- Copier-coller sans comprendre
- Sauter les étapes des cours
- Laisser les erreurs non résolues
- Travailler sans Makefile

---

## 🛠️ Technologie

- **Langage:** C (ANSI C99)
- **Compilateur:** gcc
- **Environnement:** Linux/WSL (Debian recommandé)
- **Build:** Makefile
- **Flags recommandés:** `-Wall -Wextra -Werror`


---

## 📜 License

Apprentissage personnel - Runtrack C de La Plateforme

---

**C'est ma vitrine, mon apprentissage, mon parcours! 🎓** 🚀