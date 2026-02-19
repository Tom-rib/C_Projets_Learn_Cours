#include <stdio.h>


int checkList (int a, int b, int c)
{
        a = a % 10;
        b = b % 10;
        c = c % 10;
        
        return (a == b || a == c || b == c);
}


int main(void)
{
 int a, b, c;
 printf("Entrer 3 nombres entiers séparer d'une virgule: ");
 scanf("%d,%d,%d", &a, &b, &c);
 printf("checkList(%d,%d,%d)->%s\n", a, b, c, checkList(a, b, c) ? "TRUE" : "FALSE");
 return 0;

}



