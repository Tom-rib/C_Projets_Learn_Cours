# 📚 Lib_string.h - Manipulation de Chaînes

## À quoi sert string.h?

La bibliothèque **string.h** permet:
- ✅ Calculer la longueur d'une chaîne
- ✅ Copier une chaîne
- ✅ Comparer deux chaînes
- ✅ Chercher un caractère
- ✅ Concaténer des chaînes

## À inclure

```c
#include <string.h>
```

## strlen() - Longueur d'une chaîne

**Syntaxe:**
```c
size_t strlen(const char *str);
```

**Retour:** Longueur de la chaîne (sans le \0)

### Exemple

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Bonjour";
    int len = strlen(str);
    
    printf("Longueur: %d\n", len);  // 7
    
    return (0);
}
```

## strcpy() - Copier une chaîne

**Syntaxe:**
```c
char *strcpy(char *dest, const char *src);
```

⚠️ **DANGEREUX:** Pas de vérification de limite!

### Exemple

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char source[] = "Bonjour";
    char destination[50];
    
    strcpy(destination, source);
    
    printf("%s\n", destination);  // Bonjour
    
    return (0);
}
```

## strncpy() - Copier N caractères (SAFE)

**Syntaxe:**
```c
char *strncpy(char *dest, const char *src, size_t n);
```

✅ **MEILLEUR:** Limite le nombre de caractères

### Exemple

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char source[] = "Bonjour";
    char destination[4];
    
    strncpy(destination, source, 3);
    destination[3] = '\0';  // Terminer!
    
    printf("%s\n", destination);  // Bon
    
    return (0);
}
```

## strcmp() - Comparer deux chaînes

**Syntaxe:**
```c
int strcmp(const char *s1, const char *s2);
```

**Retour:**
- `0` si égales
- `< 0` si s1 < s2
- `> 0` si s1 > s2

### Exemple

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char password[] = "secret";
    char input[20];
    
    printf("Mot de passe: ");
    scanf("%s", input);
    
    if (strcmp(input, password) == 0)
        printf("Correct!\n");
    else
        printf("Erreur!\n");
    
    return (0);
}
```

## strncmp() - Comparer N caractères

```c
int strncmp(const char *s1, const char *s2, size_t n);
```

### Exemple

```c
#include <string.h>

int main(void)
{
    char str1[] = "Bonjour";
    char str2[] = "Bonus";
    
    if (strncmp(str1, str2, 3) == 0)
        printf("Les 3 premiers caractères sont égaux\n");
    
    return (0);
}
```

## strcat() - Concaténer des chaînes

**Syntaxe:**
```c
char *strcat(char *dest, const char *src);
```

### Exemple

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char greeting[50] = "Bonjour ";
    char name[] = "Tom";
    
    strcat(greeting, name);
    
    printf("%s\n", greeting);  // Bonjour Tom
    
    return (0);
}
```

## strncat() - Concaténer N caractères (SAFE)

```c
char *strncat(char *dest, const char *src, size_t n);
```

### Exemple

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char greeting[50] = "Bonjour ";
    char name[] = "Toooommmmm";
    
    strncat(greeting, name, 3);  // Ajouter seulement "Too"
    
    printf("%s\n", greeting);  // Bonjour Too
    
    return (0);
}
```

## strchr() - Chercher un caractère

**Syntaxe:**
```c
char *strchr(const char *s, int c);
```

**Retour:** Pointeur vers le caractère trouvé ou NULL

### Exemple

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char email[] = "tom@example.com";
    char *at = strchr(email, '@');
    
    if (at != NULL)
    {
        printf("Domaine: %s\n", at + 1);  // example.com
    }
    
    return (0);
}
```

## strstr() - Chercher une sous-chaîne

**Syntaxe:**
```c
char *strstr(const char *haystack, const char *needle);
```

### Exemple

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char texte[] = "Bonjour le monde";
    char *trouve = strstr(texte, "monde");
    
    if (trouve != NULL)
        printf("Trouvé: %s\n", trouve);  // monde
    
    return (0);
}
```

## 🎓 Exemple complet: Validation email

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char email[50];
    char *at;
    
    printf("Email: ");
    scanf("%s", email);
    
    // Vérifier longueur
    if (strlen(email) < 5)
    {
        printf("Email trop court\n");
        return (1);
    }
    
    // Chercher @
    at = strchr(email, '@');
    if (at == NULL)
    {
        printf("Pas de @\n");
        return (1);
    }
    
    // Chercher point
    if (strchr(at, '.') == NULL)
    {
        printf("Pas de domaine valide\n");
        return (1);
    }
    
    printf("Email valide: %s\n", email);
    
    return (0);
}
```

## ⚠️ Erreurs courantes

### Erreur 1: Oublier \0
```c
// ❌ MAUVAIS
char str[4];
strcpy(str, "Bonjour");  // 8 caractères dans 4!

// ✅ BON
char str[20];  // Assez grand!
strcpy(str, "Bonjour");
```

### Erreur 2: Comparer avec ==

```c
// ❌ MAUVAIS
if (str1 == str2)  // Compare les adresses!

// ✅ BON
if (strcmp(str1, str2) == 0)  // Compare le contenu
```

### Erreur 3: Oublier le pointeur

```c
// ❌ MAUVAIS
if (strchr(str, 'a'))  // OK mais pas d'accès
    printf("%c\n", strchr(str, 'a'));  // Deuxième appel!

// ✅ BON
char *p = strchr(str, 'a');
if (p != NULL)
    printf("Trouvé: %s\n", p);
```

## ✅ Bonnes pratiques

1. **Utiliser `strncpy`** plutôt que `strcpy`
2. **Utiliser `strcmp`** pour comparer, pas `==`
3. **Vérifier NULL** quand strchr/strstr retour
4. **Dimensionner correctement** les tableaux
5. **Toujours terminer** par `\0`

## 🚀 Pour Runtrack C

### Jour 1 - Job 02: my_putstr
Tu vas avoir besoin de strlen pour boucler

### Jour 1 - Job 04: my_strcpy
Tu vas implémenter ta propre version!

### Jour 1 - Job 06: my_strcmp
Tu vas implémenter ta propre version!

---

**Prochainement: Lib_stdlib.md** 👉 Allocation mémoire et utilitaires
