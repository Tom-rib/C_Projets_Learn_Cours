#include <stdio.h>

int main(void)
{
    int numérateur, dénominateur , quotient , reste = 0;

    printf("Entrez le numérateur: \n");
    scanf("%d", &numérateur);

    printf("Entrez le dénominateur: \n");
    scanf("%d", &dénominateur);

    reste = numérateur % dénominateur ;

    quotient = (numérateur - reste)/ dénominateur;

    printf("quotient=%d, reste=%d \n",quotient,reste);


    return 0;
}