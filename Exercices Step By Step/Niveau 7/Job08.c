#include <stdio.h>


int checkSum (int a, int b, int c)
{
        return (a + b == c || a + c == b || b + c == a);
}


int main(void)
{
 int a, b, c;
 printf("Entrer 3 nombres entiers séparer d'une virgule: ");
 scanf("%d,%d,%d", &a, &b, &c);
 printf("checkSum(%d,%d,%d)->%s\n", a, b, c, checkSum(a, b, c) ? "TRUE" : "FALSE");
 return 0;

}



