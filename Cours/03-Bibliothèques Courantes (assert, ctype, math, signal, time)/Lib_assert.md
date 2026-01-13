# 📚 Lib_assert.h - Assertions et Débogage

## À quoi sert assert.h?

La bibliothèque **assert.h** permet:
- ✅ Vérifier que une condition est vraie
- ✅ Arrêter le programme si assertion échoue
- ✅ Utile pour débogage et tests
- ✅ Peut être désactivé en production

## À inclure

```c
#include <assert.h>
```

## assert() - Assertion simple

**Syntaxe:**
```c
void assert(int condition);
```

**Comportement:**
- Si condition est vraie: continue
- Si condition est fausse: affiche erreur et arrête

### Exemple basique

```c
#include <stdio.h>
#include <assert.h>

int main(void)
{
    int x = 5;
    
    assert(x == 5);      // OK, continue
    printf("Après assertion 1\n");
    
    assert(x == 10);     // ERREUR! Affiche message et arrête
    printf("N'arrive jamais ici\n");
    
    return (0);
}
```

**Output:**
```
Après assertion 1
Assertion failed: x == 10, file "test.c", line 11
Aborted
```

## Assertions dans les fonctions

```c
#include <stdio.h>
#include <assert.h>

// Fonction qui divise deux nombres
int diviser(int a, int b)
{
    assert(b != 0);  // b ne doit pas être 0!
    
    return (a / b);
}

int main(void)
{
    printf("5 / 2 = %d\n", diviser(5, 2));  // OK
    printf("10 / 0 = %d\n", diviser(10, 0)); // ERREUR!
    
    return (0);
}
```

## Assertions pour valider les paramètres

```c
#include <stdio.h>
#include <assert.h>

void afficher_n_fois(char *texte, int n)
{
    assert(texte != NULL);  // texte ne doit pas être NULL
    assert(n >= 0);         // n doit être positif
    
    for (int i = 0; i < n; i++)
        printf("%s\n", texte);
}

int main(void)
{
    afficher_n_fois("Hello", 3);    // OK
    afficher_n_fois(NULL, 2);        // ERREUR! (assertion échoue)
    
    return (0);
}
```

## Assertions pour vérifier les retours

```c
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void)
{
    int *tab = (int *)malloc(10 * sizeof(int));
    assert(tab != NULL);  // Vérifier l'allocation
    
    // Utiliser tab...
    
    free(tab);
    
    return (0);
}
```

## Assertions pour post-conditions

```c
#include <stdio.h>
#include <assert.h>

int ajouter_un(int x)
{
    int resultat = x + 1;
    assert(resultat > x);  // Le résultat doit être > x
    
    return (resultat);
}

int main(void)
{
    printf("ajouter_un(5) = %d\n", ajouter_un(5));
    
    return (0);
}
```

## Assertions complexes

```c
#include <stdio.h>
#include <assert.h>

int main(void)
{
    int age = 25;
    int score = 150;
    
    // Assertion composée
    assert(age >= 18 && age <= 120);
    assert(score >= 0 && score <= 200);
    
    printf("Données valides\n");
    
    return (0);
}
```

## Désactiver les assertions

Tu peux désactiver toutes les assertions en compilant avec `-DNDEBUG`:

```bash
gcc -Wall -Wextra -Werror -DNDEBUG programme.c -o programme
```

Quand `NDEBUG` est défini, toutes les `assert()` deviennent des NOPs (no-operation).

## Imprimer un message si assertion échoue

```c
#include <stdio.h>
#include <assert.h>

int main(void)
{
    int x = 5;
    
    if (x != 10)
    {
        fprintf(stderr, "Erreur: x devrait être 10, mais x = %d\n", x);
        assert(0);  // Force l'arrêt
    }
    
    return (0);
}
```

## 🎓 Exemple complet: Fonction sûre

```c
#include <stdio.h>
#include <string.h>
#include <assert.h>

// Copier N caractères d'une chaîne
// Retour: nombre de caractères copiés
int copier_n_chars(char *dest, const char *src, int n)
{
    // Assertions de validation
    assert(dest != NULL);
    assert(src != NULL);
    assert(n > 0);
    
    int i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    
    // Assertion de post-condition
    assert(strlen(dest) <= n);
    
    return (i);
}

int main(void)
{
    char source[] = "Bonjour";
    char destination[4];
    
    int count = copier_n_chars(destination, source, 3);
    printf("Copié: %s (%d chars)\n", destination, count);
    
    return (0);
}
```

## 🎓 Exemple: Débogage d'algorithme

```c
#include <stdio.h>
#include <assert.h>

// Recherche binaire
int recherche_binaire(int *tab, int size, int cible)
{
    assert(tab != NULL);
    assert(size > 0);
    
    int gauche = 0, droite = size - 1;
    
    while (gauche <= droite)
    {
        int mid = (gauche + droite) / 2;
        
        // Vérifier que mid est valide
        assert(mid >= 0 && mid < size);
        
        if (tab[mid] == cible)
            return (mid);
        else if (tab[mid] < cible)
            gauche = mid + 1;
        else
            droite = mid - 1;
    }
    
    return (-1);  // Non trouvé
}

int main(void)
{
    int tab[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = 8;
    
    int index = recherche_binaire(tab, size, 7);
    printf("7 trouvé à l'index: %d\n", index);
    
    return (0);
}
```

## ⚠️ Erreurs courantes

### Erreur 1: Assertions avec effets de bord

```c
// ❌ MAUVAIS (si -DNDEBUG, x n'est jamais incrémenté!)
assert(++x > 0);

// ✅ BON
x++;
assert(x > 0);
```

### Erreur 2: Assertions sans message

```c
// ❌ Peu clair
assert(tab != NULL);

// ✅ Mieux avec commentaire
assert(tab != NULL);  // Le tableau ne doit pas être NULL
```

## ✅ Bonnes pratiques

1. **Utiliser pour vérifier** les invariants du code
2. **Mettre des assertions** au début des fonctions
3. **Vérifier NULL** pour les pointeurs
4. **Vérifier les limites** pour les indices
5. **Ne pas utiliser** pour les erreurs de l'utilisateur
6. **Savoir qu'elles peuvent être désactivées** (-DNDEBUG)

## 🚀 Pour Runtrack C

### Jour 1+: Validation
Tu vas utiliser assert() pour vérifier tes fonctions

### Jour 2-3: Débogage
Tu vas utiliser assert() pour déboguer des algorithmes complexes

### Jour 4-5: Tests de robustesse
Tu vas utiliser assert() pour vérifier la minishell

---

**Prochainement: Lib_signal.md** 👉 Gestion des signaux (Ctrl+C, etc.)
