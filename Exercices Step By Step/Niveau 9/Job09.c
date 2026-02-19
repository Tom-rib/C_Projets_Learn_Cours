#include <stdio.h>

int main(void)
{
    int a = 0;      
    int b = 1;      
    int sum;
    int nombre = 0;  
    
    printf("Les 10 premiers nombres de Fibonacci: \n");
    
    while (nombre < 10)  
    {
        printf("%d, ", a);  
        
        sum = a + b;  
        a = b;        
        b = sum;      
        
        nombre++;
    }
    
    printf("\n");
    return 0;
}