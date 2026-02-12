#include <stdio.h>

char *checkNbr(int T)
{
    if (T <= 0)
        return "Temps Glacial";
    else if (T <= 10)
        return "Temps très froid";
    else if (T <= 20)
        return "Temps froid";
    else if (T <= 30)
        return "Températures normales";
    else if (T <= 40)
        return "Temps Chaud";
    else
        return "Temps très chaud";
}

int main(void)
{
    int T;
    printf("Entrer la températures: ");
    scanf("%d", &T);
    printf("checkNbr(%d)->%s\n", T, checkNbr(T));
    return 0;
}