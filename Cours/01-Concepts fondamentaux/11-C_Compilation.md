# 🎯 C_Compilation - Compilation et Makefiles

## Compiler simple

```bash
gcc programme.c -o programme
./programme
```

## Compilation avec flags

```bash
gcc -Wall -Wextra -Werror programme.c -o programme
```

## Compiler avec plusieurs fichiers

```bash
gcc -Wall -Wextra -Werror main.c fonctions.c -o programme
```

## Compiler avec bibliothèque

```bash
gcc -Wall -Wextra -Werror programme.c -o programme -lm  # Pour math.h
```

## Makefile simple

```makefile
CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = programme

all: $(TARGET)

$(TARGET): main.c fonctions.c
	$(CC) $(CFLAGS) main.c fonctions.c -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean
```

Utiliser:
```bash
make        # Compiler
make clean  # Nettoyer
```

