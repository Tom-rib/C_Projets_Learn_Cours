# 📚 Lib_signal.h - Gestion des Signaux

## À quoi sert signal.h?

La bibliothèque **signal.h** permet:
- ✅ Gérer Ctrl+C (SIGINT)
- ✅ Gérer SIGTERM (arrêt)
- ✅ Gérer SIGSEGV (segmentation fault)
- ✅ Installer des handlers (fonctions de gestion)
- ✅ Capturer les signaux

## À inclure

```c
#include <signal.h>
```

## Signaux courants

| Signal | Numéro | Signification |
|--------|--------|---------------|
| `SIGINT` | 2 | Ctrl+C |
| `SIGTERM` | 15 | Terminaison |
| `SIGSEGV` | 11 | Segmentation fault |
| `SIGKILL` | 9 | Arrêt forcé (non interceptable) |
| `SIGALRM` | 14 | Alarme |
| `SIGCHLD` | 17 | Enfant terminé |

## signal() - Installer un handler

**Syntaxe:**
```c
void (*signal(int sig, void (*func)(int)))(int);
```

Ou plus simplement:
```c
signal(SIGINT, ma_fonction);  // Ma fonction gère SIGINT
```

### Exemple simple: Gérer Ctrl+C

```c
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handler_ctrl_c(int sig)
{
    printf("\n\nCtrl+C détecté! Signal: %d\n", sig);
    printf("Nettoyage...\n");
    exit(0);
}

int main(void)
{
    signal(SIGINT, handler_ctrl_c);  // Installer le handler
    
    printf("Appuie sur Ctrl+C pour arrêter...\n");
    
    while (1)
    {
        printf("En attente...\n");
        sleep(1);
    }
    
    return (0);
}
```

**Exécution:**
```bash
$ ./programme
Appuie sur Ctrl+C pour arrêter...
En attente...
En attente...
^C                    ← Appui Ctrl+C
Ctrl+C détecté! Signal: 2
Nettoyage...
```

## Ignorer un signal

```c
#include <stdio.h>
#include <signal.h>

int main(void)
{
    signal(SIGINT, SIG_IGN);  // Ignorer Ctrl+C
    
    while (1)
    {
        printf("Ctrl+C ne fonctionne pas!\n");
        sleep(1);
    }
    
    return (0);
}
```

Pour arrêter: `kill -SIGKILL <pid>` ou `killall -9 programme`

## Restaurer le comportement par défaut

```c
signal(SIGINT, SIG_DFL);  // Restaurer le comportement par défaut
```

## Variable globale pour communiquer

```c
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

volatile int stop = 0;  // volatile = peut changer n'importe quand

void handler_sigint(int sig)
{
    printf("\nSignal reçu\n");
    stop = 1;  // Arrêter la boucle
}

int main(void)
{
    signal(SIGINT, handler_sigint);
    
    printf("Appuie sur Ctrl+C...\n");
    
    while (!stop)
    {
        printf("En cours...\n");
        sleep(1);
    }
    
    printf("Arrêté proprement\n");
    
    return (0);
}
```

## Gérer plusieurs signaux

```c
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

volatile int interrupted = 0;

void handler_int(int sig)
{
    printf("\n[SIGINT] Ctrl+C détecté\n");
    interrupted = 1;
}

void handler_term(int sig)
{
    printf("\n[SIGTERM] Terminaison demandée\n");
    interrupted = 1;
}

int main(void)
{
    signal(SIGINT, handler_int);    // Ctrl+C
    signal(SIGTERM, handler_term);  // kill
    
    printf("Processus en attente...\n");
    
    while (!interrupted)
        sleep(1);
    
    printf("Nettoyage...\n");
    
    return (0);
}
```

## Alarme (SIGALRM)

```c
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void timeout_handler(int sig)
{
    printf("Timeout! Trop long!\n");
    exit(1);
}

int main(void)
{
    signal(SIGALRM, timeout_handler);
    
    alarm(5);  // Alarme après 5 secondes
    
    printf("Attendez 5 secondes...\n");
    sleep(10);  // Essayer d'attendre 10 secondes
    
    printf("Pas d'alarme (désarmée)\n");
    
    return (0);
}
```

## ⚠️ Limitations

**N'appelle QUE du code signal-safe!**

Fonctions sûres: `write()`, `exit()`, `signal()`
Fonctions DANGEREUSES: `printf()`, `malloc()`, `free()`

```c
// ❌ MAUVAIS
void handler(int sig)
{
    printf("Signal reçu\n");  // printf n'est pas signal-safe!
}

// ✅ BON
void handler(int sig)
{
    write(1, "Signal recu\n", 12);  // write est signal-safe
}
```

## 🎓 Exemple complet: Serveur propre

```c
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

volatile sig_atomic_t should_stop = 0;

void cleanup(int sig)
{
    write(1, "\nArrêt du serveur...\n", 21);
    should_stop = 1;
}

void open_server(void)
{
    write(1, "Serveur démarré\n", 16);
}

void close_server(void)
{
    write(1, "Serveur arrêté\n", 15);
}

int main(void)
{
    signal(SIGINT, cleanup);
    signal(SIGTERM, cleanup);
    
    open_server();
    
    while (!should_stop)
    {
        write(1, ".", 1);
        sleep(1);
    }
    
    close_server();
    
    return (0);
}
```

## ✅ Bonnes pratiques

1. **Utiliser volatile sig_atomic_t** pour flags globaux
2. **Appeler que des fonctions signal-safe**
3. **Éviter malloc/free** dans les handlers
4. **Toujours nettoyer** les ressources
5. **Utiliser write() plutôt que printf()** dans handlers
6. **Sauvegarder l'ancien handler** si besoin

## 🚀 Pour Runtrack C

### Jour 3-4: Minishell
Tu vas gérer Ctrl+C avec signal(SIGINT)

### Jour 5: Minishell avancé
Tu vas gérer les signaux pour les processus enfants

---

**ÉTAPE 3 TERMINÉE!** 👉 5 fichiers créés!
