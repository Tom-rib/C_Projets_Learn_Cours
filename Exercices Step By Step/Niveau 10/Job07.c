#include <stdio.h>

int main(void)
{
    int nombre;
    int cube ;
    
    printf("Entrée le nombre des éléments:\n");
    scanf("%d", &nombre);


    for (int i = 1; i <= nombre; i++)
    {
        cube = i*i*i;
        printf("Les nombre est: %d et le cubes de %d est: %d \n", i,i,cube);

    }
    
    return 0;
}