# 🎯 C_Tableaux - Tableaux et Chaînes

## Tableaux - Collections d'éléments

```c
int nombres[5] = {1, 2, 3, 4, 5};
printf("%d\n", nombres[0]);  // 1
printf("%d\n", nombres[2]);  // 3
```

## Parcourir un tableau

```c
int arr[3] = {10, 20, 30};

for (int i = 0; i < 3; i++)
    printf("%d\n", arr[i]);
```

## Chaînes de caractères

```c
char str[10] = "Bonjour";
printf("%s\n", str);  // Bonjour
```

⚠️ Les chaînes se terminent par `\0` (null terminator)

## Tableaux 2D

```c
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

printf("%d\n", matrix[0][1]);  // 2
printf("%d\n", matrix[1][0]);  // 4
```

