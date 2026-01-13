# 📚 Lib_stdbool.h - Type Booléen

## À quoi sert stdbool.h?

La bibliothèque **stdbool.h** fournit:
- ✅ Type bool
- ✅ Constantes true et false
- ✅ Code plus lisible

## À inclure

```c
#include <stdbool.h>
```

## Utilisation

```c
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool is_active = true;
    bool is_empty = false;
    
    if (is_active)
        printf("Actif\n");
    
    if (!is_empty)
        printf("Pas vide\n");
    
    return (0);
}
```

## Booléens en structures

```c
#include <stdbool.h>
#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    bool is_student;
    bool is_active;
} Person;

int main(void)
{
    Person p = {"Tom", 25, true, false};
    
    printf("Étudiant: %s\n", p.is_student ? "oui" : "non");
    
    return (0);
}
```

## ✅ Bonnes pratiques

1. **Utiliser bool** plutôt que int pour clarté
2. **Utiliser true/false** plutôt que 1/0
3. **Nommer clairement** les variables booléennes (is_*, has_*)

---

**Prochainement: Lib_stddef.md** 👉 Définitions standard
