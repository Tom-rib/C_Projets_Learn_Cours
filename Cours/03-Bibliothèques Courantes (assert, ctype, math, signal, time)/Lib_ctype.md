# 📚 Lib_ctype.h - Classification et Conversion de Caractères

## À quoi sert ctype.h?

La bibliothèque **ctype.h** permet:
- ✅ Vérifier si un caractère est une lettre (isalpha)
- ✅ Vérifier si c'est un chiffre (isdigit)
- ✅ Vérifier si c'est alphanumérique (isalnum)
- ✅ Convertir en majuscule/minuscule (toupper, tolower)
- ✅ Vérifier les espaces (isspace)

## À inclure

```c
#include <ctype.h>
```

## isdigit() - Vérifier si c'est un chiffre

**Syntaxe:**
```c
int isdigit(int c);
```

**Retour:** Non-zéro si c'est un chiffre (0-9), 0 sinon

### Exemple

```c
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("isdigit('5'): %d\n", isdigit('5'));   // 1 (vrai)
    printf("isdigit('A'): %d\n", isdigit('A'));   // 0 (faux)
    printf("isdigit('9'): %d\n", isdigit('9'));   // 1 (vrai)
    
    return (0);
}
```

## isalpha() - Vérifier si c'est une lettre

**Syntaxe:**
```c
int isalpha(int c);
```

**Retour:** Non-zéro si c'est une lettre (A-Z ou a-z)

### Exemple

```c
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("isalpha('A'): %d\n", isalpha('A'));   // 1 (vrai)
    printf("isalpha('5'): %d\n", isalpha('5'));   // 0 (faux)
    printf("isalpha('z'): %d\n", isalpha('z'));   // 1 (vrai)
    
    return (0);
}
```

## isalnum() - Lettre ou chiffre?

**Syntaxe:**
```c
int isalnum(int c);
```

**Retour:** Non-zéro si c'est une lettre OU un chiffre

### Exemple

```c
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("isalnum('A'): %d\n", isalnum('A'));   // 1 (lettre)
    printf("isalnum('5'): %d\n", isalnum('5'));   // 1 (chiffre)
    printf("isalnum('!'): %d\n", isalnum('!'));   // 0 (ni l'un ni l'autre)
    
    return (0);
}
```

## isupper() et islower() - Majuscule ou minuscule?

**Syntaxe:**
```c
int isupper(int c);  // Majuscule?
int islower(int c);  // Minuscule?
```

### Exemple

```c
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("isupper('A'): %d\n", isupper('A'));   // 1 (majuscule)
    printf("isupper('a'): %d\n", isupper('a'));   // 0 (minuscule)
    printf("islower('a'): %d\n", islower('a'));   // 1 (minuscule)
    printf("islower('A'): %d\n", islower('A'));   // 0 (majuscule)
    
    return (0);
}
```

## toupper() - Convertir en majuscule

**Syntaxe:**
```c
int toupper(int c);
```

**Retour:** Le caractère en majuscule

### Exemple

```c
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c = 'a';
    printf("'a' -> '%c'\n", toupper(c));  // 'A'
    printf("'A' -> '%c'\n", toupper('A'));  // 'A' (pas de changement)
    printf("'5' -> '%c'\n", toupper('5'));  // '5' (pas de changement)
    
    return (0);
}
```

## tolower() - Convertir en minuscule

**Syntaxe:**
```c
int tolower(int c);
```

**Retour:** Le caractère en minuscule

### Exemple

```c
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c = 'A';
    printf("'A' -> '%c'\n", tolower(c));  // 'a'
    printf("'a' -> '%c'\n", tolower('a'));  // 'a' (pas de changement)
    printf("'5' -> '%c'\n", tolower('5'));  // '5' (pas de changement)
    
    return (0);
}
```

## isspace() - Vérifier si c'est un espace

**Syntaxe:**
```c
int isspace(int c);
```

**Retour:** Non-zéro si c'est un espace, tab, newline, etc.

### Exemple

```c
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("isspace(' '): %d\n", isspace(' '));    // 1 (espace)
    printf("isspace('\\t'): %d\n", isspace('\t')); // 1 (tab)
    printf("isspace('\\n'): %d\n", isspace('\n')); // 1 (newline)
    printf("isspace('A'): %d\n", isspace('A'));    // 0 (pas espace)
    
    return (0);
}
```

## Autres fonctions utiles

| Fonction | Signification |
|----------|---------------|
| `isprint(c)` | Caractère affichable? |
| `ispunct(c)` | Ponctuation? |
| `isgraph(c)` | Caractère non-blanc affichable? |
| `iscntrl(c)` | Contrôle (non affichable)? |
| `isxdigit(c)` | Chiffre hexadécimal (0-9, A-F)? |

## 🎓 Exemple complet: Convertir une chaîne

```c
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void to_uppercase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = toupper(str[i]);
}

void to_lowercase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = tolower(str[i]);
}

int main(void)
{
    char text[] = "Bonjour le Monde!";
    
    printf("Original: %s\n", text);
    
    to_uppercase(text);
    printf("Majuscule: %s\n", text);
    
    to_lowercase(text);
    printf("Minuscule: %s\n", text);
    
    return (0);
}
```

**Output:**
```
Original: Bonjour le Monde!
Majuscule: BONJOUR LE MONDE!
Minuscule: bonjour le monde!
```

## 🎓 Exemple: Valider une entrée

```c
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_valid_username(char *username)
{
    // Vérifier longueur
    if (strlen(username) < 3 || strlen(username) > 20)
        return (0);
    
    // Vérifier que c'est alphanumérique + underscore
    for (int i = 0; username[i] != '\0'; i++)
    {
        if (!isalnum(username[i]) && username[i] != '_')
            return (0);
    }
    
    // Première lettre doit être une lettre
    if (!isalpha(username[0]))
        return (0);
    
    return (1);
}

int main(void)
{
    char username[50];
    
    printf("Username: ");
    scanf("%s", username);
    
    if (is_valid_username(username))
        printf("Valide!\n");
    else
        printf("Invalide!\n");
    
    return (0);
}
```

## 🎓 Exemple: Compter les types de caractères

```c
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char texte[] = "Hello World 123!";
    int lettres = 0, chiffres = 0, espaces = 0, autres = 0;
    
    for (int i = 0; texte[i] != '\0'; i++)
    {
        if (isalpha(texte[i]))
            lettres++;
        else if (isdigit(texte[i]))
            chiffres++;
        else if (isspace(texte[i]))
            espaces++;
        else
            autres++;
    }
    
    printf("Texte: %s\n\n", texte);
    printf("Lettres: %d\n", lettres);
    printf("Chiffres: %d\n", chiffres);
    printf("Espaces: %d\n", espaces);
    printf("Autres: %d\n", autres);
    
    return (0);
}
```

**Output:**
```
Texte: Hello World 123!

Lettres: 10
Chiffres: 3
Espaces: 2
Autres: 1
```

## ⚠️ Erreurs courantes

### Erreur 1: Oublier le cast

```c
// ⚠️ DANGEREUX (char peut être négatif)
char c = -1;
if (isdigit(c))  // Comportement imprévisible!

// ✅ BON
unsigned char c = '5';
if (isdigit(c))
```

### Erreur 2: Penser que c'est binaire

```c
// ❌ MAUVAIS
if (isalpha('A') == 1)  // Peut ne pas être exactement 1!

// ✅ BON
if (isalpha('A'))  // Non-zéro = vrai
```

## ✅ Bonnes pratiques

1. **Utiliser isdigit()** plutôt que des comparaisons manuelles
2. **Vérifier les espaces** avec isspace() pour tous les types
3. **Ne pas comparer** à 1, utiliser l'opérateur booléen
4. **Transformer** avec toupper/tolower au lieu de formules
5. **Valider les entrées** avant d'utiliser

## 🚀 Pour Runtrack C

### Jour 1 - Job 03: char_is_digit
Tu vas utiliser ou implémenter ta version de isdigit()!

### Jour 1 - Job 03: str_is_digit
Tu vas vérifier si tous les caractères d'une chaîne sont des chiffres

### Jour 2+: Validation d'entrée
Tu vas valider les formats avec ctype

---

**Prochainement: Lib_math.md** 👉 Calculs mathématiques (sqrt, sin, cos, pow)
