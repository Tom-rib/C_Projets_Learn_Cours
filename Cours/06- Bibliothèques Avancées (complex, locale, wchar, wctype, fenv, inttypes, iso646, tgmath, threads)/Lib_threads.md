# 📚 Lib_threads.h - Multithreading

## À quoi sert threads.h?

La bibliothèque **threads.h** fournit:
- ✅ Créer des threads
- ✅ Synchronisation
- ✅ Multithreading en C11

## À inclure

```c
#include <threads.h>
```

## Créer un thread

```c
#include <threads.h>
#include <stdio.h>

int thread_func(void *arg)
{
    printf("Thread exécuté\n");
    return (0);
}

int main(void)
{
    thrd_t tid;
    
    thrd_create(&tid, thread_func, NULL);
    thrd_join(tid, NULL);
    
    return (0);
}
```

## Fonctions courantes

```c
thrd_create(&tid, func, arg);   // Créer thread
thrd_join(tid, &res);            // Attendre thread
thrd_exit(code);                 // Terminer thread
thrd_equal(t1, t2);              // Comparer threads
```

## ⚠️ Compiler avec flags spéciaux

```bash
gcc -Wall -Wextra -Werror -pthread programme.c -o programme
```

## ✅ Rarement utilisé en Runtrack C

Le multithreading n'est généralement pas couvert dans les bootcamps C basiques.

---

**ÉTAPE 6 COMPLÈTE!** Toutes les bibliothèques avancées! ✅
