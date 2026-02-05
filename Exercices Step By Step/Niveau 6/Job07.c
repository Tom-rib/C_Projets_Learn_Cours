#include <stdio.h>

int main(void)
{
    int entrée, heures , minutes =0;


    printf("Entrez le nombre de minutes: \n");
    scanf("%d", &entrée);

    heures = entrée / 60 ;

    minutes = entrée % 60;


    printf("%d heures, %d minutes \n",heures , minutes );

    return 0;

}