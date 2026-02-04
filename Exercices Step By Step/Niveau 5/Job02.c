#include <stdio.h>

int main()
{
  int N1,N2;
  
  printf("Entrer le nombre N1:");
  scanf("%d", &N1);
  printf("Entrer le nombre N2:");
  scanf("%d", &N2);
  
  N1 = N1 + N2;
  N2 = N1 - N2;        
  N1 = N1 - N2;

  printf("N1 = %d\n", N1);
  printf("N2 = %d", N2);

  return 0; 
}