#include <stdio.h>

int main() {
    int n = 0 ;

    printf("Entrer le nombre de lignes:\n");
    scanf("%d", &n);

{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++) 
        {
            printf("%d",i+1);
        }
        printf("\n");
    }
  return 0;
}
}