#include <stdio.h>

char* checkNbr (int a, int b, int c)
{
    if ((a == b || b == c || a == c) && (a == 90 || b == 90 || c == 90 )) 
        return "Il s'agit d'un triangle rectangle isocèle";

    else if (a == b == c)
        return "Il s'agit d'un triangle équilatéral";

    else if (a == 90 || b == 90 || c == 90)
        return "Il s'agit d'un triangle renctangle";

    else if (a == b || b == c || a == c) return "Il s'agit d'un triangle isocèle";
       
    else
        return "Il s'agit d'un triangle scalène";
}

int main(void)
{
    int a,b,c;
    printf("Entrer 3 angles séparer par une virgule: "); 
    scanf("%d,%d,%d", &a,&b,&c);
    printf("checkNbr(%d, %d, %d)->%s\n", a, b, c, checkNbr(a,b,c));

    return 0;

}