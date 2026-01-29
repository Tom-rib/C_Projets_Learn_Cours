1. Job01:

#include <stdio.h>
 
int main()
{
  printf("Hello, World!");
  return 0;
}




2. Job02:

#include <stdio.h>
 
int main() 
{ 
    printf("Nom               : Alex Babtise \n"); 
    printf("Date de naissance : Janvier 10, 2004\n"); 
    printf("Tél               : 0785463521\n"); 
    return 0; 
} 



3. Job03:



#include <stdio.h>
int main() 
{
  float n1,n2,s;
  
  printf("Entrer 1er nombre:"); 
  scanf("%f",&n1);
  printf("Entrer 2éme nombre:"); 
  scanf("%f",&n2);
  
  s = n1 + n2 ;
  
  printf("La somme de %f et %f = %f",n1,n2,s);
  
  return 0;   
}


4. Job04:

#include <stdio.h>
int main() 
{
    int largeur,hauteur,surface,perimeter; 
    hauteur = 8;
    largeur = 4;
    /* Calculer le périmètre du rectangle */
    perimeter = 2*(hauteur + largeur);
    printf("Périmètre du rectangle = %d cm\n", perimeter);
  
    /* Calculer la surface du rectangle */
    surface = hauteur * largeur;
    printf("Surface du rectangle = %d cm²\n", surface);
    return(0);
}




5. Job05:

#include <stdio.h>
int main() {
   int rayon = 5;      
   float surface, perimeter;
   /* Calculer le périmètre du cercle */
   perimeter = 2 * 3.14 * rayon;
   printf("Périmètre du cercle = %f cm\n", perimeter);
  
   /* Calculer la surface du cercle */
   surface = 3.14 * rayon * rayon;
   printf("Surface du cercle = %f cm²\n", surface);
   return(0);
}



6. Job6:

#include <stdio.h>
int main() 
{
  int n1,n2,tmp;
  
  printf("Entrer un entier n1:");
  scanf("%d",&n1);
  printf("Entrer un entier n2:");
  scanf("%d",&n2);
  
  tmp = n1;
  n1 = n2;        
  n2 = tmp;
  
  printf("------permutation------\n");
  printf("n1 = %d\n",n1);
  printf("n2 = %d",n2);
  return 0;   
}



7. Job07:

#include <stdio.h>

int main()
{
  int nbr,f=1,i; 

  printf("Saisir un nombre:");
  scanf("%d",&nbr);
  
  for(i=1; i<=nbr; i++){
    f = f * i;
  } 
  
  printf("Le factoriel de %d est: %d",nbr,f);
   
  return 0; 
}


8. Job08

#include <stdio.h>

int main() 
{
  int nbr;
  
  printf("Entrer un nombre:");
  scanf("%d",&nbr);
  
  if (nbr % 2 == 0) 
    printf("Nombre pair");
  else
    printf("Nombre impair");

  return 0; 
}


9. Job09

#include <stdio.h>

int main() 
{
  int n1,n2,n3,max;
  
  printf("Entrer 1er nombre:"); 
  scanf("%d",&n1);
  printf("Entrer 2éme nombre:"); 
  scanf("%d",&n2);
  printf("Entrer 3éme nombre:"); 
  scanf("%d",&n3);

  max = n1; 
  if (n2 >= max) 
    max = n2;
  if (n3 >= max) 
    max = n3;
  
  printf("Le nombre le plus grand est: %d",max);

  return 0; 
}


10. Job10

Le programme ci-dessus demande à l'utilisateur un nombre de 1 à 5 jusqu'à ce que la réponse est correct.