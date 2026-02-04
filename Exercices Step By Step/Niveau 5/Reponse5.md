1. Job01:

#include <stdio.h>
 
void main()
{
    float celsius,fahrenheit;
 
    printf("Entrez la température en degrés Celsius:");
    scanf("%f",&celsius);
 
    fahrenheit = (1.8 * celsius) + 32;
    printf("La température en Fahrenheit est: %f ",fahrenheit);
 
    return 0;
}



2. Job02:



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




3. Job03:


#include <stdio.h>

int main()
{
  int N1,N2,N3,tmp;
  
  printf("Entrer le nombre N1:"); scanf("%d",&N1);
  printf("Entrer le nombre N2:"); scanf("%d",&N2);
  printf("Entrer le nombre N3:"); scanf("%d",&N3);


  if(N1>N2) { tmp = N1; N1 = N2; N2 = tmp; }
  if(N1>N3) { tmp = N1; N1 = N3; N3 = tmp; } 
  if(N2>N3) { tmp = N2; N2 = N3; N3 = tmp; }

  
  printf("N1 = %d\n", N1);
  printf("N2 = %d\n", N2);
  printf("N3 = %d", N3);

  return 0; 
}




4. Job04:


#include <stdio.h>

//Déclarez la fonction "checkTemp" avec deux paramètres
int checkTemp(int t1, int t2); 

int main(void)
{
    /* Appeler la fonction "checkTemp" avec  
       l'argument 100 et -1 et afficher le résultat */
    printf("%d", checkTemp(100, -1));

    /* Appeler la fonction "checkTemp" avec 
       l'argument 2 et 100 et afficher le résultat */
    printf("%d", checkTemp(2, 100));
}

// Définition de la fonction "checkTemp"
int checkTemp(int t1, int t2)
{
    // Retourne 1 (true) si l'une des conditions suivantes est vraie
    return t1 < 0 && t2 > 50 || t2 < 0 && t1 > 50;
}

5. Job05:


#include <stdio.h>
 
void paireOuImpaire(int N) 
{ 
    // Trouver le reste
    int reste = N % 2; 
  
    if (reste == 0){ 
        printf("Paire"); 
    } else{ 
        printf("Impaire"); 
    } 
} 

int main() 
{ 
    // Appel à la fonction
    paireOuImpaire(N); 
  
    return 0; 
}


6. Job06:


#include <stdio.h>
 
int nbrChar(char str[]) {
    int lg;  // lg stocke la longueur de la chaîne
    
    /* incrémenter la variable lg jusqu'à la fin 
       de la chaîne de caractères */
    for(lg = 0; str[lg] != '\0'; ++lg);
    
    // renvoie le nombre de caractères de la chaîne
    return lg; 
}

int main() 
{ 
    // Appel à la fonction
    int n = nbrChar("Hello");     // n = 5
  
    return 0; 
}



7. Job07:


#include <stdio.h>
 
int nbrAbsolue(int n)
{
    return n < 0 ? -n : n;
}

int main() 
{ 
    // Appel à la fonction
    int n = nbrAbsolue(-5);     // n = 5
  
    return 0; 
}

8. Job08:


#include <stdio.h>
 
int compterNbrOccurrence(char* str, char c) { 
    int compteur = 0; 
    while (*str) { //itérer caractère par caractère
        if (*str == c){ //vérifier s'il y a une correspondance 
            compteur++; //incrémenter le cmpt s'il y a une correspondance 
        }
        str++; // passer au caractère suivant
    } 
    return compteur; //renvoyer le nbr de fois le caractère s'est trouvé
} 
 
int main() { 
    char str[100]; 
    char c; 
     
    printf("Saisissez une chaîne de caractères:"); 
    scanf("%s", str); 
 
    printf("Saisir le caractère à rechercher:"); 
    scanf("%c", &c); 
 
    int o = compterNbrOccurrence(str, c); 
 
    printf("Le caractère '%c' apparaît %d fois(s) dans la chaîne de caractères.\n", c, o); 
 
    return 0; 
} 



9. Job09:


