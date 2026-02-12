#include <stdio.h>


int checkNbr (int a)
{
        return (a > 0);
}


int main(void)
{
 int a;
 printf("Entrer un nombres entiers: ");
 scanf("%d", &a);
 printf("checkNbr(%d)->%s\n", a, checkNbr(a) ? "positif" : "negatif");
 return 0;

}
