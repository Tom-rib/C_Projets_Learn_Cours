#include <stdio.h>

int main(void)
{
    int n = 0;
    
    printf("Entrer le nombre de lignes:\n");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {   
        {
            
            for (int e = 0; e < n - i - 1; e++)
            {
                printf(" ");
            }
            
            for (int j = 1; j <= i + 1; j++)
            {
                printf("%d", j);
            }

            for (int j = i; j >= 1; j--)
            {
                printf("%d", j);
            }
            
            printf("\n");
        }
    }
    
    return 0;
}