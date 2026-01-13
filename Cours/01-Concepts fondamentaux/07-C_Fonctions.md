# 🎯 C_Fonctions - Fonctions et Modularité

## Déclarer une fonction

```c
int additionner(int a, int b)
{
    return (a + b);
}
```

### Structure
```
type_retour nom_fonction(type param1, type param2)
{
    // Code
    return (valeur);
}
```

## Utiliser une fonction

```c
#include <stdio.h>

int additionner(int a, int b)
{
    return (a + b);
}

int main(void)
{
    int resultat = additionner(5, 3);
    printf("%d\n", resultat);  // 8
    return (0);
}
```

## Fonction sans retour

```c
void afficher_message(char *msg)
{
    printf("%s\n", msg);
}

int main(void)
{
    afficher_message("Bonjour!");
    return (0);
}
```

## Prototype de fonction

```c
// Prototype (déclaration)
int additionner(int a, int b);

int main(void)
{
    int x = additionner(5, 3);
    return (0);
}

// Implémentation
int additionner(int a, int b)
{
    return (a + b);
}
```

