# 📚 Lib_stdint.h - Types Entiers Précis

## À quoi sert stdint.h?

La bibliothèque **stdint.h** fournit:
- ✅ Types entiers de taille garantie (int32_t, uint64_t, etc.)
- ✅ Éviter les problèmes de portabilité
- ✅ Savoir exactement la taille

## À inclure

```c
#include <stdint.h>
```

## Types 8-bit

```c
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    int8_t x = 127;      // Signé: -128 à 127
    uint8_t y = 255;     // Non-signé: 0 à 255
    
    printf("int8_t: %d\n", x);
    printf("uint8_t: %u\n", y);
    
    return (0);
}
```

## Types 16-bit

```c
int16_t a = 32767;      // Signé
uint16_t b = 65535;     // Non-signé
```

## Types 32-bit

```c
#include <stdint.h>

int32_t x = 2147483647;
uint32_t y = 4294967295;
```

## Types 64-bit

```c
int64_t big = 9223372036854775807LL;
uint64_t huge = 18446744073709551615ULL;
```

## Format printf/scanf

| Type | Format |
|------|--------|
| `int8_t` | `%d` ou `%hhd` |
| `uint8_t` | `%u` ou `%hhu` |
| `int32_t` | `%d` ou `%d` |
| `uint32_t` | `%u` |
| `int64_t` | `%lld` ou `%" PRId64 "` |
| `uint64_t` | `%llu` ou `%" PRIu64 "` |

## Exemple avec printf

```c
#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int64_t x = 1234567890123LL;
    
    printf("int64_t: %" PRId64 "\n", x);
    
    return (0);
}
```

## ✅ Bonnes pratiques

1. **Utiliser stdint.h** plutôt que int/long
2. **Préférer int32_t** à int
3. **Utiliser uint8_t** pour bytes
4. **Utiliser inttypes.h** pour formats printf

---

**Prochainement: Lib_limits.md** 👉 Limites des types
