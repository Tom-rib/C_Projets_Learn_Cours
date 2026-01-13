# 📚 Lib_fcntl.h - Contrôle et Manipulation des Fichiers

## À quoi sert fcntl.h?

La bibliothèque **fcntl.h** contient:
- ✅ Ouvrir des fichiers (open)
- ✅ Flags de contrôle (O_RDONLY, O_WRONLY, O_CREAT, etc.)
- ✅ Permissions (0644, 0755, etc.)
- ✅ Contrôler les descripteurs de fichiers (fcntl)

## À inclure

```c
#include <fcntl.h>
```

## open() - Ouvrir un fichier

**Syntaxe:**
```c
int open(const char *pathname, int flags);
int open(const char *pathname, int flags, mode_t mode);
```

**Retour:** Descripteur de fichier (>= 0) ou -1 si erreur

### Flags courants

| Flag | Signification |
|------|---------------|
| `O_RDONLY` | Lecture seule |
| `O_WRONLY` | Écriture seule |
| `O_RDWR` | Lecture + Écriture |
| `O_CREAT` | Créer si n'existe pas |
| `O_EXCL` | Échouer si existe (avec O_CREAT) |
| `O_TRUNC` | Vider le fichier |
| `O_APPEND` | Ajouter à la fin |
| `O_NONBLOCK` | Non-bloquant |

## Ouvrir en lecture

```c
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int fd = open("fichier.txt", O_RDONLY);
    
    if (fd == -1)
    {
        perror("open");  // Afficher erreur système
        return (1);
    }
    
    // Utiliser fd...
    
    close(fd);
    
    return (0);
}
```

## Ouvrir en écriture

```c
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int fd = open("output.txt", O_WRONLY);
    
    if (fd == -1)
        return (1);
    
    write(fd, "Contenu\n", 8);
    close(fd);
    
    return (0);
}
```

## Créer un fichier

```c
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int fd = open("nouveau.txt", O_WRONLY | O_CREAT, 0644);
    
    if (fd == -1)
        return (1);
    
    write(fd, "Nouveau fichier\n", 16);
    close(fd);
    
    return (0);
}
```

### O_CREAT avec mode

**Mode (permissions):**
- `0644` = rw- r-- r-- (propriétaire peut lire/écrire, autres lecture)
- `0600` = rw- --- --- (seulement propriétaire)
- `0755` = rwx r-x r-x
- `0777` = rwx rwx rwx (tous les droits)

## Créer et échouer si existe

```c
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    // Créer SEULEMENT si n'existe pas
    int fd = open("unique.txt", O_WRONLY | O_CREAT | O_EXCL, 0644);
    
    if (fd == -1)
    {
        perror("File already exists");
        return (1);
    }
    
    close(fd);
    
    return (0);
}
```

## Ajouter à la fin du fichier

```c
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int fd = open("log.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
    
    if (fd == -1)
        return (1);
    
    write(fd, "Nouvelle ligne\n", 15);  // Ajoutée à la fin
    close(fd);
    
    return (0);
}
```

## Écraser le fichier

```c
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    // Créer/écraser le fichier
    int fd = open("data.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    
    if (fd == -1)
        return (1);
    
    write(fd, "Nouveau contenu\n", 16);
    close(fd);
    
    return (0);
}
```

## fcntl() - Contrôler les flags

**Syntaxe:**
```c
int fcntl(int fd, int cmd, ...);
```

### Exemples courants

```c
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int fd = open("test.txt", O_RDONLY);
    
    // Obtenir les flags actuels
    int flags = fcntl(fd, F_GETFL);
    
    // Vérifier si O_NONBLOCK est activé
    if (flags & O_NONBLOCK)
        printf("Non-bloquant\n");
    
    // Ajouter O_NONBLOCK
    fcntl(fd, F_SETFL, flags | O_NONBLOCK);
    
    close(fd);
    
    return (0);
}
```

## 🎓 Exemple complet: Copier un fichier

```c
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    // Ouvrir source en lecture
    int src = open("source.txt", O_RDONLY);
    if (src == -1)
    {
        perror("source");
        return (1);
    }
    
    // Créer destination
    int dst = open("destination.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (dst == -1)
    {
        perror("destination");
        close(src);
        return (1);
    }
    
    // Copier par blocs
    char buffer[4096];
    ssize_t bytes;
    
    while ((bytes = read(src, buffer, sizeof(buffer))) > 0)
    {
        if (write(dst, buffer, bytes) == -1)
        {
            perror("write");
            close(src);
            close(dst);
            return (1);
        }
    }
    
    if (bytes == -1)
        perror("read");
    
    close(src);
    close(dst);
    
    printf("Fichier copié!\n");
    
    return (0);
}
```

## 🎓 Exemple: Lire/afficher un fichier

```c
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <fichier>\n", argv[0]);
        return (1);
    }
    
    int fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("open");
        return (1);
    }
    
    char buffer[256];
    ssize_t bytes;
    
    while ((bytes = read(fd, buffer, sizeof(buffer))) > 0)
        write(1, buffer, bytes);  // Écrire sur stdout
    
    if (bytes == -1)
        perror("read");
    
    close(fd);
    
    return (0);
}
```

## Vérifier les erreurs avec perror

```c
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int fd = open("inexistant.txt", O_RDONLY);
    
    if (fd == -1)
    {
        perror("Error");  // Affiche "Error: No such file or directory"
        fprintf(stderr, "errno = %d\n", errno);
        return (1);
    }
    
    close(fd);
    
    return (0);
}
```

## ⚠️ Erreurs courantes

### Erreur 1: Oublier les paramètres

```c
// ❌ MAUVAIS
int fd = open("test.txt");  // Pas assez de paramètres!

// ✅ BON
int fd = open("test.txt", O_RDONLY);
```

### Erreur 2: Oublier de vérifier le retour

```c
// ❌ MAUVAIS
int fd = open("test.txt", O_RDONLY);
read(fd, buf, 100);  // fd peut être -1!

// ✅ BON
int fd = open("test.txt", O_RDONLY);
if (fd == -1)
    return (1);
read(fd, buf, 100);
```

### Erreur 3: Mauvaise combinaison de flags

```c
// ❌ MAUVAIS
int fd = open("test.txt", O_RDONLY | O_WRONLY);  // Logiquement incohérent!

// ✅ BON
int fd = open("test.txt", O_RDWR);  // Lecture ET écriture
```

## ✅ Bonnes pratiques

1. **Vérifier le retour** d'open (-1 = erreur)
2. **Fermer avec close()** après utilisation
3. **Utiliser perror()** pour afficher les erreurs
4. **Utiliser les bonnes permissions** (0644 par défaut)
5. **Combiner les flags** avec `|` (OR bitwise)
6. **Utiliser O_CREAT | O_EXCL** pour créer de façon sûre

## 🚀 Pour Runtrack C

### Jour 2-3: Lire/écrire des fichiers
Tu vas utiliser open(), read(), write(), close()

### Jour 4-5: Minishell
Tu vas utiliser open() pour la redirection de fichiers
Tu vas gérer O_RDONLY, O_WRONLY, O_APPEND

---

**Prochainement: Lib_sys_types.md** 👉 Types système (pid_t, mode_t, etc.)
