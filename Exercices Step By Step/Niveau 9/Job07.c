#include <stdio.h>
#include <math.h>

int main(void)
{
    long long n = 0;
    long long sum = 0;
    
    printf("Saisir le nombre X pour calculer les cubes des nombres pairs: ");
    scanf("%lld", &n);
   
    for (int i = 2; i <= n; i += 2)
    {
        long long cube = pow(i, 3); 
        sum = sum + cube;
    }
    
    printf("Somme des cubes des nombres pairs jusqu'à %lld: %lld\n", n, sum);
    
    return 0;
}