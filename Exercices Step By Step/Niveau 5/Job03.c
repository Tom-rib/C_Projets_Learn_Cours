#include <stdio.h>

int main()
{
  int N1,N2,N3,min,midel,max=0;
  
  printf("Entrer le nombre N1:");
  scanf("%d", &N1);
  printf("Entrer le nombre N2:");
  scanf("%d", &N2);
  printf("Entrer le nombre N3:");
  scanf("%d", &N3);

  printf("Le nombre N1: %d\n", N1);
  printf("Le nombre N2: %d\n", N2);
  printf("Le nombre N3: %d\n", N3);

  
  if (N1 > N2 && N1 > N3)
  {
   max = N1;
  }

  else if (N1<N2 && N1>N3 || N1>N2 && N1<N3 )
  {
    midel = N1;
  }
  else{min = N1;}

  

 if (N2 > N1 && N2 > N3)
  {
   max = N2;
  }

  else if (N1>N2 && N2>N3 || N1<N2 && N2<N3 )
  {
    midel = N2 ;
  }
  else{min = N2;}


  if (N3 > N1 && N3 > N2)
  {
   max = N3;
  }

  else if (N3>N2 && N3<N1 || N3<N2 && N3>N1 )
  {
    midel = N3;
  }
  else{min = N3;}


  printf("-----permutation-----\n");
  printf("Le nombre N1: %d\n", min);
  printf("Le nombre N2: %d\n", midel);
  printf("Le nombre N3: %d\n", max);

  return 0; 
}