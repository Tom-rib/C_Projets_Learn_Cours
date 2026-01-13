# Bibliothèque stdio.h - Entrée/Sortie Standard

## À quoi sert stdio.h ?

Cette bibliothèque gère l'entrée/sortie standard (clavier, écran, fichiers).

**À inclure** :
```c
#include <stdio.h>
```

## printf() - Afficher du texte

Affiche du texte formaté sur la sortie standard (l'écran).

**Syntaxe** :
```c
printf("format", arguments);
```

**Exemple** :
```c
#include <stdio.h>

int main(void)
{
    printf("Bonjour, monde!\n");
    printf("La réponse est: %d\n", 42);
    printf("Pi = %.2f\n", 3.14159);
    
    return (0);
}
```

**Spécificateurs de format courants** :

| Spécificateur | Type | Exemple |
|---|---|---|
| `%d` | int | `printf("%d", 42);` → 42 |
| `%u` | unsigned int | `printf("%u", 42);` → 42 |
| `%i` | int | `printf("%i", 42);` → 42 |
| `%f` | float/double | `printf("%f", 3.14);` → 3.140000 |
| `%.2f` | avec décimales | `printf("%.2f", 3.14);` → 3.14 |
| `%c` | char | `printf("%c", 'A');` → A |
| `%s` | char* (string) | `printf("%s", "hello");` → hello |
| `%x` | hexadécimal | `printf("%x", 255);` → ff |
| `%o` | octal | `printf("%o", 8);` → 10 |
| `%p` | pointeur (adresse) | `printf("%p", ptr);` → 0x... |
| `%%` | pourcentage | `printf("%%");` → % |

## scanf() - Lire depuis le clavier

Lit l'input de l'utilisateur.

**Syntaxe** :
```c
scanf("format", &variables);
```

**Exemple** :
```c
#include <stdio.h>

int main(void)
{
    int age;
    char nom[50];
    
    printf("Entrez votre nom: ");
    scanf("%s", nom);  // Pas de & pour les chaînes!
    
    printf("Entrez votre âge: ");
    scanf("%d", &age);
    
    printf("Bonjour %s, vous avez %d ans\n", nom, age);
    
    return (0);
}
```

**Spécificateurs pour scanf** :

| Spécificateur | Type |
|---|---|
| `%d` | int |
| `%f` | float |
| `%lf` | double |
| `%c` | char |
| `%s` | string (char[]) |

## puts() - Afficher une chaîne

Affiche une chaîne suivi d'une nouvelle ligne.

```c
#include <stdio.h>

int main(void)
{
    puts("Hello, World!");
    puts("Ceci s'affiche sur une nouvelle ligne");
    
    return (0);
}
```

## putchar() - Afficher un caractère

Affiche un seul caractère.

```c
#include <stdio.h>

int main(void)
{
    putchar('A');
    putchar('\n');
    
    for (int i = 65; i <= 90; i++)
    {
        putchar(i);
    }
    putchar('\n');
    
    return (0);
}
```

## getchar() - Lire un caractère

Lit un seul caractère du clavier.

```c
#include <stdio.h>

int main(void)
{
    printf("Entrez un caractère: ");
    char c = getchar();
    
    printf("Vous avez saisi: %c\n", c);
    
    return (0);
}
```

## fopen() et fclose() - Fichiers

Ouvrir et fermer un fichier.

```c
#include <stdio.h>

int main(void)
{
    // Ouvrir le fichier
    FILE *file = fopen("donnees.txt", "r");
    
    // Vérifier si l'ouverture a réussi
    if (file == NULL)
    {
        printf("Erreur: impossible d'ouvrir le fichier\n");
        return (1);
    }
    
    // Utiliser le fichier...
    
    // Fermer le fichier
    fclose(file);
    
    return (0);
}
```

**Modes d'ouverture** :
- `"r"` : Lecture (le fichier doit exister)
- `"w"` : Écriture (crée ou écrase le fichier)
- `"a"` : Ajout à la fin du fichier
- `"r+"` : Lecture et écriture

## fprintf() - Écrire dans un fichier

Comme printf, mais écrit dans un fichier.

```c
#include <stdio.h>

int main(void)
{
    FILE *file = fopen("sortie.txt", "w");
    
    if (file == NULL)
    {
        printf("Erreur d'ouverture\n");
        return (1);
    }
    
    fprintf(file, "Bonjour, fichier!\n");
    fprintf(file, "Nombre: %d\n", 42);
    
    fclose(file);
    
    return (0);
}
```

## fscanf() - Lire depuis un fichier

Comme scanf, mais lit depuis un fichier.

```c
#include <stdio.h>

int main(void)
{
    FILE *file = fopen("entree.txt", "r");
    
    if (file == NULL)
    {
        printf("Erreur d'ouverture\n");
        return (1);
    }
    
    int nombre;
    fscanf(file, "%d", &nombre);
    printf("Nombre lu: %d\n", nombre);
    
    fclose(file);
    
    return (0);
}
```

## fgets() - Lire une ligne complète

Lit une ligne entière d'un fichier ou de l'input.

```c
#include <stdio.h>

int main(void)
{
    char ligne[256];
    
    printf("Entrez du texte: ");
    fgets(ligne, sizeof(ligne), stdin);  // stdin = standard input
    
    printf("Vous avez écrit: %s", ligne);
    
    return (0);
}
```

## fputs() - Écrire une chaîne dans un fichier

```c
#include <stdio.h>

int main(void)
{
    FILE *file = fopen("texte.txt", "w");
    
    if (file == NULL)
    {
        printf("Erreur d'ouverture\n");
        return (1);
    }
    
    fputs("Ceci est une ligne\n", file);
    fputs("Ceci est une autre ligne\n", file);
    
    fclose(file);
    
    return (0);
}
```

## Exemple complet : Lecture/écriture de fichier

```c
#include <stdio.h>

int main(void)
{
    // Écriture
    FILE *file = fopen("donnees.txt", "w");
    if (file == NULL)
    {
        printf("Erreur d'écriture\n");
        return (1);
    }
    
    for (int i = 1; i <= 5; i++)
    {
        fprintf(file, "Ligne %d: %d\n", i, i * 10);
    }
    
    fclose(file);
    printf("Fichier écrit avec succès\n");
    
    // Lecture
    file = fopen("donnees.txt", "r");
    if (file == NULL)
    {
        printf("Erreur de lecture\n");
        return (1);
    }
    
    char ligne[256];
    while (fgets(ligne, sizeof(ligne), file) != NULL)
    {
        printf("%s", ligne);
    }
    
    fclose(file);
    
    return (0);
}
```

## Spécificateurs utiles pour printf

```c
#include <stdio.h>

int main(void)
{
    // Largeur
    printf("|%5d|\n", 42);      // |   42|
    printf("|%-5d|\n", 42);     // |42   |
    
    // Zéros
    printf("%05d\n", 42);       // 00042
    
    // Décimales
    printf("%.2f\n", 3.14159);  // 3.14
    printf("%.5f\n", 3.14159);  // 3.14159
    
    // Longeur
    printf("%ld\n", 1234567890L);  // long
    
    return (0);
}
```

## Bonnes pratiques

1. **Toujours vérifier** que fopen réussit (file != NULL)
2. **Toujours fermer** les fichiers après utilisation
3. **Utiliser fgets au lieu de scanf** pour lire des chaînes (plus sûr)
4. **Vérifier les retours** de lecture/écriture
5. **Utiliser les bons spécificateurs** pour les bons types
6. **Mettre des \n** à la fin des lignes si nécessaire
