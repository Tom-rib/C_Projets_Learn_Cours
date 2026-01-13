# 📚 Lib_stdio.h - Standard Input/Output

## À quoi sert stdio.h?

La bibliothèque **stdio.h** est la **plus importante** en C! Elle permet:
- ✅ Afficher du texte (printf)
- ✅ Lire du texte (scanf)
- ✅ Gérer les fichiers (fopen, fclose, fprintf)

## À inclure

```c
#include <stdio.h>
```

## 📤 printf() - Afficher formaté

**Syntaxe:**
```c
int printf(const char *format, ...);
```

**Retour:** Nombre de caractères affichés

### Formats courants

| Format | Type | Exemple |
|--------|------|---------|
| `%d` | Entier | `printf("%d", 42)` |
| `%f` | Flottant | `printf("%f", 3.14)` |
| `%.2f` | 2 décimales | `printf("%.2f", 3.14159)` |
| `%s` | Chaîne | `printf("%s", "texte")` |
| `%c` | Caractère | `printf("%c", 'A')` |
| `%x` | Hexadécimal | `printf("%x", 255)` |
| `%p` | Pointeur | `printf("%p", ptr)` |

### Exemples basiques

```c
#include <stdio.h>

int main(void)
{
    printf("Bonjour!\n");
    printf("Nombre: %d\n", 42);
    printf("Flottant: %.2f\n", 3.14159);
    printf("Chaîne: %s\n", "C");
    
    return (0);
}
```

**Output:**
```
Bonjour!
Nombre: 42
Flottant: 3.14
Chaîne: C
```

### Caractères d'échappement

| Code | Signification |
|------|---------------|
| `\n` | Nouvelle ligne |
| `\t` | Tabulation |
| `\\` | Backslash |
| `\"` | Guillemet |
| `\r` | Retour à la ligne (carriage return) |

### Exemple avec échappement

```c
#include <stdio.h>

int main(void)
{
    printf("Ligne 1\n");
    printf("Colonne1\tColonne2\n");
    printf("Chemin: C:\\Users\\Tom\n");
    printf("Dit: \"Bonjour\"\n");
    
    return (0);
}
```

**Output:**
```
Ligne 1
Colonne1	Colonne2
Chemin: C:\Users\Tom
Dit: "Bonjour"
```

## 📥 scanf() - Lire du texte

**Syntaxe:**
```c
int scanf(const char *format, ...);
```

**Retour:** Nombre d'éléments lus (ou EOF)

⚠️ **ATTENTION:** Utilise `&` pour les variables simples!

### Lire un entier

```c
#include <stdio.h>

int main(void)
{
    int age;
    
    printf("Quel est ton âge? ");
    scanf("%d", &age);  // ← & obligatoire!
    
    printf("Tu as %d ans\n", age);
    
    return (0);
}
```

### Lire un flottant

```c
#include <stdio.h>

int main(void)
{
    float prix;
    
    printf("Prix: ");
    scanf("%f", &prix);
    
    printf("Tu as dépensé %.2f€\n", prix);
    
    return (0);
}
```

### Lire une chaîne

```c
#include <stdio.h>

int main(void)
{
    char nom[50];
    
    printf("Nom: ");
    scanf("%s", nom);  // ← Pas de & pour les chaînes!
    
    printf("Bonjour %s\n", nom);
    
    return (0);
}
```

### Lire plusieurs valeurs

```c
#include <stdio.h>

int main(void)
{
    int age;
    float taille;
    
    printf("Age et taille: ");
    scanf("%d %f", &age, &taille);  // Espace = séparateur
    
    printf("Age: %d, Taille: %.2f\n", age, taille);
    
    return (0);
}
```

## 🔄 Combinaisons printf + scanf

```c
#include <stdio.h>

int main(void)
{
    char nom[50];
    int age;
    float taille;
    
    printf("=== FORMULAIRE ===\n\n");
    
    printf("Nom: ");
    scanf("%s", nom);
    
    printf("Age: ");
    scanf("%d", &age);
    
    printf("Taille: ");
    scanf("%f", &taille);
    
    printf("\n=== RÉSUMÉ ===\n");
    printf("Nom: %s\n", nom);
    printf("Age: %d ans\n", age);
    printf("Taille: %.2f m\n", taille);
    
    return (0);
}
```

## 📄 Fichiers - fopen et fclose

### Ouvrir un fichier

```c
FILE *fopen(const char *filename, const char *mode);
```

| Mode | Signification |
|------|---------------|
| `"r"` | Lecture |
| `"w"` | Écriture (crée/écrase) |
| `"a"` | Ajouter à la fin |
| `"r+"` | Lecture + écriture |

### Écrire dans un fichier

```c
#include <stdio.h>

int main(void)
{
    FILE *file = fopen("output.txt", "w");
    
    if (file == NULL)
    {
        printf("Erreur ouverture fichier\n");
        return (1);
    }
    
    fprintf(file, "Ligne 1\n");
    fprintf(file, "Ligne 2\n");
    fprintf(file, "Nombre: %d\n", 42);
    
    fclose(file);
    
    return (0);
}
```

### Lire un fichier

```c
#include <stdio.h>

int main(void)
{
    FILE *file = fopen("input.txt", "r");
    
    if (file == NULL)
    {
        printf("Erreur ouverture fichier\n");
        return (1);
    }
    
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL)
        printf("%s", buffer);
    
    fclose(file);
    
    return (0);
}
```

## ⚠️ Erreurs courantes

### Erreur 1: Oublier & avec scanf

```c
// ❌ ERREUR
int x;
scanf("%d", x);  // Pas de &!

// ✅ CORRECT
scanf("%d", &x);  // Avec &
```

### Erreur 2: Oublier le \n

```c
// ❌ Peu lisible
printf("Bonjour");
printf("Au revoir");
// Output: BonjourAu revoir

// ✅ Correct
printf("Bonjour\n");
printf("Au revoir\n");
// Output:
// Bonjour
// Au revoir
```

### Erreur 3: Mauvais format

```c
// ❌ ERREUR
int x = 42;
printf("x = %s\n", x);  // %s pour chaîne, pas nombre!

// ✅ CORRECT
printf("x = %d\n", x);  // %d pour entier
```

### Erreur 4: Oublier de fermer le fichier

```c
// ❌ MAUVAIS
FILE *f = fopen("test.txt", "w");
fprintf(f, "texte");
// Pas de fclose!

// ✅ BON
FILE *f = fopen("test.txt", "w");
fprintf(f, "texte");
fclose(f);  // Toujours fermer!
```

## 🎓 Exemple complet: Calculatrice

```c
#include <stdio.h>

int main(void)
{
    float a, b;
    char operateur;
    float resultat;
    
    printf("=== CALCULATRICE ===\n\n");
    
    printf("Nombre 1: ");
    scanf("%f", &a);
    
    printf("Opérateur (+, -, *, /): ");
    scanf(" %c", &operateur);  // Note l'espace avant %c
    
    printf("Nombre 2: ");
    scanf("%f", &b);
    
    if (operateur == '+')
        resultat = a + b;
    else if (operateur == '-')
        resultat = a - b;
    else if (operateur == '*')
        resultat = a * b;
    else if (operateur == '/')
    {
        if (b == 0)
        {
            printf("Erreur: division par zéro!\n");
            return (1);
        }
        resultat = a / b;
    }
    else
    {
        printf("Opérateur invalide\n");
        return (1);
    }
    
    printf("\nRésultat: %.2f %c %.2f = %.2f\n", a, operateur, b, resultat);
    
    return (0);
}
```

## ✅ Bonnes pratiques

1. **Toujours utiliser `&`** avec scanf sauf pour chaînes
2. **Vérifier le retour** de fopen (NULL = erreur)
3. **Toujours fermer** les fichiers avec fclose
4. **Utiliser le bon format** pour printf/scanf
5. **Ajouter `\n`** pour lisibilité
6. **Utiliser `fprintf`** pour écrire dans des fichiers

## 🚀 Pour Runtrack C

### Jour 1 - Job 01: my_putchar
Tu vas utiliser:
- write() directement (pas printf)
- Ou comprendre comment printf fonctionne

### Jour 1 - Job 02: my_putstr
Tu vas réutiliser my_putchar

### Jour 2+: Lire/écrire des fichiers
Tu vas utiliser:
- open() (plus bas niveau)
- Ou fopen/fprintf

---

**Prochainement: Lib_string.md** 👉 Manipulation de chaînes
