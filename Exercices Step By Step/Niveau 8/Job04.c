#include <stdio.h>


int checkNbr (int a)
{
        return (a >= 18 );
}


int main(void)
{
 int a;
 printf("Entrer votre age: ");
 scanf("%d", &a);
 printf("checkNbr(%d)->%s\n", a, checkNbr(a) ? "Vous pouvez voter" : "Retourne jouer au pokemon");
 return 0;

}
