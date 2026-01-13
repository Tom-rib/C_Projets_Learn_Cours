# 📚 Lib_errno.h - Gestion des Erreurs Système

## À quoi sert errno.h?

La bibliothèque **errno.h** permet:
- ✅ Récupérer le code d'erreur système
- ✅ Comprendre pourquoi une fonction a échoué
- ✅ Afficher des messages d'erreur utiles
- ✅ Déboguer les appels système

## À inclure

```c
#include <errno.h>
```

## errno - Variable globale

```c
int errno;  // Contient le code d'erreur
```

Chaque appel système qui échoue set `errno` à une valeur spécifique.

## perror() - Afficher l'erreur

**Syntaxe:**
```c
void perror(const char *str);
```

Affiche le message d'erreur associé à errno.

### Exemple

```c
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int fd = open("inexistant.txt", O_RDONLY);
    
    if (fd == -1)
    {
        perror("open");  // Affiche "open: No such file or directory"
        printf("errno = %d\n", errno);
        return (1);
    }
    
    close(fd);
    
    return (0);
}
```

**Output:**
```
open: No such file or directory
errno = 2
```

## Codes d'erreur courants

| Constante | Valeur | Signification |
|-----------|--------|---------------|
| `ENOENT` | 2 | Fichier non trouvé |
| `EACCES` | 13 | Permission refusée |
| `EEXIST` | 17 | Fichier existe déjà |
| `EINVAL` | 22 | Argument invalide |
| `EMFILE` | 24 | Trop de fichiers ouverts |
| `ENOSPC` | 28 | Espace disque insuffisant |
| `EPERM` | 1 | Opération non permise |

## Vérifier errno

```c
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int fd = open("file.txt", O_RDONLY);
    
    if (fd == -1)
    {
        if (errno == ENOENT)
            printf("Fichier n'existe pas\n");
        else if (errno == EACCES)
            printf("Permission refusée\n");
        else
            printf("Erreur inconnue: %d\n", errno);
    }
    
    return (0);
}
```

## strerror() - Message d'erreur

```c
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int fd = open("inexistant.txt", O_RDONLY);
    
    if (fd == -1)
    {
        printf("Erreur: %s\n", strerror(errno));
    }
    
    return (0);
}
```

## ✅ Bonnes pratiques

1. **Vérifier immédiatement** après appel qui peut échouer
2. **Utiliser perror()** pour les messages simples
3. **Utiliser strerror()** pour plus de contrôle
4. **Ne pas oublier:** errno peut être modifié à tout moment
5. **Sauvegarder** errno si besoin d'autres appels

---

**Prochainement: Lib_stdarg.md** 👉 Arguments variables
