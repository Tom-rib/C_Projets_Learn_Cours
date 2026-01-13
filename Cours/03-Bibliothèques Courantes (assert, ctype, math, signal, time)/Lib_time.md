# 📚 Lib_time.h - Gestion du Temps

## À quoi sert time.h?

La bibliothèque **time.h** permet:
- ✅ Obtenir l'heure actuelle (time)
- ✅ Mesurer l'exécution (clock)
- ✅ Convertir temps (ctime, localtime)
- ✅ Calculer différences (difftime)

## À inclure

```c
#include <time.h>
```

## time() - Temps actuel

**Syntaxe:**
```c
time_t time(time_t *t);
```

**Retour:** Seconds depuis le 1er janvier 1970 (Unix timestamp)

### Exemple

```c
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now = time(NULL);
    
    printf("Timestamp: %ld\n", (long)now);
    
    return (0);
}
```

**Output (exemple):**
```
Timestamp: 1673612345
```

## ctime() - Convertir timestamp en texte

**Syntaxe:**
```c
char *ctime(const time_t *t);
```

**Retour:** Chaîne au format "Day Mon DD HH:MM:SS YYYY"

### Exemple

```c
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now = time(NULL);
    
    printf("Heure actuelle: %s", ctime(&now));
    
    return (0);
}
```

**Output (exemple):**
```
Heure actuelle: Mon Jan 13 10:30:45 2025
```

## clock() - Mesurer le temps d'exécution

**Syntaxe:**
```c
clock_t clock(void);
```

**Retour:** Nombre de clock ticks depuis le démarrage du programme

### Exemple

```c
#include <stdio.h>
#include <time.h>

int main(void)
{
    clock_t start = clock();
    
    // Faire quelque chose...
    for (int i = 0; i < 1000000; i++);
    
    clock_t end = clock();
    
    double temps = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Temps: %.4f secondes\n", temps);
    
    return (0);
}
```

## difftime() - Différence entre deux timestamps

**Syntaxe:**
```c
double difftime(time_t time1, time_t time0);
```

**Retour:** Différence en secondes (time1 - time0)

### Exemple

```c
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t debut = time(NULL);
    
    // Attendre 3 secondes
    for (int i = 0; i < 3000000000; i++);
    
    time_t fin = time(NULL);
    
    double difference = difftime(fin, debut);
    printf("Différence: %.0f secondes\n", difference);
    
    return (0);
}
```

## localtime() - Convertir en structure

**Syntaxe:**
```c
struct tm *localtime(const time_t *t);
```

**Retour:** Pointeur vers structure contenant année, mois, jour, etc.

### Structure tm

```c
struct tm {
    int tm_sec;     // Secondes (0-59)
    int tm_min;     // Minutes (0-59)
    int tm_hour;    // Heures (0-23)
    int tm_mday;    // Jour du mois (1-31)
    int tm_mon;     // Mois (0-11) <- 0=janvier!
    int tm_year;    // Années depuis 1900
    int tm_wday;    // Jour de la semaine (0-6)
    int tm_yday;    // Jour de l'année (0-365)
    int tm_isdst;   // Heure d'été?
};
```

### Exemple

```c
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now = time(NULL);
    struct tm *temps = localtime(&now);
    
    printf("Année: %d\n", temps->tm_year + 1900);  // +1900!
    printf("Mois: %d\n", temps->tm_mon + 1);       // +1 (0-11)
    printf("Jour: %d\n", temps->tm_mday);
    printf("Heure: %d:%d:%d\n", temps->tm_hour, 
                                 temps->tm_min, 
                                 temps->tm_sec);
    
    return (0);
}
```

## strftime() - Formatter le temps

**Syntaxe:**
```c
size_t strftime(char *s, size_t max, const char *format, const struct tm *tm);
```

| Format | Signification |
|--------|---------------|
| `%Y` | Année (2025) |
| `%m` | Mois (01-12) |
| `%d` | Jour (01-31) |
| `%H` | Heure (00-23) |
| `%M` | Minute (00-59) |
| `%S` | Seconde (00-59) |
| `%A` | Jour semaine (Monday) |
| `%B` | Nom mois (January) |

### Exemple

```c
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now = time(NULL);
    struct tm *temps = localtime(&now);
    
    char buffer[100];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", temps);
    
    printf("Heure formatée: %s\n", buffer);
    
    return (0);
}
```

**Output (exemple):**
```
Heure formatée: 2025-01-13 10:30:45
```

## 🎓 Exemple complet: Mesurer performance

```c
#include <stdio.h>
#include <time.h>

int fibonacci(int n)
{
    if (n <= 1)
        return (n);
    return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main(void)
{
    printf("Calcul fibonacci...\n");
    
    clock_t start = clock();
    int resultat = fibonacci(40);
    clock_t end = clock();
    
    double temps = (double)(end - start) / CLOCKS_PER_SEC;
    
    printf("fibonacci(40) = %d\n", resultat);
    printf("Temps: %.4f secondes\n", temps);
    
    return (0);
}
```

## 🎓 Exemple: Afficher l'heure élégamment

```c
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now = time(NULL);
    struct tm *temps = localtime(&now);
    
    char jour[20];
    char mois[20];
    char date[100];
    
    // Jour de la semaine
    strftime(jour, sizeof(jour), "%A", temps);
    
    // Nom du mois
    strftime(mois, sizeof(mois), "%B", temps);
    
    // Date complète
    strftime(date, sizeof(date), "%Y-%m-%d %H:%M:%S", temps);
    
    printf("Aujourd'hui: %s %d %s\n", jour, temps->tm_mday, mois);
    printf("Date complète: %s\n", date);
    
    return (0);
}
```

## ⚠️ Erreurs courantes

### Erreur 1: Oublier le +1900 pour l'année

```c
// ❌ MAUVAIS
printf("%d\n", temps->tm_year);  // 125 (pas 2025!)

// ✅ BON
printf("%d\n", temps->tm_year + 1900);  // 2025
```

### Erreur 2: Oublier le +1 pour le mois

```c
// ❌ MAUVAIS
printf("%d\n", temps->tm_mon);  // 0 pour janvier!

// ✅ BON
printf("%d\n", temps->tm_mon + 1);  // 1 pour janvier
```

## ✅ Bonnes pratiques

1. **Utiliser time(NULL)** pour l'heure actuelle
2. **Utiliser clock()** pour mesurer l'exécution
3. **Ajouter 1900 et 1** aux champs tm
4. **Utiliser strftime()** pour format personnalisé
5. **Toujours vérifier** le retour de localtime()

## 🚀 Pour Runtrack C

### Jour 1: Générer timestamps
Tu vas utiliser time() pour des ID uniques

### Jour 2-3: Mesurer performance
Tu vas utiliser clock() pour bencher tes algorithmes

---

**Prochainement: Lib_assert.md** 👉 Assertions et débogage
