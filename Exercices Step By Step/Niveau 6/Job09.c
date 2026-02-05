#include <stdio.h>


int main(void)
{
    float kilometres , miles =0;

    printf("Entrer les kilomètres par heures: \n");
    scanf("%f", &kilometres);

    miles = kilometres * 0.621371;


    printf("%.2f miles par heure \n",miles);


    return 0;
}