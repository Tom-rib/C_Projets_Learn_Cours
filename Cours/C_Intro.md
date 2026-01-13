# Cours C - Introduction et Structure de Base

## Structure d'un programme C

Tout programme C suit cette structure de base :

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");
    return (0);
}
```

### Explications :
- `#include <stdio.h>` : Inclut la bibliothèque standard d'entrée/sortie
- `int main(void)` : Fonction principale du programme (obligatoire)
- `return (0)` : Indique que le programme s'est exécuté correctement
- Conventions : Entre accolades `{}` pour les blocs de code

## Compilation et Exécution

### Compiler un programme :
```bash
gcc -Wall -Wextra -Werror -o mon_programme mon_programme.c
```

Options courantes :
- `-Wall` : Active tous les avertissements importants
- `-Wextra` : Active les avertissements supplémentaires
- `-Werror` : Traite les avertissements comme des erreurs
- `-o` : Spécifie le nom du fichier de sortie

### Exécuter le programme :
```bash
./mon_programme
```

## Comment lire un message d'erreur

```
mon_programme.c:5:5: error: conflicting types for 'foo'
    5 | int foo(void)
      |     ^~~
```

- `mon_programme.c` : Nom du fichier
- `5:5` : Ligne 5, colonne 5
- `error` : Type d'erreur
- Le reste explique le problème

## Bonnes pratiques de base

1. **Indentation** : Utilisez 4 espaces par niveau
2. **Noms clairs** : Utilisez des noms de variables explicites
3. **Commentaires** : Commentez le code complexe
4. **Compilation** : Compilez régulièrement pour vérifier votre code

## Commentaires en C

```c
// Commentaire sur une ligne

/*
   Commentaire sur plusieurs lignes
   Très utile pour expliquer une section
*/
```

## Points d'entrée et sortie

- **Point d'entrée** : La fonction `main()`
- **Sortie normale** : `return (0);`
- **Sortie avec erreur** : `return (1);` ou un autre code d'erreur

```c
#include <stdio.h>

int main(void)
{
    printf("Programme en cours d'exécution...\n");
    return (0);  // Succès
}
```
