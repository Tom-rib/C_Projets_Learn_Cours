#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char chaine[100];
    int conversion =0;

    printf("Entrer une des nombres:\n");
    scanf("%s",chaine);

    conversion = atoi(chaine);


    printf("La valeur entier converti est : %d",conversion);


    return 0;



}