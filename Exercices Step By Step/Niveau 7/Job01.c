#include <stdio.h>

int main(void)
{
    float rayon, volume =0;
    float pi = 3.14;

    printf("Entrez le rayon de la spère:\n");
    scanf("%f", &rayon);


    volume = 4.0/3.0 * pi * (rayon*rayon*rayon);

    printf("Le volume de la sphère est:%.4f",volume);

    return 0;

}