#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char chaine[100];
    double conversion =0;

    printf("Entrer une des nombres:\n");
    scanf("%s",chaine);

    conversion = atof(chaine);


    printf("Le double converti est : %f",conversion);


    return 0;



}