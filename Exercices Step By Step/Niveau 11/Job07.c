#include <stdio.h>

int main(void)
{
    int n = 0;
    int k = 1;
    int espaces = 0;
    
    printf("Entrer le nombre de lignes:\n");
    scanf("%d", &n);
    
    espaces = n - 1; 
    for (int i = 0; i < n; i++)
    {
        for (int e = 0; e < espaces; e++)
        {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
            k++;
        }
        
        espaces--;
        printf("\n");
    }

        espaces =  1; 
     for (int i = n-2; i >= 0; i--)
    {
        for (int e = 0; e < espaces; e++)
        {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
            k++;
        }
        
        espaces++;
        printf("\n");
    }
    return 0;
}
