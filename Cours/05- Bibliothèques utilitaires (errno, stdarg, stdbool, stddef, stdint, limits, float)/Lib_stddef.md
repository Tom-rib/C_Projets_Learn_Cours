# 📚 Lib_stddef.h - Définitions Standard

## À quoi sert stddef.h?

La bibliothèque **stddef.h** définit:
- ✅ NULL (pointeur nul)
- ✅ size_t (type pour tailles)
- ✅ ptrdiff_t (différence de pointeurs)
- ✅ offsetof() (position de membre)

## À inclure

```c
#include <stddef.h>
```

## NULL - Pointeur nul

```c
#include <stddef.h>
#include <stdio.h>

int main(void)
{
    int *ptr = NULL;
    
    if (ptr == NULL)
        printf("Pointeur nul\n");
    
    return (0);
}
```

## size_t - Type pour tailles

```c
#include <stddef.h>
#include <stdio.h>

int main(void)
{
    size_t taille = sizeof(int);
    
    printf("Taille: %zu\n", taille);  // %zu pour size_t
    
    return (0);
}
```

## offsetof() - Position de membre

```c
#include <stddef.h>
#include <stdio.h>

typedef struct {
    char nom[50];
    int age;
    float taille;
} Person;

int main(void)
{
    size_t offset_age = offsetof(Person, age);
    
    printf("Offset de age: %zu bytes\n", offset_age);
    
    return (0);
}
```

## ptrdiff_t - Différence de pointeurs

```c
#include <stddef.h>
#include <stdio.h>

int main(void)
{
    int tab[10] = {1, 2, 3, 4, 5};
    
    ptrdiff_t diff = &tab[3] - &tab[0];
    
    printf("Différence: %td\n", diff);  // 3
    
    return (0);
}
```

## ✅ Bonnes pratiques

1. **Utiliser size_t** pour tailles
2. **Utiliser NULL** plutôt que 0 pour pointeurs
3. **Utiliser offsetof()** pour calculs bas-niveau

---

**Prochainement: Lib_stdint.md** 👉 Types entiers précis
