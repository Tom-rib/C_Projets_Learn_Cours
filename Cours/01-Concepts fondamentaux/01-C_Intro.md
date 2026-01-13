# 🎯 C_Intro - Introduction à la Programmation C

## À quoi sert ce fichier?

Ce fichier te présente les **fondamentaux de la programmation C**: comment structurer un programme, comment compiler, et les bases pour démarrer.

## 📖 Qu'est-ce que le C?

Le langage C est:
- **Simple et efficace** - Peu de règles, très puissant
- **Bas niveau** - Accès direct à la mémoire
- **Portable** - Fonctionne partout
- **Ancien** - Créé en 1972, toujours utilisé aujourd'hui

## 🏗️ Structure d'un programme C

```c
#include <stdio.h>          // Inclure une bibliothèque

int main(void)              // Fonction principale
{
    printf("Hello!\n");     // Afficher du texte
    return (0);             // Retourner 0 (succès)
}
```

### Explication:
- `#include <stdio.h>` - Importe la bibliothèque "stdio" pour printf
- `int main(void)` - La fonction principale (obligatoire)
- `printf()` - Fonction pour afficher du texte
- `return (0)` - Terminer le programme avec le code 0 (succès)

## 💻 Premier programme

### Code complet

```c
#include <stdio.h>

int main(void)
{
    printf("Bonjour, monde!\n");
    return (0);
}
```

### Compiler et exécuter

```bash
# Compiler
gcc -Wall -Wextra -Werror bonjour.c -o bonjour

# Exécuter
./bonjour
```

### Output
```
Bonjour, monde!
```

## 🔧 Compiler: Les flags importants

```bash
# Flag par flag
gcc bonjour.c -o bonjour                    # Compilation simple
gcc -Wall bonjour.c -o bonjour              # Tous les warnings
gcc -Wall -Wextra bonjour.c -o bonjour     # Warnings supplémentaires
gcc -Wall -Wextra -Werror bonjour.c -o bonjour  # Warnings = erreurs

# Recommandé pour Runtrack
gcc -Wall -Wextra -Werror bonjour.c -o bonjour
```

### Signification des flags
| Flag | Signification |
|------|---------------|
| `-Wall` | Active les avertissements importants |
| `-Wextra` | Active les avertissements supplémentaires |
| `-Werror` | Traite les avertissements comme des erreurs |
| `-o nom` | Nom du fichier exécutable |

## 🎓 Afficher du texte

### printf() - Affichage basique

```c
#include <stdio.h>

int main(void)
{
    printf("Hello!\n");           // Texte simple
    printf("Nombre: %d\n", 42);   // Afficher un nombre
    printf("Texte: %s\n", "test"); // Afficher une chaîne
    return (0);
}
```

### Output
```
Hello!
Nombre: 42
Texte: test
```

### Caractères spéciaux
| Code | Signification |
|------|---------------|
| `\n` | Nouvelle ligne |
| `\t` | Tabulation |
| `\\` | Backslash |
| `\"` | Guillemet |

## 📝 Exemple complet avec variables

```c
#include <stdio.h>

int main(void)
{
    int age = 20;
    char *nom = "Alice";
    float taille = 1.75;
    
    printf("Nom: %s\n", nom);
    printf("Age: %d ans\n", age);
    printf("Taille: %.2f m\n", taille);
    
    return (0);
}
```

### Output
```
Nom: Alice
Age: 20 ans
Taille: 1.75 m
```

## ⚠️ Erreurs courantes

### Erreur 1: Oublier le #include
```c
// ❌ ERREUR
int main(void)
{
    printf("Hello");  // printf non déclaré!
    return (0);
}

// ✅ CORRECT
#include <stdio.h>

int main(void)
{
    printf("Hello");
    return (0);
}
```

### Erreur 2: Oublier le \n
```c
// ❌ Peu lisible
printf("Ligne 1");
printf("Ligne 2");
// Output: Ligne 1Ligne 2

// ✅ Correct
printf("Ligne 1\n");
printf("Ligne 2\n");
// Output: 
// Ligne 1
// Ligne 2
```

### Erreur 3: Mauvais format
```c
// ❌ ERREUR
printf("Nombre: %s\n", 42);  // %s pour un nombre!

// ✅ CORRECT
printf("Nombre: %d\n", 42);  // %d pour un entier
```

## 🔤 Formats printf courants

| Format | Type | Exemple |
|--------|------|---------|
| `%d` | Entier | `printf("%d", 42)` |
| `%f` | Flottant | `printf("%f", 3.14)` |
| `%.2f` | Flottant avec 2 décimales | `printf("%.2f", 3.14)` |
| `%s` | Chaîne | `printf("%s", "texte")` |
| `%c` | Caractère | `printf("%c", 'A')` |
| `%x` | Hexadécimal | `printf("%x", 255)` |

## 📚 Exemple pratique: Présentation personnelle

```c
#include <stdio.h>

int main(void)
{
    printf("=== PRÉSENTATION ===\n\n");
    
    printf("Nom: Tom\n");
    printf("Age: 25 ans\n");
    printf("Ville: Paris\n");
    printf("Langue: C\n");
    
    printf("\n=== FIN ===\n");
    
    return (0);
}
```

### Compiler et exécuter
```bash
gcc -Wall -Wextra -Werror presentation.c -o presentation
./presentation
```

### Output
```
=== PRÉSENTATION ===

Nom: Tom
Age: 25 ans
Ville: Paris
Langue: C

=== FIN ===
```

## ✅ Bonnes pratiques

1. **Toujours inclure les bonnes bibliothèques** (`#include`)
2. **Compiler avec les flags** (`-Wall -Wextra -Werror`)
3. **Utiliser les bons formats** dans printf
4. **Retourner 0** à la fin de main (succès)
5. **Indenter correctement** (4 espaces ou tab)
6. **Utiliser des noms explicites** pour les variables

## 🚀 Pour Runtrack C

### Jour 1 - Job 01: my_putchar et my_putstr
Tu vas besoin:
- De comprendre comment compiler
- De savoir afficher du texte (printf ou write)
- De savoir créer des fonctions

**Continue à lire C_Variables.md ensuite! →**

## 📚 Résumé

| Concept | Ce qu'il faut retenir |
|---------|----------------------|
| **Inclusion** | `#include <stdio.h>` pour utiliser printf |
| **main()** | Fonction obligatoire qui lance le programme |
| **printf()** | Afficher du texte formaté |
| **Compilation** | `gcc -Wall -Wextra -Werror` |
| **Formats** | `%d` (entier), `%f` (flottant), `%s` (chaîne) |

---

**Prochainement: C_Variables.md** 👉 Types de données et variables
