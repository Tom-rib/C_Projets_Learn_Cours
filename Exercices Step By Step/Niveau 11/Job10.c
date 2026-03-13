#include <stdio.h>

int main() 
{
   int i, j, n, espace;
   char lettre;

   printf("Entrer le nombre de lignes: ");
   scanf("%d", &n);

   for (i = 1; i <= n; i++)
   {
       for(espace = 0; espace < n - i; espace++) 
           printf("  ");

       lettre = 'A';

       for (j = 0; j < i; j++) 
       {
           printf("%c", lettre++);
       }

       lettre = lettre - 2;
       for (j = 0; j < i - 1; j++) 
       {
           printf("%c", lettre--);
       }

       printf("\n");
   }
   return 0;
}