#include <stdio.h>

int main() {
    int n = 0 ;
    int k = 0;
    int e = 0;

    printf("Entrer le nombre de lignes:\n");
    scanf("%d", &n);
    e = n-1;

    for (int i = 0; i < n; i++)
    {    
        for (int e = n-1; e > i; e--)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) 
        {
            printf("%d ",i+1);
            k++;
           
        }
        printf("\n");
    }
  return 0;
}

