# 📚 Lib_inttypes.h - Types Entiers Formatés

## À quoi sert inttypes.h?

La bibliothèque **inttypes.h** fournit:
- ✅ Macros pour format printf/scanf
- ✅ Utiliser int64_t avec printf
- ✅ Portabilité garantie

## À inclure

```c
#include <inttypes.h>
```

## Macros de format

```c
#include <inttypes.h>
#include <stdio.h>

int main(void)
{
    int64_t x = 1234567890123LL;
    uint32_t y = 4294967295U;
    
    printf("int64_t: %" PRId64 "\n", x);
    printf("uint32_t: %" PRIu32 "\n", y);
    
    return (0);
}
```

## Formats courants

| Macro | Type |
|-------|------|
| `PRId8` | int8_t |
| `PRId16` | int16_t |
| `PRId32` | int32_t |
| `PRId64` | int64_t |
| `PRIu32` | uint32_t |
| `PRIu64` | uint64_t |

## ✅ Bonnes pratiques

1. **Utiliser PRId64** pour int64_t
2. **Utiliser PRIu32** pour uint32_t
3. **Garantit portabilité** sur tous systèmes

---

**Prochainement: Lib_iso646.md** 👉 Opérateurs texte
