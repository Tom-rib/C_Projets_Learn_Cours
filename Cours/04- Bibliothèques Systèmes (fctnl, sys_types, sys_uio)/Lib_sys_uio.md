# 📚 Lib_sys/uio.h - I/O Vectorielle

## À quoi sert sys/uio.h?

La bibliothèque **sys/uio.h** contient:
- ✅ readv() - Lire dans plusieurs buffers
- ✅ writev() - Écrire depuis plusieurs buffers
- ✅ struct iovec - Structure pour les buffers

C'est utile quand on a plusieurs zones de mémoire à lire/écrire!

## À inclure

```c
#include <sys/uio.h>
```

## struct iovec - Structure d'un buffer

```c
struct iovec {
    void  *iov_base;   // Pointeur vers les données
    size_t iov_len;    // Taille des données
};
```

## readv() - Lire dans plusieurs buffers

**Syntaxe:**
```c
ssize_t readv(int fd, const struct iovec *iov, int iovcnt);
```

**Paramètres:**
- `fd`: Descripteur de fichier
- `iov`: Tableau de iovec
- `iovcnt`: Nombre d'éléments dans le tableau

**Retour:** Nombre de bytes lus

### Exemple simple

```c
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd = open("donnees.txt", O_RDONLY);
    if (fd == -1)
        return (1);
    
    char buffer1[10];
    char buffer2[20];
    
    struct iovec iov[2];
    iov[0].iov_base = buffer1;
    iov[0].iov_len = sizeof(buffer1);
    iov[1].iov_base = buffer2;
    iov[1].iov_len = sizeof(buffer2);
    
    ssize_t bytes = readv(fd, iov, 2);
    
    printf("Lus %ld bytes\n", bytes);
    printf("Buffer1: %.10s\n", buffer1);
    printf("Buffer2: %.20s\n", buffer2);
    
    close(fd);
    
    return (0);
}
```

## writev() - Écrire depuis plusieurs buffers

**Syntaxe:**
```c
ssize_t writev(int fd, const struct iovec *iov, int iovcnt);
```

### Exemple simple

```c
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(void)
{
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
        return (1);
    
    char *part1 = "Première partie\n";
    char *part2 = "Deuxième partie\n";
    char *part3 = "Troisième partie\n";
    
    struct iovec iov[3];
    iov[0].iov_base = part1;
    iov[0].iov_len = strlen(part1);
    iov[1].iov_base = part2;
    iov[1].iov_len = strlen(part2);
    iov[2].iov_base = part3;
    iov[2].iov_len = strlen(part3);
    
    ssize_t bytes = writev(fd, iov, 3);
    
    printf("Écrits %ld bytes\n", bytes);
    
    close(fd);
    
    return (0);
}
```

## Avantage: Appel système unique

Sans iovec (plusieurs write()):
```c
write(fd, part1, strlen(part1));  // 1er appel
write(fd, part2, strlen(part2));  // 2e appel
write(fd, part3, strlen(part3));  // 3e appel
```

Avec iovec (un seul writev()):
```c
writev(fd, iov, 3);  // UN appel système
```

C'est plus rapide!

## 🎓 Exemple complet: Fusionner plusieurs fichiers

```c
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>

int main(void)
{
    // Ouvrir les fichiers sources
    int f1 = open("fichier1.txt", O_RDONLY);
    int f2 = open("fichier2.txt", O_RDONLY);
    int f3 = open("fichier3.txt", O_RDONLY);
    
    if (f1 == -1 || f2 == -1 || f3 == -1)
    {
        printf("Erreur ouverture\n");
        return (1);
    }
    
    // Créer destination
    int output = open("fusion.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (output == -1)
        return (1);
    
    // Lire et fusionner
    char buf1[256], buf2[256], buf3[256];
    
    ssize_t bytes1 = read(f1, buf1, sizeof(buf1));
    ssize_t bytes2 = read(f2, buf2, sizeof(buf2));
    ssize_t bytes3 = read(f3, buf3, sizeof(buf3));
    
    if (bytes1 > 0 && bytes2 > 0 && bytes3 > 0)
    {
        struct iovec iov[3];
        iov[0].iov_base = buf1;
        iov[0].iov_len = bytes1;
        iov[1].iov_base = buf2;
        iov[1].iov_len = bytes2;
        iov[2].iov_base = buf3;
        iov[2].iov_len = bytes3;
        
        writev(output, iov, 3);
    }
    
    close(f1);
    close(f2);
    close(f3);
    close(output);
    
    printf("Fusion complétée!\n");
    
    return (0);
}
```

## 🎓 Exemple: Buffer circulaire

```c
#include <sys/iov.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd = open("circular.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
        return (1);
    
    // Simule un buffer circulaire
    char buffer[100];
    char *start = buffer + 30;  // Commencer au milieu
    char *end = buffer + 100;
    
    // Remplir
    for (int i = 0; i < 70; i++)
        buffer[30 + i] = 'A' + (i % 26);
    
    // Écrire en deux morceaux (si données enroulent)
    struct iovec iov[2];
    iov[0].iov_base = start;
    iov[0].iov_len = 50;
    iov[1].iov_base = buffer;
    iov[1].iov_len = 20;
    
    writev(fd, iov, 2);
    
    close(fd);
    
    printf("Circular buffer écrit\n");
    
    return (0);
}
```

## Limitations de iovec

Attention au nombre d'éléments!

```c
#include <sys/uio.h>
#include <stdio.h>

#ifdef IOV_MAX
    // IOV_MAX est défini (souvent 1024)
#else
    // Use POSIX minimum (16)
#endif

int main(void)
{
    printf("IOV_MAX = %d\n", IOV_MAX);
    
    return (0);
}
```

**Ne pas dépasser IOV_MAX éléments!**

## ⚠️ Erreurs courantes

### Erreur 1: Oublier d'initialiser iov

```c
// ❌ MAUVAIS
struct iovec iov[2];
writev(fd, iov, 2);  // iov_base et iov_len non initialisés!

// ✅ BON
iov[0].iov_base = buffer1;
iov[0].iov_len = size1;
iov[1].iov_base = buffer2;
iov[1].iov_len = size2;
writev(fd, iov, 2);
```

### Erreur 2: Mauvais nombre d'éléments

```c
// ❌ MAUVAIS
struct iovec iov[3];
writev(fd, iov, 5);  // Trop d'éléments!

// ✅ BON
struct iovec iov[3];
writev(fd, iov, 3);  // Bon nombre
```

## ✅ Bonnes pratiques

1. **Initialiser tous les champs** iov_base et iov_len
2. **Respecter IOV_MAX** (ne pas dépasser le limite)
3. **Vérifier le retour** de readv/writev
4. **Utiliser readv/writev** plutôt que plusieurs read/write
5. **Aligner les buffers** si possible (performance)

## 🚀 Pour Runtrack C

### Jour 4-5: Minishell avancé
Tu pourrais utiliser writev() pour afficher plusieurs chaînes efficacement

### Performance
writev() est plus rapide qu'appels multiples de write()

---

**ÉTAPE 4 TERMINÉE!** 👉 3 fichiers créés!
