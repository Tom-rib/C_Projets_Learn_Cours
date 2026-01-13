# Bibliothèque unistd.h - Fonctions Système POSIX

## À quoi sert unistd.h ?

Fournit l'accès aux API POSIX (Portable Operating System Interface) : fichiers, processus, pipes, etc.

**À inclure** :
```c
#include <unistd.h>
```

## write() - Écrire sur un descripteur de fichier

Écrit n octets depuis un buffer vers un descripteur de fichier.

**Syntaxe** :
```c
ssize_t write(int fd, const void *buf, size_t count);
```

**Paramètres** :
- `fd` : Descripteur de fichier (0=stdin, 1=stdout, 2=stderr)
- `buf` : Buffer contenant les données à écrire
- `count` : Nombre de octets à écrire

**Retour** :
- Nombre d'octets écrits (peut être < count)
- -1 si erreur

## Exemple : Écrire sur stdout

```c
#include <unistd.h>

int main(void)
{
    char message[] = "Hello, World!\n";
    
    write(1, message, 14);  // 1 = stdout
    
    return (0);
}
```

## Comparer write() et printf()

```c
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello";
    
    // Avec printf (buffurisé)
    printf("Printf: %s\n", str);
    
    // Avec write (direct)
    write(1, "Write: ", 7);
    write(1, str, strlen(str));
    write(1, "\n", 1);
    
    return (0);
}
```

## my_putchar avec write

Implémentation de my_putchar utilisant write (comme demandé dans Runtrack):

```c
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    my_putchar('H');
    my_putchar('i');
    my_putchar('\n');
    
    return (0);
}
```

## my_putstr avec my_putchar

Implémentation de my_putstr utilisant my_putchar:

```c
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    if (str == NULL)
        return;
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        my_putchar(str[i]);
    }
}

int main(void)
{
    my_putstr("Hello, World!\n");
    my_putstr("Bienvenue!\n");
    
    return (0);
}
```

## read() - Lire depuis un descripteur de fichier

Lit jusqu'à n octets depuis un descripteur de fichier vers un buffer.

**Syntaxe** :
```c
ssize_t read(int fd, void *buf, size_t count);
```

**Paramètres** :
- `fd` : Descripteur de fichier (0=stdin, 1=stdout, 2=stderr)
- `buf` : Buffer où stocker les données lues
- `count` : Nombre maximum d'octets à lire

**Retour** :
- Nombre d'octets lus (0 si EOF)
- -1 si erreur

**Exemple** :
```c
#include <unistd.h>

int main(void)
{
    char buffer[100];
    
    read(0, buffer, 99);  // 0 = stdin
    
    write(1, "Vous avez écrit: ", 17);
    write(1, buffer, 99);
    
    return (0);
}
```

## close() - Fermer un descripteur de fichier

Ferme un descripteur de fichier ouvert.

**Syntaxe** :
```c
int close(int fd);
```

**Exemple** :
```c
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
    // Ouvrir un fichier
    int fd = open("fichier.txt", O_RDONLY);
    
    if (fd == -1)
    {
        write(2, "Erreur d'ouverture\n", 19);
        return (1);
    }
    
    // Lire le fichier...
    
    close(fd);  // Fermer
    
    return (0);
}
```

## Descripteurs de fichier standard

| Numéro | Nom | Signification |
|---|---|---|
| 0 | stdin | Entrée standard (clavier) |
| 1 | stdout | Sortie standard (écran) |
| 2 | stderr | Sortie d'erreur (écran) |

## Exemple : Copier stdin vers stdout

```c
#include <unistd.h>

int main(void)
{
    char buffer[1024];
    ssize_t bytes_read;
    
    // Lire depuis stdin et écrire sur stdout
    while ((bytes_read = read(0, buffer, 1024)) > 0)
    {
        write(1, buffer, bytes_read);
    }
    
    return (0);
}
```

## Avantages de write() par rapport à printf()

```c
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    // printf est buffurisé
    printf("Message");
    // Peut ne pas apparaître immédiatement
    
    // write est non-buffurisé
    write(1, "Message", 7);
    // Apparaît immédiatement
    
    return (0);
}
```

## Gestion des erreurs avec write()

```c
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    char message[] = "Hello\n";
    ssize_t result = write(1, message, 6);
    
    if (result == -1)
    {
        perror("write");  // Affiche le message d'erreur
        return (1);
    }
    
    printf("Bytes written: %ld\n", result);
    
    return (0);
}
```

## sleep() - Pause d'exécution

Pause le programme pendant n secondes.

**Syntaxe** :
```c
unsigned int sleep(unsigned int seconds);
```

**Exemple** :
```c
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    for (int i = 5; i > 0; i--)
    {
        printf("Démarrage dans %d...\n", i);
        sleep(1);
    }
    
    printf("C'est parti!\n");
    
    return (0);
}
```

## usleep() - Pause en microsecondes

Pause le programme pour n microsecondes (millionièmes de secondes).

**Syntaxe** :
```c
int usleep(useconds_t usec);
```

**Exemple** :
```c
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        printf(".");
        fflush(stdout);
        usleep(500000);  // 0.5 secondes
    }
    printf("\n");
    
    return (0);
}
```

## Bonnes pratiques pour Runtrack

1. **Utiliser write() pour my_putchar** (c'est la fonction autorisée)
2. **Toujours vérifier le retour** de read/write
3. **Utiliser les bons descripteurs** : 0 (stdin), 1 (stdout), 2 (stderr)
4. **Ne pas oublier les newlines** ('\n') quand nécessaire
5. **write() ne formate pas**, contrairement à printf
6. **Boucler si write() écrit moins de bytes** que demandé
7. **Fermer les fichiers** quand vous en avez fini

## Résumé des descripteurs de fichier

```c
#include <unistd.h>

int main(void)
{
    // Écrire sur stdout
    write(1, "Message normal\n", 15);
    
    // Écrire sur stderr
    write(2, "Message d'erreur\n", 17);
    
    // Lire depuis stdin
    char buffer[100];
    read(0, buffer, 100);
    
    return (0);
}
```

## Référence rapide

| Fonction | Rôle |
|---|---|
| `write(fd, buf, count)` | Écrire dans un FD |
| `read(fd, buf, count)` | Lire depuis un FD |
| `close(fd)` | Fermer un FD |
| `sleep(sec)` | Pause en secondes |
| `usleep(usec)` | Pause en microsecondes |

## Notes importantes

- unistd.h n'est pas standard C, c'est POSIX (fonctionne sur Linux/macOS/WSL)
- write() est non-buffurisé contrairement à printf()
- Les retours négatifs indiquent une erreur (errno est défini)
- Utilisez strerror() ou perror() pour afficher les erreurs
