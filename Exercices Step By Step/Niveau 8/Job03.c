#include <stdio.h>


int checkNbr (int a)
{
        return ((a - 2024)%4 == 0);
}


int main(void)
{
 int a;
 printf("Entrer une année: ");
 scanf("%d", &a);
 printf("checkNbr(%d)->%s\n", a, checkNbr(a) ? "est une année bissextile." : "n'est pas une année bissextile");
 return 0;

}
