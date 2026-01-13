# 📚 Lib_unistd.h - POSIX API (Fonctions Système)

## À quoi sert unistd.h?

La bibliothèque **unistd.h** contient les **fonctions système POSIX**:
- ✅ Écrire dans un descripteur (write)
- ✅ Lire depuis un descripteur (read)
- ✅ Fermer un descripteur (close)
- ✅ Créer processus (fork)
- ✅ Exécuter programme (exec*)

C'est **plus bas niveau** que printf/scanf!

## À inclure

```c
#include <unistd.h>
#include <fcntl.h>    // Pour open()
```

## write() - Écrire dans un descripteur

**Syntaxe:**
```c
ssize_t write(int fd, const void *buf, size_t count);
```

**Paramètres:**
- `fd`: Descripteur (1 = stdout, 2 = stderr)
- `buf`: Données à écrire
- `count`: Nombre de bytes

**Retour:** Nombre de bytes écrits (ou -1 si erreur)

### Écrire sur stdout

```c
#include <unistd.h>

int main(void)
{
    write(1, "Bonjour!\n", 9);  // 9 = strlen + \n
    
    return (0);
}
```

### Écrire sur stderr

```c
#include <unistd.h>

int main(void)
{
    write(2, "Erreur!\n", 8);  // Erreur sur stderr
    
    return (0);
}
```

## read() - Lire depuis un descripteur

**Syntaxe:**
```c
ssize_t read(int fd, void *buf, size_t count);
```

**Paramètres:**
- `fd`: Descripteur (0 = stdin)
- `buf`: Où stocker les données
- `count`: Nombre de bytes à lire

**Retour:** Nombre de bytes lus (0 = EOF, -1 = erreur)

### Lire depuis stdin

```c
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    char buffer[20];
    ssize_t bytes = read(0, buffer, 20);
    
    if (bytes > 0)
        write(1, buffer, bytes);
    
    return (0);
}
```

## Différence write vs printf

| Fonction | Type | Niveau |
|----------|------|--------|
| `write()` | Bas niveau | Système |
| `printf()` | Haut niveau | Bibliothèque |

```c
// Identique:
printf("Bonjour\n");
write(1, "Bonjour\n", 9);  // 1 = stdout
```

## Travailler avec des fichiers

### Ouvrir un fichier

```c
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
    int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
    
    if (fd == -1)
    {
        write(2, "Erreur\n", 7);
        return (1);
    }
    
    write(fd, "Contenu\n", 8);
    close(fd);
    
    return (0);
}
```

## close() - Fermer un descripteur

**Syntaxe:**
```c
int close(int fd);
```

**Retour:** 0 si succès, -1 si erreur

### Exemple

```c
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
    int fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
    
    if (fd == -1)
        return (1);
    
    write(fd, "Données\n", 8);
    close(fd);  // Fermer le fichier
    
    return (0);
}
```

⚠️ **Important:** Toujours fermer les fichiers!

## Descripteurs de fichiers courants

| FD | Nom | Signification |
|----|-----|---------------|
| 0 | stdin | Entrée standard |
| 1 | stdout | Sortie standard |
| 2 | stderr | Erreur standard |
| 3+ | Fichiers | Fichiers ouverts |

## O_WRONLY vs O_RDONLY vs O_RDWR

```c
#include <fcntl.h>

// Lecture seule
int fd1 = open("file.txt", O_RDONLY);

// Écriture seule
int fd2 = open("file.txt", O_WRONLY);

// Lecture + Écriture
int fd3 = open("file.txt", O_RDWR);

// Créer et écrire (écrase si existe)
int fd4 = open("file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
```

## Permissions (0644)

```
0644 = rw- r-- r--
  |    |   |   |
  |    |   |   +-- Autres: lecture (4)
  |    |   +------ Groupe: lecture (4)
  |    +---------- Propriétaire: lecture+écriture (6)
  +-------------- Octal
```

Autres permissions courantes:
- `0600`: Seulement propriétaire
- `0755`: rwx r-x r-x
- `0644`: rw- r-- r-- (standard)

## 🎓 Exemple complet: Copier un fichier

```c
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    // Ouvrir source
    int src = open("source.txt", O_RDONLY);
    if (src == -1)
    {
        write(2, "Erreur source\n", 14);
        return (1);
    }
    
    // Créer destination
    int dst = open("destination.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (dst == -1)
    {
        write(2, "Erreur destination\n", 19);
        close(src);
        return (1);
    }
    
    // Copier
    char buffer[1024];
    ssize_t bytes;
    
    while ((bytes = read(src, buffer, 1024)) > 0)
    {
        write(dst, buffer, bytes);
    }
    
    // Fermer les fichiers
    close(src);
    close(dst);
    
    write(1, "Fichier copié!\n", 15);
    
    return (0);
}
```

## fork() - Créer un processus enfant

**Syntaxe:**
```c
pid_t fork(void);
```

**Retour:**
- `0` dans l'enfant
- `PID` de l'enfant dans le parent
- `-1` si erreur

### Exemple simple

```c
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    pid_t pid = fork();
    
    if (pid == -1)
    {
        printf("Erreur fork\n");
        return (1);
    }
    else if (pid == 0)
    {
        printf("Je suis l'enfant\n");
    }
    else
    {
        printf("Je suis le parent (enfant: %d)\n", pid);
    }
    
    return (0);
}
```

## execve() - Exécuter un programme

**Syntaxe:**
```c
int execve(const char *filename, char *const argv[], char *const envp[]);
```

### Exemple

```c
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    char *args[] = {"ls", "-la", NULL};
    char *env[] = {NULL};
    
    execve("/bin/ls", args, env);
    
    // N'arrive jamais ici si execve réussit!
    printf("Erreur execve\n");
    
    return (1);
}
```

⚠️ **Important:** execve remplace le processus actuel!

## fork + execve = Shell

```c
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
    pid_t pid = fork();
    
    if (pid == 0)
    {
        // Enfant exécute la commande
        char *args[] = {"ls", "-la", NULL};
        execve("/bin/ls", args, NULL);
    }
    else
    {
        // Parent attend l'enfant
        wait(NULL);
    }
    
    return (0);
}
```

## ⚠️ Erreurs courantes

### Erreur 1: Oublier close()

```c
// ❌ MAUVAIS
int fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
write(fd, "data", 4);
// Pas de close!

// ✅ BON
int fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
write(fd, "data", 4);
close(fd);
```

### Erreur 2: Oublier O_CREAT avec O_WRONLY

```c
// ❌ ERREUR (fichier n'existe pas)
int fd = open("nouveau.txt", O_WRONLY);

// ✅ BON
int fd = open("nouveau.txt", O_WRONLY | O_CREAT, 0644);
```

### Erreur 3: Ne pas vérifier open()

```c
// ❌ MAUVAIS
int fd = open("file.txt", O_RDONLY);
write(fd, "data", 4);  // fd = -1, crash!

// ✅ BON
int fd = open("file.txt", O_RDONLY);
if (fd == -1)
    return (1);
write(fd, "data", 4);
```

## ✅ Bonnes pratiques

1. **Vérifier le retour** d'open (== -1 = erreur)
2. **Toujours close()** les fichiers
3. **Utiliser les bons flags** (O_WRONLY, O_CREAT, etc.)
4. **Gérer les permissions** (0644 par défaut)
5. **Vérifier read/write** (retour > 0)
6. **Utiliser fork() + wait()** pour attendre enfants

## 🚀 Pour Runtrack C

### Jour 1 - Job 01: my_putchar
Tu vas utiliser write() directement!

### Jour 1 - Job 02: my_putstr
Tu vas utiliser write() dans une boucle

### Jour 2-3: Lire/écrire des fichiers
Tu vas utiliser open/read/write/close

### Jour 4-5: Minishell
Tu vas utiliser fork/execve pour lancer des commandes!

---

**ÉTAPE 2 TERMINÉE!** 👉 4 fichiers essentiels créés!
