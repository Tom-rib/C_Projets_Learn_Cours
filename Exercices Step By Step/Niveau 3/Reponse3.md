1. Job01:

#include <stdio.h>
int main()
{
  int i=0;  
   
  do  { 
    printf("Hello\n");
    i++;
  } while (i<10);
  
  return 0; 
}

2. Job02:

#include <stdio.h>
int main()
{
  int i=1,sum=0;  
  do{ 
    sum = sum + i;
    i++;
  } while (i <= 10) ;
  printf("La somme de 1 à 10 est: %d",sum);
  return 0; 
}

3. Job03:


#include <stdio.h>
int main()
{
  int i=0; 
  do{ 
    printf ("2 x %d = %d\n",i,i*2);
    i++;
  }while(i<10);
  return 0; 
}



4. Job04:


#include <stdio.h>
int main()
{
    int jours, an, semaines;
    jours = 2570; // Nombre total de jours
    // Calculer les années
    an = jours/365; 
    // Calculer les semaines restants
    semaines = (jours % 365)/7; 
    // Calculer les jours restants
    jours = jours - ((an*365) + (semaines*7)); 
    // Afficher les résultats
    printf("Années: %d\n", an);
    printf("Semaines: %d\n", semaines);
    printf("Jours: %d", jours);
    return 0;
}



5. Job05:

#include <stdio.h>
int main() {
    int heures;
    double sph, salaire;
    printf("Saisir les heures de travail: ");
    scanf("%d", &heures);
    printf("Montant du salaire/heure: ");
    scanf("%lf", &sph);
    // Calculer le salaire total
    salaire = sph * heures;
    // Afficher le salaire
    printf("Salaire = %.2lf €\n", salaire);
    return 0;
}



6. Job06:

#include <stdio.h>
int main()
{
  int i,n;   
  printf("Entrer un nombre: ");
  scanf("%d",&n);
  for(i=0; i<=n; i++){
      if (i%2 == 0)
      printf(" %d ",i);
  }
  return 0; 
}

7. Job07:


#include <stdio.h>

int main()
{
  int n,i,sum=0;    
  printf("Entrer un nombre:");
  scanf("%d",&n);

  for(i=1; i<=n; i++){
    if(i%2 != 0)
      sum = sum + i;
  }
  printf("La somme des nombres impairs est: %d",sum);

  return 0; 
}



8. Job08:


#include <stdio.h>

int main()
{
  int n1,n2,pgcd,i=1; 
  
  printf("Entrer un nombre:");
  scanf("%d",&n1);
  printf("Entrer un nombre:");
  scanf("%d",&n2);

  while(i<=n1 && i<=n2){
    if(n1%i==0 && n2%i==0){
      pgcd = i; 
    }
    i++;
  }
  printf("Le PGCD de %d et %d est:) = %d",n1,n2,pgcd);

  return 0; 
}




9. Job09:


#include <stdio.h>
int main()
{
  int n,i,j;
  
  printf("Donner un nombre:");
  scanf("%d",&n);
  for(i=1; i<=n; i++){
    for(j=1; j<=i; j++){
      printf("%d",i);
    }  
    printf("\n");
  }
  return 0; 
}



10. Job10:



#include <stdio.h>
int main()
{
  int n,i=1;   
  printf("Donner un nombre:");
  scanf("%d",&n);   
  
  while(n/10 != 0){
    n = n/10;  
    i = i+1;
  }
  printf("Le nombre de chiffres est %d",i);    
  return 0; 
}