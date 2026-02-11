#include <stdio.h>


int checkNbr (int a, int b)
{
        return (a == 6 || b == 6 || a + b == 6 || a - b == 6 || b - a == 6);
}


int main(void)
{
 int a, b;
 printf("Entrer 2 nombres entiers séparer d'une virgule: ");
 scanf("%d,%d", &a, &b);
 printf("checkNbr(%d,%d)->%s\n", a, b, checkNbr(a, b) ? "TRUE" : "FALSE");
 return 0;

}



