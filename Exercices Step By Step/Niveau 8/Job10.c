#include <stdio.h>

int main(void)
{
    float a = 0;
    float b = 0;
    float c = 0 ;

    printf("Entrée le prix de vente\n");
    scanf("%f",&a);


    printf("Entrée le prix d'achat\n");
    scanf("%f",&b);

    c = a - b;
    
    
    if (c > 0)
    {
      printf("Le bénéfice est de %f",c);
    }
    
    else
    {
      printf("La perte est de %f",c);

    }


    return 0;


}