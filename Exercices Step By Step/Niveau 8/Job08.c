#include <stdio.h>


int main(void){
    char c;
    printf("Saisir un caractère:");
    scanf("%c",&c);

    if (c >= '0' && c <= '9')
    {
       printf("C'est un chiffre\n");
    }
    
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("C'est un alphabet");

    }

    else {
    printf("C'est un caractère spécial\n");
} return 0;

}