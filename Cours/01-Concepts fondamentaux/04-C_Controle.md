# 🎯 C_Controle - Conditions et Contrôle de Flux

Ce fichier couvre **if, else, switch** pour contrôler l'exécution du code.

## if - Condition simple

```c
#include <stdio.h>

int main(void)
{
    int age = 25;
    
    if (age >= 18)
        printf("Vous êtes majeur\n");
    
    return (0);
}
```

## if-else - Deux alternatives

```c
#include <stdio.h>

int main(void)
{
    int age = 15;
    
    if (age >= 18)
        printf("Vous êtes majeur\n");
    else
        printf("Vous êtes mineur\n");
    
    return (0);
}
```

## if-else if-else - Plusieurs conditions

```c
#include <stdio.h>

int main(void)
{
    int note = 75;
    
    if (note >= 90)
        printf("Excellent (A)\n");
    else if (note >= 80)
        printf("Très bien (B)\n");
    else if (note >= 70)
        printf("Bien (C)\n");
    else if (note >= 60)
        printf("Passable (D)\n");
    else
        printf("Échoué (F)\n");
    
    return (0);
}
```

## switch - Plusieurs cas

```c
#include <stdio.h>

int main(void)
{
    int jour = 3;
    
    switch (jour)
    {
        case 1:
            printf("Lundi\n");
            break;
        case 2:
            printf("Mardi\n");
            break;
        case 3:
            printf("Mercredi\n");
            break;
        default:
            printf("Jour invalide\n");
    }
    
    return (0);
}
```

⚠️ **N'oublie pas le break!** Sinon le code continue au cas suivant.

## Opérateur ternaire

```c
int x = 10;
int resultat = (x > 5) ? 100 : 0;
printf("%d\n", resultat);  // Output: 100
```

C'est équivalent à:
```c
int resultat;
if (x > 5)
    resultat = 100;
else
    resultat = 0;
```

---

**Prochainement: C_Boucles.md** 👉 while, for, do-while
