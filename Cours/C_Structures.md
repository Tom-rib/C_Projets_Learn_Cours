# Cours C - Structures et typedef

## Structures (struct)

Une structure regroupe plusieurs variables de types différents.

**Déclaration de base** :
```c
#include <stdio.h>

struct personne
{
    char nom[50];
    int age;
    float taille;
};

int main(void)
{
    // Déclarer une variable de type struct personne
    struct personne p1;
    
    // Initialiser les champs
    p1.age = 25;
    p1.taille = 1.75;
    
    printf("Age: %d\n", p1.age);
    
    return (0);
}
```

## Initialisation d'une structure

```c
#include <stdio.h>

struct point
{
    int x;
    int y;
};

int main(void)
{
    // Initialisation vide
    struct point p1;
    p1.x = 10;
    p1.y = 20;
    
    // Initialisation complète
    struct point p2 = {5, 15};
    
    // Initialisation partielle
    struct point p3 = {.x = 30};  // y = 0 par défaut
    
    printf("p1: (%d, %d)\n", p1.x, p1.y);
    printf("p2: (%d, %d)\n", p2.x, p2.y);
    printf("p3: (%d, %d)\n", p3.x, p3.y);
    
    return (0);
}
```

## Tableau de structures

```c
#include <stdio.h>

struct etudiant
{
    char nom[30];
    int age;
    float note;
};

int main(void)
{
    struct etudiant etudiants[3] = {
        {"Alice", 20, 95.5},
        {"Bob", 21, 88.0},
        {"Charlie", 19, 92.3}
    };
    
    // Accéder aux éléments
    for (int i = 0; i < 3; i++)
    {
        printf("%s: %d ans, note: %.1f\n",
               etudiants[i].nom,
               etudiants[i].age,
               etudiants[i].note);
    }
    
    return (0);
}
```

## Structures imbriquées

```c
#include <stdio.h>

struct adresse
{
    char rue[50];
    int numero;
    char ville[30];
};

struct personne
{
    char nom[50];
    int age;
    struct adresse adresse;
};

int main(void)
{
    struct personne p = {
        "Alice",
        30,
        {"Rue de la Paix", 42, "Paris"}
    };
    
    printf("%s habite au %d %s à %s\n",
           p.nom,
           p.adresse.numero,
           p.adresse.rue,
           p.adresse.ville);
    
    return (0);
}
```

## Pointeurs vers structures

```c
#include <stdio.h>
#include <stdlib.h>

struct personne
{
    char nom[30];
    int age;
};

int main(void)
{
    // Allouer une structure
    struct personne *p = (struct personne *)malloc(sizeof(struct personne));
    
    if (p == NULL)
    {
        printf("Erreur d'allocation\n");
        return (1);
    }
    
    // Accéder via pointeur (deux syntaxes équivalentes)
    p->age = 25;      // Notation avec flèche (plus lisible)
    (*p).age = 25;    // Notation avec déréférence (équivalent)
    
    printf("Age: %d\n", p->age);
    
    free(p);
    p = NULL;
    
    return (0);
}
```

## typedef - Créer un alias de type

typedef simplifie la déclaration en créant un alias.

**Avant typedef** :
```c
struct personne p;
```

**Après typedef** :
```c
typedef struct personne personne_t;
personne_t p;
```

## Utiliser typedef avec struct

```c
#include <stdio.h>

typedef struct
{
    char nom[30];
    int age;
    float salaire;
} employe_t;

int main(void)
{
    // Pas besoin de "struct" devant employe_t
    employe_t emp1 = {"Alice", 30, 45000};
    employe_t emp2 = {"Bob", 28, 42000};
    
    printf("%s: %d ans, salaire: %.2f\n", emp1.nom, emp1.age, emp1.salaire);
    printf("%s: %d ans, salaire: %.2f\n", emp2.nom, emp2.age, emp2.salaire);
    
    return (0);
}
```

## Bonne pratique : Nommage avec typedef

```c
#include <stdio.h>

// Bonne pratique: suffixe _t ou _s pour les types
typedef struct
{
    int x;
    int y;
} point_t;

typedef struct
{
    double real;
    double imag;
} complex_t;

int main(void)
{
    point_t p = {10, 20};
    complex_t c = {3.5, 2.1};
    
    printf("Point: (%d, %d)\n", p.x, p.y);
    printf("Complex: %.1f + %.1fi\n", c.real, c.imag);
    
    return (0);
}
```

## Typedef avec pointeurs

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nom[30];
} etudiant_t;

int main(void)
{
    // Allouer un tableau d'étudiants
    etudiant_t *etudiants = (etudiant_t *)malloc(2 * sizeof(etudiant_t));
    
    if (etudiants == NULL)
    {
        printf("Erreur d'allocation\n");
        return (1);
    }
    
    // Remplir
    etudiants[0].id = 1;
    etudiants[0].nom[0] = 'A';  // Attention: pas de strcpy simple
    
    etudiants[1].id = 2;
    etudiants[1].nom[0] = 'B';
    
    // Utiliser
    for (int i = 0; i < 2; i++)
    {
        printf("Étudiant %d: ID %d\n", i, etudiants[i].id);
    }
    
    free(etudiants);
    etudiants = NULL;
    
    return (0);
}
```

## Fonctions avec structures

```c
#include <stdio.h>

typedef struct
{
    int x;
    int y;
} point_t;

// Afficher une structure
void afficher_point(point_t p)
{
    printf("(%d, %d)\n", p.x, p.y);
}

// Modifier une structure (passage par pointeur)
void deplacer_point(point_t *p, int dx, int dy)
{
    p->x += dx;
    p->y += dy;
}

// Retourner une structure
point_t creer_point(int x, int y)
{
    point_t p = {x, y};
    return p;
}

int main(void)
{
    point_t p = creer_point(5, 10);
    afficher_point(p);
    
    deplacer_point(&p, 3, 4);
    afficher_point(p);
    
    return (0);
}
```

## Exemple pratique : Liste d'étudiants

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char nom[50];
    float note;
} etudiant_t;

void afficher_etudiant(etudiant_t e)
{
    printf("ID: %d, Nom: %s, Note: %.2f\n", e.id, e.nom, e.note);
}

int main(void)
{
    // Créer un tableau d'étudiants
    etudiant_t etudiants[3];
    
    // Initialiser
    etudiants[0].id = 1;
    strcpy(etudiants[0].nom, "Alice");
    etudiants[0].note = 95.5;
    
    etudiants[1].id = 2;
    strcpy(etudiants[1].nom, "Bob");
    etudiants[1].note = 87.0;
    
    etudiants[2].id = 3;
    strcpy(etudiants[2].nom, "Charlie");
    etudiants[2].note = 91.5;
    
    // Afficher
    for (int i = 0; i < 3; i++)
    {
        afficher_etudiant(etudiants[i]);
    }
    
    // Trouver la meilleure note
    int meilleur = 0;
    for (int i = 1; i < 3; i++)
    {
        if (etudiants[i].note > etudiants[meilleur].note)
            meilleur = i;
    }
    
    printf("\nMeilleur étudiant: %s (%.2f)\n",
           etudiants[meilleur].nom,
           etudiants[meilleur].note);
    
    return (0);
}
```

## Union - Mémoire partagée

Une union partage la mémoire entre ses champs (un seul à la fois).

```c
#include <stdio.h>

typedef union
{
    int entier;
    float flottant;
    char caractere;
} valeur_t;

int main(void)
{
    valeur_t v;
    
    v.entier = 42;
    printf("Entier: %d\n", v.entier);
    printf("Taille: %lu octets\n", sizeof(valeur_t));  // Taille du plus grand
    
    v.flottant = 3.14;  // Écrase entier
    printf("Flottant: %.2f\n", v.flottant);
    printf("Entier (corrompu): %d\n", v.entier);  // Valeur modifiée
    
    return (0);
}
```

## Enum - Énumération

Définit un ensemble de constantes.

```c
#include <stdio.h>

typedef enum
{
    LUNDI,
    MARDI,
    MERCREDI,
    JEUDI,
    VENDREDI,
    SAMEDI,
    DIMANCHE
} jour_t;

int main(void)
{
    jour_t jour = JEUDI;
    
    printf("Jour: %d\n", jour);  // 3
    
    switch (jour)
    {
        case LUNDI:
            printf("C'est lundi\n");
            break;
        case JEUDI:
            printf("C'est jeudi\n");
            break;
        default:
            printf("Autre jour\n");
    }
    
    return (0);
}
```

## Bonnes pratiques

1. **Utiliser typedef** pour simplifier les déclarations
2. **Suffixer avec _t ou _s** : `struct_name_t`, `struct_name_s`
3. **Passer par pointeur** pour modifier une structure
4. **Passer par valeur** pour lire une structure (si petite)
5. **Initialiser les structures** après allocation
6. **Éviter les unions** si possible (comportement non-évident)
7. **Organiser les champs** par taille pour économiser l'espace
8. **Documenter chaque champ** avec un commentaire
