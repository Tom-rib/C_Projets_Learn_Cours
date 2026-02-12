#include <stdio.h>

char* checkNbr (int a, int b, int c)
{
    if (a + b + c == 180 )
        return "Le triangle est valide";
       
    else
        return "Le triangle n'est pas valide.";
}

int main(void)
{
    int a,b,c;
    printf("Entrer 3 angles séparer par une virgule: "); 
    scanf("%d,%d,%d", &a,&b,&c);
    printf("checkNbr(%d, %d, %d)->%s\n", a, b, c, checkNbr(a,b,c));

    return 0;

}