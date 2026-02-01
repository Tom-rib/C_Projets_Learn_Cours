#include <stdio.h>

int main(void)
{
    int N = 0;
   
    printf("Entrer votre age:");
    scanf("%d", &N);

    if ( N >= 7 && N <= 8)
    {
        printf("Vous êtes un Gamin");
    }

    else if(N >= 8 && N <=9 )
     {
        printf("Vous êtes une Pupille");
    }

    else if (N >= 10 && N <=11 )
     {
        printf("Vous êtes un Jeune");
    }

    else if (N >= 12 )
     {
        printf("Vous êtes un cadet");
    }

    else{
        printf ("rentrer un age correcte");
    }


    return 0;
}