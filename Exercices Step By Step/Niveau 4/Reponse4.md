1. Job01:

#include <stdio.h>
int main() 
{
    int distance;
    float carburant;
    printf("Entrer la distance totale en km:");
    scanf("%d", &distance);
    
    printf("Entrer le carburant total dépensé en litres:");
    scanf("%f", &carburant);
    
    printf("Consommation moyenne (km/litre) = %.3f ",distance/carburant);
    printf("\n");
    return 0;
}

2. Job02:

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distance; 
    
    printf("Entrée x1:");
    scanf("%f", &x1);
    printf("Entrée y1:");
    scanf("%f", &y1);
    
    printf("Entrée x2:");
    scanf("%f", &x2);
    printf("Entrée y2:");
    scanf("%f", &y2);
    
    // Calculer la distance entre les points
    distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    
    printf("Distance entre ces points est: %.4f", sqrt(distance));
    
    return 0;
}




3. Job03:


#include <stdio.h>

//Déclarez la fonction "foncSomme" avec deux paramètres
int foncSomme(int a, int b); 

int main(void)
{
    /* Appeler la fonction "foncSomme" avec  
       les arguments 1 et 2 et afficher le résultat */
    printf("%d \n", foncSomme(1, 2));

    /* Appeler la fonction "foncSomme" avec 
       les arguments 2 et 2 et afficher le résultat */
    printf("%d", foncSomme(2, 2));
}

// Définition de la fonction "foncSomme"
int foncSomme(int a, int b)
{
    /* Expression conditionnelle : Si a est égal à b, 
     retourner (a + b) multiplié par 3, sinon retourner a + b */
    return a == b ? (a + b) * 3 : a + b;
}


4. Job04:

#include <stdio.h>

int check(int a, int b);

int main(void)
{
    printf("check(15, 5) -> %s\n", check(15, 5) ? "TRUE" : "FALSE");
    printf("check(15, 20) -> %s\n", check(15, 20) ? "TRUE" : "FALSE");
    printf("check(15, 25) -> %s\n", check(15, 25) ? "TRUE" : "FALSE");
    
    return 0;
}

int check(int a, int b)
{
    return (a == 20 || b == 20 || (a + b) == 20);
}

############################

 printf("check(15, 25) -> %s\n", check(15, 25) ? "TRUE" : "FALSE");

 ? = if donc si le return est vrai ca écris true

 : = else  donc si le return est faux ca écris false




5. Job05:


#include <stdio.h>

//Déclarez la fonction "check" avec deux paramètres
int check(int n); 

int main(void)
{
    /* Appeler la fonction "check" avec  
       l'argument 3 et afficher le résultat */
    printf("%d", check(3));

    /* Appeler la fonction "check" avec 
       l'argument 12 et afficher le résultat */
    printf("%d", check(12));
}

// Définition de la fonction "check"
int check(int n)
{
    // Retourne 1 (true) si l'une des conditions suivantes est vraie
    return n % 3 == 0 || n % 7 == 0;
}




6. Job06:

#include <stdio.h>

int main()
{
  int Nbr,rev=0;   
  printf("Donner un nombre:");
  scanf("%d",&Nbr);

  while(Nbr > 0){
    rev = rev * 10;  
    rev = rev + Nbr%10; 
    Nbr = Nbr/10;
  }
  printf("%d",rev);   

  return 0; 
}




7. Job07:

#include <stdio.h>
int main()
{
  int Nbr,i,j;   
  printf("Entrez un nombre:");
  scanf("%d",&Nbr);
  for(i=0; i < Nbr; i++){
    for(j=1; j <= (Nbr*2)-1; j++){
      if (j >= Nbr-i && j <= Nbr+i)                    
        printf("*");
      else   
        printf(" ");   
    }
    printf("\n");      
  }  
  return 0; 
}

8. Job08:


#include <stdio.h>

int main()
{
  int i=2,Nbr;
  
  printf("Entrer un nombre :"); 
  scanf("%d",&Nbr);
  
  while(Nbr%i != 0 && i < Nbr){
    i++;
  }
  
  if (i == Nbr) 
    printf("%d est un nombre premier",Nbr);
  else  
    printf("%d n'est pas un nombre premier",Nbr);
    
  return 0; 
}

9. Job09:


#include <stdio.h>

int main()
{
  int e, i;
  float puissance,b;
  puissance = 1;
  
  printf("Entrer la base:"); 
  scanf("%f",&b);
  printf("Entrer l'exposant:"); 
  scanf("%d",&e);
     
  for(i=1; i<=e; i++){
    puissance = puissance * b;
  }
 
  printf("%.1f ^ %d = %.1f",b,e,puissance);

  return 0; 
}

10. Job10:




#include <stdio.h>
int main()
{
  int age;
  
  printf("Entrer votre age :"); 
  scanf("%d",&age);
  if(age >= 6 && age <= 7) 
    printf("Vous êtes Gamin");
    
  if(age >= 8 && age <= 9) 
    printf("Vous êtes Pupille");
  if(age >= 10 && age <= 11)
    printf("Vous êtes Jeune");
  if(age >= 12) 
    printf("Vous êtes Cadet"); 
  return 0; 
}