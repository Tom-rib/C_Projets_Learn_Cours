1. Job01:


#include <stdio.h>

//Déclarez la fonction "checkNbr" avec deux paramètres
int checkNbr(int n1, int n2); 

int main(void)
{
    /* Appeler la fonction "checkNbr" avec  
       l'argument 1 et 20 et afficher le résultat */
    printf("%d", checkNbr(1,20));

    /* Appeler la fonction "checkNbr" avec 
       l'argument 51 et 60 et afficher le résultat */
    printf("%d", checkNbr(51,60));
}

// Définition de la fonction "checkNbr"
int checkNbr(int n1, int n2)
{
    // Retourne 1 (true) si l'une des conditions suivantes est vraie
    return (n1 >= 100 && n1 <= 200) || (n2 >= 100 && n2 <= 200);
}



2. Job02:


#include <stdio.h>

//Déclarez la fonction "nbrProche" avec deux paramètres
int nbrProche(int n1, int n2); 

int main(void)
{
    /* Appeler la fonction "nbrProche" avec  
       l'argument 80 et 98 et afficher le résultat */
    printf("%d", nbrProche(80,98));

    /* Appeler la fonction "nbrProche" avec 
       l'argument 70 et 70 et afficher le résultat */
    printf("%d", nbrProche(70,70));
}

// Définition de la fonction "nbrProche"
int nbrProche(int n1, int n2)
{
    int n = 100;
    // Calculer la différence absolue entre n1 et n et la stocker dans v1
    int v1 = abs(n1 - n); 
    // Calculer la différence absolue entre n2 et n et la stocker dans v2
    int v2 = abs(n2 - n); 
    // Retourne 1 (true) si l'une des conditions suivantes est vraie
    return v1 == v2 ? 0 : (v1 < v2 ? n1 : n2);
}



3. Job03:

#include <stdio.h>

int main()  
{  
    int A, B, C;

    printf("Entrée deux angles du triangle séparés par une virgule:");  
    // Lire les deux angles, séparés par virgule
    scanf("%d, %d", &B, &C);  

    A = 180 - (B + C);

    printf("Troisième angle du triangle: %d\n", A);  

    return 0;  
}




4. Job04:


#include <stdio.h>

int main()  
{
  int n1, n2;   
  int som, sous, mult, mod;
  float div;

  printf("Entrez deux nombres séparés par une virgule:");
  scanf("%d,%d", &n1, &n2);

  som = n1 + n2;
  sous = n1 - n2;
  mult = n1 * n2;
  div = (float)n1 / n2;
  mod = n1 % n2;  

  printf("La somme est: %d\n", som); 
  printf("La soustraction est: %d\n", sous);
  printf("Le produit est: %d\n", mult);
  printf("La division est: %f\n", div);
  printf("Le reste de la division est: %d\n", mod);

  return 0;    
}



5. Job05:



#include <stdio.h>

int main() 
{  
  int n1, n2, n3;
  int s;
  char tab[100];
  
  printf("Entrez trois nombres séparés par une virgule:");
  
  // Lire la ligne de l'utilisateur et la stocker dans 'tab'
  fgets(tab, sizeof(tab), stdin);
  
  /* Convertit la ligne entrée en des nombres entiers et 
     les stocke dans 'n1', 'n2', 'n3' */
  sscanf(tab, "%d, %d, %d", &n1, &n2, &n3);
  
  s = n1 + n2 + n3;
  
  printf("La somme des trois nombres est: %d\n", s);
  
  return 0; 
}



6. Job06:


#include <stdio.h>

int main() {
  char prenom[20], nom[20];
  int an;

  printf("Saisissez votre prénom:");
  scanf("%s", prenom);

  printf("Saisissez votre nom:");
  scanf("%s", nom);

  printf("Saisissez votre année de naissance:");
  scanf("%d", &an);

  printf("%s %s %d\n", prenom, nom, an);

  return 0;  
}



7. Job07:

#include <stdio.h>

int main() {
  int minutes;
  int heures;
  int mins;

  // nombre de minutes par heure
  const int MinHR = 60; 

  printf("Entrez le nombre de minutes:");
  scanf("%d", &minutes);

  heures = (minutes / MinHR);
  mins = (minutes % MinHR);

  printf("%d Heures, %d Minutes.", heures, mins);

  return 0;  
}


8. Job08:

#include <stdio.h>

int main() {
  int minutes;
  int heures;
  int mins;

  // nombre de minutes par heure
  const int MinHR = 60; 

  printf("Entrez le nombre de heures:");
  scanf("%d", &heures);

  printf("Entrez le nombre de minutes:");
  scanf("%d", &minutes);
  
  // Calculez le nombre total de minutes
  mins = minutes + (heures * MinHR);

  printf("Le nombre total de minutes est: %d", mins);

  return 0;  
}


9. Job09:

#include <stdio.h>

int main() {
  float kmph;
  float miph; 

  printf("Entrer les kilomètres par heure");
  scanf("%f", &kmph);
  
  // Convertir les kilomètres par heure en miles par heure
  miph = (kmph * 0.6213712);

  printf("%f miles par heure", miph);

  return 0;  
}


10. Job10:


#include <stdio.h>

int main() {
  float largeur;
  float hauteur; 
  float perimetre; 

  printf("Saisir la hauteur du rectangle:");
  scanf("%f", &largeur);
  
  printf("Saisir la largeur du rectangle:");
  scanf("%f", &hauteur);
  
  perimetre = 2.0 * (hauteur + largeur);

  printf("Le périmètre du rectangle est: %f", perimetre);

  return 0;  
}