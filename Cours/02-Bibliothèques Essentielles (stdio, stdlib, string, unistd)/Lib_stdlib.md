# 📚 Lib_stdlib.h - Allocation Mémoire et Utilitaires

## À quoi sert stdlib.h?

La bibliothèque **stdlib.h** permet:
- ✅ Allouer/libérer mémoire (malloc, free)
- ✅ Convertir chaînes en nombres (atoi, atof)
- ✅ Générer nombres aléatoires (rand)
- ✅ Quitter le programme (exit)

## À inclure

```c
#include <stdlib.h>
```

## malloc() - Allouer de la mémoire

**Syntaxe:**
```c
void *malloc(size_t size);
```

**Retour:** Pointeur vers la mémoire allouée (ou NULL si erreur)

### Allouer pour un entier

```c
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int *ptr = (int *)malloc(sizeof(int));
    
    if (ptr == NULL)
    {
        printf("Erreur allocation\n");
        return (1);
    }
    
    *ptr = 42;
    printf("Valeur: %d\n", *ptr);
    
    free(ptr);
    ptr = NULL;
    
    return (0);
}
```

### Allouer pour un tableau

```c
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int *tab = (int *)malloc(5 * sizeof(int));
    
    if (tab == NULL)
        return (1);
    
    tab[0] = 10;
    tab[1] = 20;
    tab[2] = 30;
    
    for (int i = 0; i < 3; i++)
        printf("%d ", tab[i]);
    printf("\n");
    
    free(tab);
    tab = NULL;
    
    return (0);
}
```

### Allouer pour une chaîne

```c
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = (char *)malloc(20 * sizeof(char));
    
    if (str == NULL)
        return (1);
    
    strcpy(str, "Bonjour");
    printf("%s\n", str);
    
    free(str);
    str = NULL;
    
    return (0);
}
```

## free() - Libérer la mémoire

**Syntaxe:**
```c
void free(void *ptr);
```

### Exemple correct

```c
#include <stdlib.h>

int main(void)
{
    int *ptr = (int *)malloc(sizeof(int));
    
    *ptr = 42;
    
    free(ptr);    // Libérer
    ptr = NULL;   // Bonne pratique
    
    return (0);
}
```

⚠️ **IMPORTANT:**
- Ne pas libérer deux fois
- Mettre à NULL après free

## realloc() - Redimensionner la mémoire

**Syntaxe:**
```c
void *realloc(void *ptr, size_t size);
```

### Exemple

```c
#include <stdlib.h>

int main(void)
{
    int *tab = (int *)malloc(3 * sizeof(int));
    
    tab[0] = 10;
    tab[1] = 20;
    tab[2] = 30;
    
    // Agrandir à 5 éléments
    tab = (int *)realloc(tab, 5 * sizeof(int));
    
    tab[3] = 40;
    tab[4] = 50;
    
    free(tab);
    
    return (0);
}
```

## atoi() - Convertir chaîne en entier

**Syntaxe:**
```c
int atoi(const char *str);
```

### Exemple

```c
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char nombre[] = "42";
    int x = atoi(nombre);
    
    printf("Chaîne: %s\n", nombre);
    printf("Entier: %d\n", x);
    printf("Calcul: %d\n", x + 8);  // 50
    
    return (0);
}
```

## atof() - Convertir chaîne en flottant

**Syntaxe:**
```c
double atof(const char *str);
```

### Exemple

```c
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char prix[] = "19.99";
    double montant = atof(prix);
    
    printf("Chaîne: %s\n", prix);
    printf("Flottant: %.2f\n", montant);
    printf("Total 10x: %.2f\n", montant * 10);  // 199.90
    
    return (0);
}
```

## rand() - Nombre aléatoire

**Syntaxe:**
```c
int rand(void);
```

**Retour:** Nombre aléatoire entre 0 et RAND_MAX

### Exemple basique

```c
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int random = rand();
    printf("Nombre aléatoire: %d\n", random);
    
    return (0);
}
```

### Entre 0 et 9

```c
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int dice = rand() % 10;  // 0 à 9
    printf("Nombre: %d\n", dice);
    
    return (0);
}
```

### Entre 1 et 6 (dé)

```c
int dice = (rand() % 6) + 1;  // 1 à 6
```

## srand() - Initialiser le générateur

```c
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));  // Initialiser avec le temps
    
    for (int i = 0; i < 5; i++)
        printf("%d\n", rand() % 100);
    
    return (0);
}
```

## exit() - Quitter le programme

**Syntaxe:**
```c
void exit(int status);
```

### Exemple

```c
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    printf("Début\n");
    
    exit(0);  // Arrêter ici
    
    printf("Ceci ne s'affichera pas\n");
    
    return (0);
}
```

## 🎓 Exemple complet: Jeu de nombre

```c
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    
    int secret = (rand() % 100) + 1;
    int guess = 0;
    int tries = 0;
    
    printf("=== DEVINE LE NOMBRE ===\n");
    printf("Entre 1 et 100\n\n");
    
    while (guess != secret)
    {
        printf("Essai %d: ", tries + 1);
        scanf("%d", &guess);
        tries++;
        
        if (guess < secret)
            printf("Plus grand!\n");
        else if (guess > secret)
            printf("Plus petit!\n");
        else
            printf("BRAVO! (%d essais)\n", tries);
    }
    
    return (0);
}
```

## ⚠️ Erreurs courantes

### Erreur 1: Vérifier NULL

```c
// ❌ MAUVAIS
int *ptr = (int *)malloc(sizeof(int));
*ptr = 42;  // Crash si malloc a échoué!

// ✅ BON
int *ptr = (int *)malloc(sizeof(int));
if (ptr == NULL)
    return (1);
*ptr = 42;
```

### Erreur 2: Oublier sizeof

```c
// ❌ MAUVAIS (alloue 4 bytes pour 100 entiers!)
int *tab = (int *)malloc(100);

// ✅ BON
int *tab = (int *)malloc(100 * sizeof(int));
```

### Erreur 3: Libérer deux fois

```c
// ❌ ERREUR
int *ptr = (int *)malloc(sizeof(int));
free(ptr);
free(ptr);  // CRASH!

// ✅ BON
int *ptr = (int *)malloc(sizeof(int));
free(ptr);
ptr = NULL;  // Marquer comme NULL
```

## ✅ Bonnes pratiques

1. **Vérifier le retour** de malloc (NULL = erreur)
2. **Utiliser sizeof()** pour taille correcte
3. **Toujours free()** la mémoire allouée
4. **Mettre NULL** après free
5. **Initialiser srand** avec time pour vrais aléas
6. **Vérifier les conversions** atoi/atof

## 🚀 Pour Runtrack C

### Jour 1 - Job 05: my_strdup
Tu vas utiliser malloc pour copier une chaîne!

### Jour 2-3+: Tableaux dynamiques
Tu vas utiliser malloc pour stocker des données

### Jour 4-5: Minishell
Tu vas utiliser malloc pour gérer les commandes

---

**Prochainement: Lib_unistd.md** 👉 Fonctions POSIX (write, read, close)
