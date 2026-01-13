# 📚 Lib_sys/types.h - Types Système

## À quoi sert sys/types.h?

La bibliothèque **sys/types.h** définit:
- ✅ pid_t (Process ID)
- ✅ mode_t (Permissions de fichier)
- ✅ off_t (Taille de fichier)
- ✅ size_t (Taille)
- ✅ ssize_t (Taille signée)
- ✅ time_t (Temps)

## À inclure

```c
#include <sys/types.h>
```

**Note:** Souvent inclus automatiquement par d'autres headers!

## pid_t - Process ID

Type pour représenter un ID de processus

### Utilisation avec fork()

```c
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main(void)
{
    pid_t pid = fork();
    
    if (pid == -1)
        printf("Erreur fork\n");
    else if (pid == 0)
        printf("Je suis l'enfant (pid=%d)\n", getpid());
    else
        printf("Je suis le parent (enfant pid=%d)\n", pid);
    
    return (0);
}
```

## getpid() - Obtenir le PID courant

```c
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main(void)
{
    pid_t mon_pid = getpid();
    pid_t parent_pid = getppid();
    
    printf("Mon PID: %d\n", mon_pid);
    printf("PID du parent: %d\n", parent_pid);
    
    return (0);
}
```

## mode_t - Permissions de fichier

Type pour représenter les permissions (0644, 0755, etc.)

### Utilisation avec open()

```c
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
    mode_t permissions = 0644;  // rw- r-- r--
    
    int fd = open("fichier.txt", O_WRONLY | O_CREAT, permissions);
    
    if (fd == -1)
        return (1);
    
    close(fd);
    
    return (0);
}
```

### Utilisation avec chmod()

```c
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
    mode_t new_perms = 0755;  // rwx r-x r-x
    
    chmod("script.sh", new_perms);
    
    return (0);
}
```

## off_t - Offset de fichier

Type pour positions dans les fichiers (grande valeur)

### Utilisation avec lseek()

```c
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int main(void)
{
    int fd = open("fichier.txt", O_RDONLY);
    
    if (fd == -1)
        return (1);
    
    off_t pos = lseek(fd, 10, SEEK_SET);  // Aller à byte 10
    
    if (pos == -1)
        return (1);
    
    printf("Position: %ld\n", pos);
    
    close(fd);
    
    return (0);
}
```

## size_t et ssize_t

- **size_t:** Taille non-signée (pour malloc, strlen)
- **ssize_t:** Taille signée (pour read, write, peut être -1 pour erreur)

### Exemple avec read()

```c
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int main(void)
{
    int fd = open("fichier.txt", O_RDONLY);
    
    if (fd == -1)
        return (1);
    
    char buffer[256];
    ssize_t bytes = read(fd, buffer, sizeof(buffer));
    
    if (bytes == -1)
        return (1);  // Erreur
    
    printf("Lus %ld bytes\n", bytes);
    
    close(fd);
    
    return (0);
}
```

## time_t - Temps

Type pour représenter des timestamps

```c
#include <time.h>
#include <sys/types.h>
#include <stdio.h>

int main(void)
{
    time_t now = time(NULL);
    
    printf("Timestamp: %ld\n", (long)now);
    
    return (0);
}
```

## Constantes de permissions

| Octet | Signification |
|-------|---------------|
| `0644` | rw- r-- r-- (fichier normal) |
| `0755` | rwx r-x r-x (exécutable) |
| `0600` | rw- --- --- (privé) |
| `0777` | rwx rwx rwx (tous les droits) |
| `0444` | r-- r-- r-- (lecture seule) |

### Décomposition: 0755

```
0755
│└─ Autres: r-x = 5
 └─ Groupe: r-x = 5
└─ Propriétaire: rwx = 7
```

- `r (read)` = 4
- `w (write)` = 2
- `x (execute)` = 1

## 🎓 Exemple: Process parent-enfant

```c
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>

int main(void)
{
    pid_t pid = fork();
    
    if (pid == -1)
    {
        printf("Erreur fork\n");
        return (1);
    }
    
    if (pid == 0)
    {
        // Processus enfant
        printf("Enfant: mon PID = %d\n", getpid());
        printf("Enfant: PID parent = %d\n", getppid());
        return (0);
    }
    else
    {
        // Processus parent
        printf("Parent: mon PID = %d\n", getpid());
        printf("Parent: PID enfant = %d\n", pid);
        
        wait(NULL);  // Attendre l'enfant
        printf("Parent: enfant terminé\n");
    }
    
    return (0);
}
```

## ✅ Bonnes pratiques

1. **Vérifier les retours** de getpid(), fork()
2. **Utiliser pid_t** pour les PID
3. **Utiliser mode_t** pour les permissions
4. **Utiliser ssize_t** pour read/write (peut être -1)
5. **Toujours attendre** les enfants avec wait()

## 🚀 Pour Runtrack C

### Jour 3-4: Minishell
Tu vas utiliser fork() pour créer des processus
Tu vas utiliser getpid() pour déboguer

### Jour 4-5: Minishell avancé
Tu vas gérer les permissions avec mode_t
Tu vas utiliser wait() pour attendre les enfants

---

**Prochainement: Lib_sys_uio.md** 👉 I/O Vectorielle
