#include <stdio.h>


int checkNbr (int a)
{
        return (a % 3 == 0 && a % 7 != 0) || (a % 7 == 0 && a % 3 != 0);
}


int main(void)
{
 int a;
 printf("Entrer un nombre entier: ");
 scanf("%d", &a);
 printf("checkNbr(%d)->%s\n", a, checkNbr(a) ? "TRUE" : "FALSE");
 return 0;

}



