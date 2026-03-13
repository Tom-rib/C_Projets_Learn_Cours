#include <stdio.h>

int main(void)
{
    int n = 0;
    int triangle[6][6];

     printf("Entrer le nombre de lignes:\n");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        for (int e = 0; e < n - i - 1; e++)
            printf(" ");
        
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                triangle[i][j] = 1;
            else
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
