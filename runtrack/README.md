# 🚀 RUNTRACK C - REPOSITORY COMPLET (Jour01-05)

**Documentation complète + Tous les jobs Runtrack C Jour01-05 avec les vrais sujets**

## 📂 Structure du repository

```
runtrack_c/
│ 
├── README.md                    ← Vous êtes ici
│
├── Jour01/                      🔴 JOUR 1 - FONDAMENTAUX CHAÎNES
│   ├── Job01/ (my_putchar, my_putstr)
│   ├── Job02/ (my_strlen)
│   ├── Job03/ (char_is_digit, str_is_digit)
│   ├── Job04/ (my_strcpy)
│   ├── Job05/ (my_strdup)
│   ├── Job06/ (my_strcmp)
│   ├── Job07/ (trim)
│   └── Job08/ (split)
│
├── Jour02/                      🟠 JOUR 2 - POINTEURS & TABLEAUX
│   ├── Job01/ (divide)
│   ├── Job02/ (swap)
│   ├── Job03/ (array_clone)
│   ├── Job04/ (sort)
│   ├── Job05/ (func_to_array)
│   ├── Job06/ (delete_str_array)
│   ├── Job07/ (lowercase program)
│   └── Job08/ (trim & sort program)
│
├── Jour03/                      🟡 JOUR 3 - CONVERSION & MATHS
│   ├── Job01/ (my_atoi)
│   ├── Job02/ (my_itoa)
│   ├── Job03/ (power)
│   ├── Job04/ (my_sqrt)
│   ├── Job05/ (factorial program)
│   ├── Job06/ (fibonacci program)
│   ├── Job07/ (itoa_hex)
│   └── Job08/ (sudoku_solver)
│
├── Jour04/                      🟢 JOUR 4 - STRUCTURES & LISTES
│   ├── Job01/ (manhattan)
│   ├── Job02/ (print_album)
│   ├── Job03/ (realloc_album)
│   ├── Job04/ (create_album)
│   ├── Job05/ (push_back_album)
│   ├── Job06/ (push_front_album)
│   ├── Job07/ (album_del_one)
│   └── Job08/ (sort_album_by)
│
├── Jour05/                      🔵 JOUR 5 - PROJET FINAL (MUSIC SORTER)
│   └── music/
│       ├── Makefile
│       ├── main.c
│       └── autres fichiers...
│
└── COURS/                       📚 DOCUMENTATION C COMPLÈTE (39 fichiers)
    └── 6 étapes de documentation...
```

---

## 🔴 **JOUR 1 - FONDAMENTAUX CHAÎNES (8 Jobs)**

### Sujet général: 
Implémenter des **fonctions de manipulation de chaînes** sans libc (sauf `write()`).

---

### **Job 01: my_putchar + my_putstr**

**À faire:**
- `void my_putchar(char c)` - Affiche 1 caractère sur stdout avec write()
- `void my_putstr(char *str)` - Affiche une chaîne en utilisant my_putchar()

**Fonctions autorisées:** `write` seulement

**À comprendre:**
- `write(1, &c, 1)` pour afficher sur stdout
- Appeler une fonction depuis une autre
- Parcourir une chaîne jusqu'au '\0'

---

### **Job 02: my_strlen**

**À faire:**
- `int my_strlen(char *str)` - Retourne la longueur d'une chaîne (sans '\0')

**Fonctions autorisées:** aucune

**À comprendre:**
- Compter jusqu'au '\0' terminal
- Retourner un entier

---

### **Job 03: char_is_digit + str_is_digit**

**À faire:**
- `int char_is_digit(char c)` - Retourne 1 si '0'-'9', sinon 0
- `int str_is_digit(char *str)` - Retourne 1 si chaîne ne contient QUE des chiffres, 0 sinon

**Fonctions autorisées:** aucune

---

### **Job 04: my_strcpy**

**À faire:**
- `char *my_strcpy(char *dest, char *src)` - Copie src dans dest, retourne dest

**IMPORTANT:** Inclure le '\0' terminal!

**Fonctions autorisées:** aucune

---

### **Job 05: my_strdup**

**À faire:**
- `char *my_strdup(char *src)` - Alloue mémoire, copie src dedans, retourne le pointeur

**Fonctions autorisées:** aucune

**⭐ PREMIER MALLOC!**
- Allouer: `malloc(my_strlen(src) + 1)`
- Copier avec my_strcpy()

---

### **Job 06: my_strcmp**

**À faire:**
- `int my_strcmp(char *s1, char *s2)` - Compare 2 chaînes
  - Retourne 0 si égales
  - Retourne négatif si s1 < s2 (ASCII)
  - Retourne positif si s1 > s2 (ASCII)

**Fonctions autorisées:** aucune

---

### **Job 07: trim**

**À faire:**
- `char *trim(char *src)` - Alloue nouvelle chaîne sans espaces/tabs/newlines début/fin

**Fonctions autorisées:** `malloc` seulement

**Exemple:** `"  hello world  "` → `"hello world"`

---

### **Job 08: split**

**À faire:**
- `char **split(char *src)` - Divise chaîne en mots, retourne tableau de chaînes terminé par NULL

**Fonctions autorisées:** `malloc` seulement

**Exemple:** `"hello world fun"` → `["hello", "world", "fun", NULL]`

**⭐ LE PLUS DIFFICILE DE JOUR 1!**

---

## 🟠 **JOUR 2 - POINTEURS & TABLEAUX (8 Jobs)**

### Sujet général:
Manipuler des **pointeurs**, des **tableaux**, et des **pointeurs de fonction**.

---

### **Job 01: divide**

**À faire:**
- `void divide(int *val)` - Divise la valeur pointée par 2

**Fonctions autorisées:** aucune

---

### **Job 02: swap**

**À faire:**
- `void swap(int *a, int *b)` - Échange les 2 valeurs pointées

**Fonctions autorisées:** aucune

---

### **Job 03: array_clone**

**À faire:**
- `char **array_clone(char **strs, int n)` - Copie les n premières chaînes du tableau

**Fonctions autorisées:** `malloc` seulement

**Retour:** Tableau de chaînes terminé par NULL

---

### **Job 04: sort**

**À faire:**
- `char **sort(char **strs)` - Trie les chaînes en ordre ASCII croissant (bubble sort OK)

**Fonctions autorisées:** aucune

---

### **Job 05: func_to_array**

**À faire:**
- `void func_to_array(char **strs, void (*fun)(char *))` - Applique fonction à chaque chaîne

**Fonctions autorisées:** aucune

**⭐ Pointeur de fonction!**

---

### **Job 06: delete_str_array**

**À faire:**
- `void delete_str_array(char ***strs)` - Libère le tableau ET les chaînes, met pointeur à NULL

**Fonctions autorisées:** `free` seulement

---

### **Job 07: Program (lowercase)**

**À faire:**
Programme qui prend arguments et les affiche en minuscules

```bash
./job7 "HELLO" "world" "123"
# Affiche:
# hello
# world
# 123
```

**Fonctions autorisées:** `malloc`, `free`, `write`

---

### **Job 08: Program (trim & sort)**

**À faire:**
Programme qui prend arguments, les trim, les trie, affiche en UNE LIGNE séparés par espaces

```bash
./job8 "world" "HELLO"
# Affiche: HELLO world
```

**Fonctions autorisées:** `malloc`, `free`, `write`

---

## 🟡 **JOUR 3 - CONVERSION & MATHS (8 Jobs)**

### Sujet général:
Conversions **string ↔ int**, opérations **mathématiques**.

---

### **Job 01: my_atoi**

**À faire:**
- `int my_atoi(char *str)` - Convertit chaîne en entier

**Fonctions autorisées:** aucune

**Exemple:** `"12345"` → 12345

---

### **Job 02: my_itoa**

**À faire:**
- `char *my_itoa(int n)` - Convertit entier en chaîne

**Fonctions autorisées:** `malloc` seulement

**Exemple:** 12345 → `"12345"`

---

### **Job 03: power**

**À faire:**
- `int power(int n, int power)` - Élève n à la puissance power

**Fonctions autorisées:** aucune

---

### **Job 04: my_sqrt**

**À faire:**
- `int my_sqrt(int n)` - Retourne racine carrée de n, ou 0 si pas entier

**Fonctions autorisées:** aucune

---

### **Job 05: Program (factorial)**

**À faire:**
Programme qui prend un entier et affiche sa factorielle

```bash
./job5 5
# Affiche: 120
```

Si pas d'arguments: ne rien faire

**Fonctions autorisées:** `write` seulement

---

### **Job 06: Program (fibonacci)**

**À faire:**
Programme qui prend un entier et affiche le nième nombre de Fibonacci

```bash
./job6 6
# Affiche: 8
```

Si pas d'arguments: ne rien faire

**Fonctions autorisées:** `write` seulement

---

### **Job 07: itoa_hex**

**À faire:**
- `char *itoa_hex(int n)` - Convertit entier en hexadécimal (MAJUSCULES)

**Fonctions autorisées:** `malloc` seulement

**Exemple:** 255 → `"FF"`

---

### **Job 08: sudoku_solver**

**À faire:**
- `int sudoku_solver(int grid[9][9])` - Résout une grille de sudoku

**Fonctions autorisées:** aucune

**Retour:** 1 si solution trouvée, 0 sinon

---

## 🟢 **JOUR 4 - STRUCTURES & LISTES (8 Jobs)**

### Structure utilisée:
```c
typedef struct album_list
{
    char *artist;
    char *title;
    int year;
    struct album_list *next;
} t_album_list;
```

---

### **Job 01: manhattan**

**À faire:**
- `int manhattan(point a, point b)` - Distance Manhattan: |a.x - b.x| + |a.y - b.y|

**Fonctions autorisées:** aucune

Fichier: `manhattan.h` et `manhattan.c` (avec struct point et macro ABS)

---

### **Job 02: print_album**

**À faire:**
- `void print_album(t_album_list *album)` - Affiche: `"Title" by "Artist" released in Year.`

**Exemple:** `"Master of Puppets" by "Metallica" released in 1986.`

---

### **Job 03: realloc_album**

**À faire:**
- `t_album_list *realloc_album(t_album_list *albums, int size, int newsize)` - Redimensionne tableau

**Fonctions autorisées:** `malloc`, `free`

---

### **Job 04: create_album**

**À faire:**
- `t_album_list *create_album(char *artist, char *title, int year)` - Crée et alloue un album

**Fonctions autorisées:** `malloc` seulement

**À faire:** Allouer la struct AND les chaînes (artist, title)

---

### **Job 05: push_back_album**

**À faire:**
- `void push_back_album(t_album_list *list, t_album_list *album)` - Ajoute à la FIN

**Fonctions autorisées:** aucune

---

### **Job 06: push_front_album**

**À faire:**
- `void push_front_album(t_album_list **list, t_album_list *album)` - Ajoute au DÉBUT

**Fonctions autorisées:** aucune

**Note:** Pointeur sur pointeur!

---

### **Job 07: album_del_one**

**À faire:**
- `void album_del_one(t_album_list **list, t_album_list *elem)` - Supprime UN album

**Fonctions autorisées:** `free` seulement

---

### **Job 08: sort_album_by**

**À faire:**
- `void sort_album_by(t_album_list *list, int (*fun)(t_album_list *, t_album_list *))` - Trie avec fonction

**Fonctions autorisées:** aucune

**À faire:** Utiliser pointeur de fonction pour comparer

---

## 🔵 **JOUR 5 - MUSIC SORTER (Projet final)**

### Sujet:
Créer un programme qui:
1. **Lit un fichier CSV** (artist,title,year)
2. **Parse les données** dans une liste chaînée
3. **Trie** selon argument (artist/title/year)
4. **Affiche** au format: `"Title" by "Artist" released in Year.`

### Format fichier:
```
Iron Maiden,The Number of the Beast,1982
Black Sabbath,Paranoid,1970
Iron Maiden,Fear of the Dark,1992
```

### Utilisation:
```bash
./music file.csv artist
./music file.csv title
./music file.csv year
```

### Messages d'erreur (EXACTS):
```
File not found.
Incorrect format.
Sort method does not exist.
```

### Makefile:
```makefile
all    # Compiler
clean  # Supprimer .o
fclean # Supprimer .o et exécutable
run    # Compiler et exécuter
```

Exécutable: `music` (ou `music.exe` Windows)

### Fonctions autorisées UNIQUEMENT:
- `open`, `close`, `read`, `write` - I/O fichiers
- `malloc`, `free` - Allocation mémoire

### À implémenter:
1. Ouvrir et lire fichier
2. Parser format CSV
3. Créer liste chaînée d'albums
4. Trier (artist/title/year)
5. Afficher format correct
6. Gérer 3 types d'erreurs
7. Makefile complet

---

## 📚 **DOCUMENTATION RECOMMANDÉE**

### **Jour 01:**
- [C_Variables.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Variables.md)
- [C_Pointeurs.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Pointeurs.md)
- [C_MemAlloc.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_MemAlloc.md) ⭐
- [Lib_string.md](COURS/02_BIBLIOTHEQUES_ESSENTIELLES/Lib_string.md)
- [Lib_unistd.md](COURS/02_BIBLIOTHEQUES_ESSENTIELLES/Lib_unistd.md)

### **Jour 02:**
- [C_Tableaux.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Tableaux.md)
- [C_Fonctions.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Fonctions.md) ⭐ (pointeurs de fonction)
- [C_MemAlloc.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_MemAlloc.md)

### **Jour 03:**
- [C_Operateurs.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Operateurs.md)
- [Lib_math.md](COURS/03_BIBLIOTHEQUES_COURANTES/Lib_math.md)
- [C_MemAlloc.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_MemAlloc.md)

### **Jour 04:**
- [C_Structures.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Structures.md) ⭐
- [C_Pointeurs.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Pointeurs.md) ⭐ (listes chaînées)
- [C_MemAlloc.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_MemAlloc.md)
- [C_Fonctions.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Fonctions.md)

### **Jour 05 (CRITICAL!):**
- [Lib_fcntl.md](COURS/04_BIBLIOTHEQUES_SYSTEME/Lib_fcntl.md) ⭐⭐⭐ (open/close)
- [Lib_unistd.md](COURS/02_BIBLIOTHEQUES_ESSENTIELLES/Lib_unistd.md) ⭐⭐⭐ (read/write)
- [C_Structures.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Structures.md) (parsing)
- [C_MemAlloc.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_MemAlloc.md) (malloc/free)
- [C_Boucles.md](COURS/01_CONCEPTS_FONDAMENTAUX/C_Boucles.md) (tri)

---

## 💡 **Conseils importants**

### **Jour 01:**
✅ MAÎTRISE LES CHAÎNES! C'est crucial
✅ Job 05 (strdup) introduit malloc - comprendre parfaitement
✅ Job 08 (split) est le plus difficile - prendre du temps

### **Jour 02:**
✅ Pointeurs de fonction (Job 05) est nouveau concept
✅ Tableaux dynamiques pour Job 03/04

### **Jour 03:**
✅ Conversions string ↔ int sont fondamentales
✅ Job 08 (sudoku) est optionnel mais fun

### **Jour 04:**
✅ STRUCTURES = clé pour la suite
✅ LISTES CHAÎNÉES = concept majeur
✅ Pointeurs de fonction pour tri avancé

### **Jour 05 (CRITICAL!):**
⚠️ Lis [Lib_fcntl.md](COURS/04_BIBLIOTHEQUES_SYSTEME/Lib_fcntl.md) ENTIÈREMENT
⚠️ Lis [Lib_unistd.md](COURS/02_BIBLIOTHEQUES_ESSENTIELLES/Lib_unistd.md) ENTIÈREMENT
✅ Commence simple: lire fichier, afficher
✅ Ajoute features progressivement
✅ Parse CSV correctement avant tout
✅ Teste chaque étape

---

## 🎯 **Résumé**

**Tu dois faire:**
1. **Jour 01:** 8 jobs chaînes (putchar → split)
2. **Jour 02:** 8 jobs pointeurs & tableaux
3. **Jour 03:** 8 jobs conversion & maths
4. **Jour 04:** 8 jobs structures & listes
5. **Jour 05:** 1 projet complet (Music Sorter)

**Total: 40 jobs + 1 projet final!**

---

**Bonne chance!** 🚀

Tu as les VRAIS sujets maintenant. C'est parti! 💪