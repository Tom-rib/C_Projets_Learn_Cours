1. Job01:

#include <stdio.h>

int main() 
{
  int n;
  
  printf("Entrer un nombre :");
  scanf("%d",&n);
  
  if(n >= 0)
    printf("La valeur absolue de %d est %d",n,n);
  else 
    printf("La valeur absolue de %d est %d",n,-n);
    
  return 0; 
}



2. Job02:


#include <stdio.h>
int main() 
{
  int n1,n2,n3,moy;
  
  printf("Entrer 1er nombre:"); 
  scanf("%d",&n1);
  printf("Entrer 2éme nombre:"); 
  scanf("%d",&n2);
  printf("Entrer 3éme nombre:"); 
  scanf("%d",&n3);
  
  moy = (n1 + n2 + n3) / 3 ; 
  
  printf("La moyenne est: %d", moy);
  return 0; 
}


3. Job03:

#include <stdio.h>

int main()
{
  int i=1;  
  while(i <= 10 ) { 
    printf("Hello\n");
      i++; 
  }
  return 0;
}

4. Job04:

#include <stdio.h>
int main()
{
  int i=1, sum=0;  
  while(i <= 10){ 
     sum = sum + i;
     i++;  
  }
   
  printf("La somme de 1 à 10 est: %d\n", sum);
  return 0; 
}


5. Job05:

#include <stdio.h>

int main()
{
  int i=1,sum=0,n;  
  
  printf("Entrer un nombre:");
  scanf ("%d",&n);
  
  while (i <= n) { 
    sum = sum + i;
    i++;  
  }
  
  printf("la somme de 1 à %d est: %d\n",n,sum);
  return 0; 
}

6. Job06:

#include <stdio.h>
int main()
{
  int i;  
  for (i= 0; i < 10; i++) { 
    printf("Hello\n");
  }
  return 0; 
}


7. Job07:

#include <stdio.h>
int main()
{
  int i, sum=0; 
  for (i=1; i<=10; i++){ 
    sum = sum + i ;
  } 
  printf("La somme de 1 à 10 est: %d" , sum);
  return 0; 
}

8. Job08:

#include <stdio.h>
int main()
{
  int i,sum=0,n; 
  
  printf("Entrer un nombre:");
  scanf("%d",&n);
  
  for(i=1; i<=n; i++){ 
    sum = sum + i;
  } 
  
  printf("La somme de 1 à n est: %d",n,sum);
  return 0; 
}

9. Job09:

#include <stdio.h>
int main()
{
  int i; 
  for (i=0; i<=10 ; i++){ 
    printf("3 x %d = %d \n",i,i*3);
  } 
  return 0; 
}

10. Job10:


#include <stdio.h>
int main()
{
  int i,n; 
  
  printf("Entrer un entier:");
  scanf("%d",&n);
  
  for(i=1; i<=10; i++){ 
    printf("%d x %d = %d\n",n,i,i*n);
  } 
  
  return 0; 
}