# 📚 Lib_math.h - Calculs Mathématiques

## À quoi sert math.h?

La bibliothèque **math.h** permet:
- ✅ Racine carrée (sqrt)
- ✅ Fonctions trigonométriques (sin, cos, tan)
- ✅ Logarithmes (log, log10)
- ✅ Exponentielle (exp, pow)
- ✅ Arrondir (floor, ceil, round)
- ✅ Valeur absolue (fabs)

## À inclure

```c
#include <math.h>
```

⚠️ **Compiler avec -lm:** `gcc -Wall -Wextra -Werror programme.c -o programme -lm`

## sqrt() - Racine carrée

**Syntaxe:**
```c
double sqrt(double x);
```

**Retour:** Racine carrée de x

### Exemple

```c
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("sqrt(4) = %.2f\n", sqrt(4));      // 2.00
    printf("sqrt(9) = %.2f\n", sqrt(9));      // 3.00
    printf("sqrt(2) = %.2f\n", sqrt(2));      // 1.41
    printf("sqrt(100) = %.2f\n", sqrt(100));  // 10.00
    
    return (0);
}
```

## pow() - Puissance

**Syntaxe:**
```c
double pow(double base, double exp);
```

**Retour:** base^exp

### Exemple

```c
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("pow(2, 3) = %.2f\n", pow(2, 3));    // 8.00
    printf("pow(2, 0) = %.2f\n", pow(2, 0));    // 1.00
    printf("pow(10, 2) = %.2f\n", pow(10, 2));  // 100.00
    printf("pow(2, -1) = %.2f\n", pow(2, -1));  // 0.50
    
    return (0);
}
```

## sin(), cos(), tan() - Trigonométrie

**Syntaxe:**
```c
double sin(double x);   // Sinus (en radians)
double cos(double x);   // Cosinus (en radians)
double tan(double x);   // Tangente (en radians)
```

**Note:** Les angles doivent être en radians (π = 3.14159...)

### Exemple

```c
#include <stdio.h>
#include <math.h>

int main(void)
{
    double pi = M_PI;  // Constante PI
    
    printf("sin(0) = %.2f\n", sin(0));          // 0.00
    printf("sin(π/2) = %.2f\n", sin(pi / 2));   // 1.00
    printf("cos(0) = %.2f\n", cos(0));          // 1.00
    printf("cos(π) = %.2f\n", cos(pi));         // -1.00
    printf("tan(0) = %.2f\n", tan(0));          // 0.00
    
    return (0);
}
```

## Convertir degrés en radians

```c
#include <math.h>

double degrees_to_radians(double degrees)
{
    return (degrees * M_PI / 180.0);
}

// Exemple:
double angle_radians = degrees_to_radians(45);  // 45° en radians
```

## exp() et log() - Exponentielle et logarithme

**Syntaxe:**
```c
double exp(double x);       // e^x
double log(double x);       // ln(x)
double log10(double x);     // log₁₀(x)
```

### Exemple

```c
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("exp(1) = %.2f\n", exp(1));   // 2.72 (approximation de e)
    printf("exp(0) = %.2f\n", exp(0));   // 1.00
    printf("log(1) = %.2f\n", log(1));   // 0.00
    printf("log(10) = %.2f\n", log(10)); // 2.30
    
    return (0);
}
```

## fabs() - Valeur absolue

**Syntaxe:**
```c
double fabs(double x);
```

**Retour:** Valeur absolue de x (toujours positif)

### Exemple

```c
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("fabs(5) = %.2f\n", fabs(5));      // 5.00
    printf("fabs(-5) = %.2f\n", fabs(-5));    // 5.00
    printf("fabs(-3.14) = %.2f\n", fabs(-3.14)); // 3.14
    
    return (0);
}
```

## floor(), ceil(), round() - Arrondir

**Syntaxe:**
```c
double floor(double x);   // Arrondir vers le bas
double ceil(double x);    // Arrondir vers le haut
double round(double x);   // Arrondir au plus proche
```

### Exemple

```c
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("floor(3.7) = %.2f\n", floor(3.7));  // 3.00
    printf("ceil(3.2) = %.2f\n", ceil(3.2));    // 4.00
    printf("round(3.5) = %.2f\n", round(3.5));  // 4.00
    printf("round(3.4) = %.2f\n", round(3.4));  // 3.00
    
    return (0);
}
```

## Constantes mathématiques

```c
#include <math.h>

M_PI        // 3.14159... (Pi)
M_E         // 2.71828... (e)
M_SQRT2     // 1.41421... (√2)
```

## 🎓 Exemple complet: Calculateur de distance

```c
#include <stdio.h>
#include <math.h>

int main(void)
{
    double x1, y1, x2, y2;
    double distance;
    
    printf("Point 1 - X: ");
    scanf("%lf", &x1);
    printf("Point 1 - Y: ");
    scanf("%lf", &y1);
    
    printf("Point 2 - X: ");
    scanf("%lf", &x2);
    printf("Point 2 - Y: ");
    scanf("%lf", &y2);
    
    // Distance = √((x2-x1)² + (y2-y1)²)
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("\nDistance: %.2f\n", distance);
    
    return (0);
}
```

## 🎓 Exemple: Aire d'un cercle

```c
#include <stdio.h>
#include <math.h>

int main(void)
{
    double rayon;
    double aire;
    double perimetre;
    
    printf("Rayon du cercle: ");
    scanf("%lf", &rayon);
    
    // Aire = π * r²
    aire = M_PI * pow(rayon, 2);
    
    // Périmètre = 2 * π * r
    perimetre = 2 * M_PI * rayon;
    
    printf("\nAire: %.2f\n", aire);
    printf("Périmètre: %.2f\n", perimetre);
    
    return (0);
}
```

## ✅ Bonnes pratiques

1. **Compiler avec -lm** sinon erreur de linking!
2. **Utiliser des double** plutôt que float (plus précis)
3. **Penser en radians** pour trigonométrie
4. **Utiliser M_PI** plutôt que 3.14
5. **Vérifier les domaines** (log de nombre négatif = erreur)

## 🚀 Pour Runtrack C

### Jour 2+: Calculs avancés
Tu vas utiliser sqrt, pow pour des algorithmes

### Jour 3+: Géométrie
Tu vas utiliser sin, cos pour des calculs d'angle

---

**Prochainement: Lib_time.md** 👉 Gestion du temps et des timestamps
