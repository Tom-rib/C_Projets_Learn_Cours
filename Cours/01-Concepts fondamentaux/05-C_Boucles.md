# 🎯 C_Boucles - Boucles et Répétitions

Ce fichier couvre **while, for, do-while** pour répéter du code.

## while - Boucle tant que

```c
#include <stdio.h>

int main(void)
{
    int i = 1;
    
    while (i <= 5)
    {
        printf("%d\n", i);
        i++;  // Incrémenter sinon boucle infinie!
    }
    
    return (0);
}
```

Output:
```
1
2
3
4
5
```

## for - Boucle comptée

```c
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 5; i++)
        printf("%d\n", i);
    
    return (0);
}
```

Output: (même que while)
```
1
2
3
4
5
```

### Structure du for
```
for (initialisation ; condition ; incrémentation)
{
    // Code à répéter
}
```

## do-while - Exécuter au moins une fois

```c
#include <stdio.h>

int main(void)
{
    int i = 1;
    
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
    
    return (0);
}
```

⚠️ Le code exécute **au moins une fois** même si la condition est fausse.

## break - Sortir de la boucle

```c
for (int i = 1; i <= 10; i++)
{
    if (i == 5)
        break;  // Sortir si i == 5
    printf("%d\n", i);
}
```

Output:
```
1
2
3
4
```

## continue - Passer à l'itération suivante

```c
for (int i = 1; i <= 5; i++)
{
    if (i == 3)
        continue;  // Sauter i=3
    printf("%d\n", i);
}
```

Output:
```
1
2
4
5
```

## Boucles imbriquées

```c
for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 2; j++)
        printf("(%d, %d) ", i, j);
    printf("\n");
}
```

Output:
```
(1, 1) (1, 2)
(2, 1) (2, 2)
(3, 1) (3, 2)
```

---

**Prochainement: C_Tableaux.md** 👉 Tableaux et chaînes
