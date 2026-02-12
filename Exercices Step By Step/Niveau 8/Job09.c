#include <stdio.h>


int main(void){
    char c;
    printf("Saisir un caractère:");
    scanf("%c",&c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||  c == 'à' || c == 'é' || c == 'è' || c == 'â' || c == 'ê' || c == 'î' || c == 'û' || c == 'ô')
        {
            printf("C'est une voyelle");
        }
        else
         {
            printf("C'est une consonne");
        }
        

    }

    else {
    printf("Ce n'est pas un caractère alphabet\n");

} 

return 0;

}