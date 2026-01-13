# 🎯 C_Pointeurs - Adresses et Pointeurs

## Adresse d'une variable

```c
int x = 42;
printf("Valeur: %d\n", x);           // 42
printf("Adresse: %p\n", (void *)&x); // 0x7fff5fbff8c
```

`&x` = adresse de x

## Pointeur - Variable contenant une adresse

```c
int x = 42;
int *ptr = &x;  // ptr pointe vers x

printf("Valeur de x: %d\n", x);      // 42
printf("Valeur de ptr: %p\n", (void *)ptr);
printf("Valeur pointée: %d\n", *ptr); // 42
```

## * et &

| Symbole | Signification |
|---------|---------------|
| `*ptr` | Valeur pointée par ptr |
| `&var` | Adresse de var |
| `int *` | Pointeur vers un int |

## Exemple

```c
int age = 25;
int *ptr_age = &age;

printf("age = %d\n", age);        // 25
printf("*ptr_age = %d\n", *ptr_age); // 25
printf("&age = %p\n", (void *)&age);
printf("ptr_age = %p\n", (void *)ptr_age);
```

