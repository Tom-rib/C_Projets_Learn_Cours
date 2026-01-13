# 🎯 C_Structures - Structures et Types Personnalisés

## Déclarer une structure

```c
struct Personne
{
    char nom[50];
    int age;
    double taille;
};
```

## Utiliser une structure

```c
#include <stdio.h>

struct Personne
{
    char nom[50];
    int age;
};

int main(void)
{
    struct Personne p;
    p.age = 25;
    printf("Age: %d\n", p.age);
    return (0);
}
```

## typedef - Créer un alias

```c
typedef struct s_personne
{
    char nom[50];
    int age;
} t_personne;

int main(void)
{
    t_personne p;
    p.age = 25;
    return (0);
}
```

## Structure avec pointeur

```c
typedef struct s_personne
{
    char *nom;
    int age;
} t_personne;

int main(void)
{
    t_personne p;
    p.nom = (char *)malloc(50);
    p.age = 25;
    
    free(p.nom);
    return (0);
}
```

