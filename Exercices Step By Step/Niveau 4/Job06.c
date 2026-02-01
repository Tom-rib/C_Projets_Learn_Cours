#include <stdio.h>

int main(void)
{
    int num = 0 ;
    int inverse = 0;

    printf("Entrer un nombre entier:");
    scanf("%d", &num);

    while(num!=0) {
        inverse = inverse * 10 + (num % 10); 
        num = num/10 ;

    }

    printf("Nombre inversé: %d\n",inverse);

    return 0;
}