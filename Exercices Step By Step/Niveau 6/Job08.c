#include <stdio.h>

int main(void)
{
    int entréeH, entréeM, minutes =0;


    printf("Entrez le nombre de minutes: \n");
    scanf("%d", &entréeM);
    
    printf("Entrez le nombre d'heures: \n");
    scanf("%d", &entréeH);

    minutes = entréeM + (entréeH *60);

    printf("Le nombre total de minutes est : %d \n" , minutes );

    return 0;

}