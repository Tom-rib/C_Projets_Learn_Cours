# INDEX - Cours Complet C pour Runtrack

Bienvenue dans ce cours complet de programmation C! Tous les fichiers sont prêts à utiliser et copier directement dans votre code.

## 📚 Concepts Fondamentaux

### 1. **C_Intro.md** - Introduction
- Structure de base d'un programme C
- Compilation et exécution
- Lire les messages d'erreur
- Bonnes pratiques de base

**À lire en premier** ✅

### 2. **C_Variables.md** - Variables et Types
- Types de données (int, char, float, double)
- Déclaration et initialisation
- Spécificateurs de format (printf)
- Constantes et casting
- Tailles des types (sizeof)

**Essentiel pour manipuler les données** ✅

### 3. **C_Operateurs.md** - Opérateurs
- Opérateurs arithmétiques
- Opérateurs de comparaison
- Opérateurs logiques
- Opérateurs d'assignation
- Incrémentation/décrémentation
- Opérateur ternaire
- Opérateurs binaires (bitwise)

**Construire des expressions complexes** ✅

### 4. **C_Controle.md** - Structures de Contrôle
- if/else/else if
- Conditions imbriquées
- switch/case
- Opérateurs logiques en conditions

**Prendre des décisions dans le code** ✅

### 5. **C_Boucles.md** - Boucles
- while, for, do/while
- Break et continue
- Boucles imbriquées
- Parcourir des tableaux et chaînes

**Répéter des actions** ✅

### 6. **C_Tableaux.md** - Tableaux et Chaînes
- Tableaux unidimensionnels
- Tableaux bidimensionnels
- Chaînes de caractères
- Manipulation de chaînes
- Tableau de chaînes

**Gérer des collections de données** ✅

### 7. **C_Fonctions.md** - Fonctions
- Déclaration et implémentation
- Paramètres et retours
- Passage par valeur
- Prototypes de fonction
- Portée des variables
- Récursion

**Structurer le code en blocs réutilisables** ✅

### 8. **C_Pointeurs.md** - Pointeurs
- Opérateurs & et *
- Adresses et déréférence
- Pointeurs et tableaux
- Passage par référence
- Arithmétique des pointeurs
- Pointeur const et const pointeur

**Manipuler les adresses mémoire** ✅

### 9. **C_MemAlloc.md** - Allocation Dynamique
- malloc, calloc, realloc
- free et libération mémoire
- Memory leaks
- Tableaux dynamiques
- Matrices 2D dynamiques
- Chaînes dynamiques

**Gérer la mémoire dynamiquement** ✅

### 10. **C_Structures.md** - Structures et Typedef
- Définition de structures
- Structures imbriquées
- Pointeurs vers structures
- typedef pour simplifier
- Union et enum
- Fonctions avec structures

**Créer des types de données personnalisés** ✅

## 📚 Bibliothèques Standard

### 11. **Lib_stdio.h** - Entrée/Sortie
**Fonctions courantes** :
- `printf()` - Afficher formaté
- `scanf()` - Lire formaté
- `puts()`, `putchar()`, `getchar()`
- `fopen()`, `fclose()` - Fichiers
- `fprintf()`, `fscanf()` - Fichiers
- `fgets()`, `fputs()` - Fichiers

**À utiliser pour** : Affichage, saisie, manipulation de fichiers

### 12. **Lib_string.h** - Chaînes de Caractères
**Fonctions courantes** :
- `strlen()` - Longueur
- `strcpy()`, `strncpy()` - Copier
- `strcat()`, `strncat()` - Concaténer
- `strcmp()`, `strncmp()` - Comparer
- `strchr()`, `strstr()` - Chercher
- `memcpy()`, `memset()`, `memcmp()` - Mémoire

**À utiliser pour** : Manipuler les chaînes

### 13. **Lib_stdlib.h** - Utilitaires
**Fonctions courantes** :
- `malloc()`, `calloc()`, `realloc()` - Allocation
- `free()` - Libération
- `atoi()`, `atof()`, `atol()` - Conversion
- `strtol()` - Conversion robuste
- `rand()`, `srand()` - Nombres aléatoires
- `abs()`, `labs()` - Valeur absolue
- `exit()` - Quitter le programme

**À utiliser pour** : Allocation, conversion, aléatoire

### 14. **Lib_unistd.h** - Fonctions Système
**Fonctions courantes** :
- `write()` - Écrire sur FD **[RUNTRACK]**
- `read()` - Lire depuis FD
- `close()` - Fermer FD
- `sleep()`, `usleep()` - Pause

**À utiliser pour** : I/O bas niveau, système

### 15. **C_Compilation.md** - Compilation et Bonnes Pratiques
- Commandes gcc couantes
- Makefiles
- Fichiers d'en-tête (.h)
- Messages d'erreur courants
- Convention de nommage
- Gestion des erreurs

**Référence de compilation** ✅

## 🎯 Progression Recommandée

### Phase 1 : Fondamentaux (Jour 1-2)
1. C_Intro.md
2. C_Variables.md
3. C_Operateurs.md
4. C_Controle.md

### Phase 2 : Boucles et Collections (Jour 2-3)
5. C_Boucles.md
6. C_Tableaux.md

### Phase 3 : Fonctions et Modularité (Jour 3-4)
7. C_Fonctions.md
8. C_Compilation.md

### Phase 4 : Pointeurs et Mémoire (Jour 4-5)
9. C_Pointeurs.md
10. C_MemAlloc.md

### Phase 5 : Types personnalisés (Jour 5-6)
11. C_Structures.md

### Phase 6 : Bibliothèques (Jour 6+)
- Lib_stdio.h (priorité)
- Lib_unistd.h (pour Runtrack)
- Lib_string.h (essentiellement)
- Lib_stdlib.h (utile)

## 🚀 Exercices Runtrack Jour 1

### Job 01 - Implementer my_putchar et my_putstr
Fichiers utiles :
- **Lib_unistd.h** : Pour comprendre write()
- **C_Fonctions.md** : Prototypes et implémentation

```c
// my_putchar.c
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

// my_putstr.c
void my_putstr(char *str)
{
    if (str == NULL)
        return;
    
    while (*str != '\0')
    {
        my_putchar(*str);
        str++;
    }
}
```

### Job 02 - Implementer my_strlen
Fichiers utiles :
- **C_Boucles.md** : While et incrémentation
- **C_Pointeurs.md** : Parcourir une chaîne

```c
// my_strlen.c
int my_strlen(char *str)
{
    int len = 0;
    
    while (str[len] != '\0')
        len++;
    
    return (len);
}
```

### Job 03 - char_is_digit et str_is_digit
Fichiers utiles :
- **C_Variables.md** : Codes ASCII
- **C_Controle.md** : Conditions
- **C_Boucles.md** : Boucles for

### Job 04 - my_strcpy
Fichiers utiles :
- **C_Pointeurs.md** : Pointeurs et déréférence
- **C_Boucles.md** : Boucles while

```c
// my_strcpy.c
char *my_strcpy(char *dest, char *src)
{
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    
    return (dest);
}
```

### Job 05 - my_strdup
Fichiers utiles :
- **C_MemAlloc.md** : malloc et free
- **C_Fonctions.md** : my_strlen (réutiliser)

### Job 06 - my_strcmp
Fichiers utiles :
- **C_Boucles.md** : While pour parcourir
- **C_Controle.md** : Comparaisons
- **C_Variables.md** : Codes ASCII

### Job 07 - trim
Fichiers utiles :
- **C_MemAlloc.md** : malloc et allocation
- **C_Controle.md** : Conditions pour les espaces
- **Lib_stdlib.h** : malloc

### Job 08 - split
Fichiers utiles :
- **C_MemAlloc.md** : Tableaux dynamiques
- **C_Tableaux.md** : Tableaux de chaînes
- **C_Pointeurs.md** : Pointeurs vers pointeurs

## 💡 Conseils Importants

### Pour chaque Job
1. **Lire l'énoncé** avec attention
2. **Respecter les prototypes** exactement
3. **Tester avec plusieurs cas** (normal, edge cases, erreurs)
4. **Compiler avec** : `gcc -Wall -Wextra -Werror`
5. **Vérifier les prototypes** sont identiques à l'énoncé
6. **Documenter le code** avec des commentaires

### Erreurs Courantes
- ❌ Oublier `\0` à la fin d'une chaîne
- ❌ Oublier de vérifier NULL avant de déréférencer
- ❌ Confondre `strcpy` avec `my_strcpy`
- ❌ Oublier le `&` avant une variable dans scanf/read
- ❌ Ne pas libérer la mémoire allouée

### Points Importants
✅ Les chaînes sont terminées par `\0`
✅ `write()` est la fonction autorisée (pas printf)
✅ Toujours vérifier les retours d'erreur
✅ Utiliser des prototypes dans les headers
✅ Compiler chaque job séparément d'abord

## 📋 Checklist de Rendu

- [ ] Tous les fichiers compilent sans erreur
- [ ] Flags de compilation : `-Wall -Wextra -Werror`
- [ ] Prototypes exacts de l'énoncé
- [ ] Tests effectués et fonctionnels
- [ ] Pas de memory leaks
- [ ] Code bien indenté
- [ ] Repository github à jour
- [ ] Dossier/fichier nommage correct

## 🔍 Références Rapides

### Lire une entrée utilisateur
```c
#include <stdio.h>

int nombre;
scanf("%d", &nombre);  // Entier
```

### Afficher du texte
```c
#include <unistd.h>

write(1, "texte", 5);  // write(stdout, texte, longueur)
```

### Allouer mémoire
```c
#include <stdlib.h>

int *ptr = (int *)malloc(sizeof(int));
if (ptr == NULL) return (1);
free(ptr);
ptr = NULL;
```

### Boucler sur une chaîne
```c
int i = 0;
while (str[i] != '\0')
{
    // Faire quelque chose
    i++;
}
```

### Comparer deux chaînes
```c
#include <string.h>

if (strcmp(str1, str2) == 0)
    // Identiques
```

## 📞 Quand consulter quel fichier

| Besoin | Fichier |
|--------|---------|
| Lire une entrée | C_Variables.md, Lib_stdio.h |
| Boucler | C_Boucles.md |
| Condition | C_Controle.md |
| Fonction | C_Fonctions.md |
| Pointeur | C_Pointeurs.md |
| Chaîne | C_Tableaux.md, Lib_string.h |
| Mémoire | C_MemAlloc.md, Lib_stdlib.h |
| Structure | C_Structures.md |
| Affichage | Lib_stdio.h, Lib_unistd.h |
| Compilation | C_Compilation.md |

---

**Bonne chance avec Runtrack C!** 🚀

N'hésite pas à revenir à ces fichiers pour vérifier la syntaxe ou comprendre un concept.
Tous les exemples sont prêts à copier et tester!
