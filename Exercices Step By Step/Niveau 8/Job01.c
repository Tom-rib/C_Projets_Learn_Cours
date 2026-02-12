#include <stdio.h>


int checkNbr (int a, int b)
{
        return (a == b);
}


int main(void)
{
 int a, b;
 printf("Entrer 2 nombres entiers séparer d'une virgule: ");
 scanf("%d,%d", &a, &b);
 printf("checkNbr(%d,%d)->%s\n", a, b, checkNbr(a, b) ? "égaux." : "pas égaux.");
 return 0;

}
