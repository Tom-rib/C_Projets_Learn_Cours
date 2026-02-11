1. Job01:

#include <stdio.h>

int main() {
  float rayon;
  float volume; 
  const float PI = 3.14;

  printf("Entrez le rayon de la sphère:");
  scanf("%f", &rayon);
  
  volume = (4.0 / 3.0) * PI * (rayon * rayon * rayon);

  printf("Le volume de la sphère est: %f", volume);

  return 0;  
}


2. Job02:


#include <stdio.h>
#include <stdlib.h> 
  
int main() 
{ 
    // Définir un tableau de caractères contenant la chaîne de caractères 
    char str[] = "3.14"; 
  
    // Convertir la chaîne de caractères en un double et 
    // le stocker dans la variable n à l'aide de la fonction atof 
    double n = atof(str); 
  
    // Afficher la valeur double convertie à l'aide de printf 
    printf("Le double converti est: %f", n); 
  
    return 0; 
}

3. Job03:


#include <stdio.h>
#include <stdlib.h>
int main() {
  long int n, d;
  ldiv_t res;
  printf("Entrez le numérateur:"); 
  scanf("%ld",&n);
  printf("Entrez le dénominateur:");
  scanf("%ld",&d);
  /* Effectuez la division à l'aide de la fonction ldiv 
     et stockez le résultat dans "res" */
  res = ldiv(n,d);   
  printf("quotient = %ld, reste = %ld", res.quot, res.rem);
  return 0;  
}

4. Job04:


#include <stdio.h>
#include <stdlib.h>

int main() {
  long int n, d;
  ldiv_t res;

  printf("Entrez le numérateur:"); 
  scanf("%ld",&n);

  printf("Entrez le dénominateur:");
  scanf("%ld",&d);

  /* Effectuez la division à l'aide de la fonction ldiv 
     et stockez le résultat dans "res" */
  res = ldiv(n,d);   

  printf("quotient = %ld, reste = %ld", res.quot, res.rem);

  return 0;  
}



5. Job05:

#include <stdio.h>
#include <stdlib.h>

int main() {
  char * path;

  /* Récupérer la valeur de la variable d'environnement "PATH"
  et l'affecter à "path". */
  path = getenv("PATH");   

  /* Vérifier si 'path' n'est pas NULL 
  (c'est-à-dire si la variable d'environnement a été trouvée) */
  if(path != NULL)   
    printf("La chaîne d'environnement 'PATH' est: %s", path);

  return 0;  
}


6. Job06:


#include <stdio.h>
#include <stdlib.h> 
  
int main() 
{ 
    // Définir un tableau de caractères contenant la chaîne de caractères 
    char str[] = "10"; 
  
    // Convertir la chaîne de caractères en un entier et 
    // le stocker dans la variable n à l'aide de la fonction atoi 
    int n = atoi(str); 
  
    // Afficher la valeur int convertie à l'aide de printf 
    printf("La valeur entier converti est: %d", n); 
  
    return 0; 
}


7. Job07:

#include <stdio.h>

//Déclarez la fonction "checkList" avec trois paramètres
int checkList(int n1, int n2, int n3); 

int main(void)
{
    printf("%d", checkList(11,21,41));   // TRUE
    printf("%d", checkList(11,25,41));   // TRUE
    printf("%d", checkList(13,21,46));   // FALSE
}

// Définition de la fonction "checkList"
int checkList(int n1, int n2, int n3)
{
    /* Vérifier si le dernier chiffre de 'n1' est égal au dernier 
       chiffre de 'n2' ou de 'n3' ou si le dernier chiffre de 'n2' est
       égal au dernier chiffre de 'n3'. */
    if (n1 % 10 == n2 % 10 || n1 % 10 == n3 % 10 || n2 % 10 == n3 % 10) {
        //Si l'une de ces conditions est vraie, la valeur 1 est renvoyée
        return 1;
    } else {
        //Si aucune des conditions n'est vraie, la valeur 0 est renvoyée
        return 0; 
    }
}


8. Job08:


#include <stdio.h>

//Déclarez la fonction "checkSum" avec trois paramètres
int checkSum(int n1, int n2, int n3); 

int main(void)
{
    printf("%d", checkSum(1,2,3));   // TRUE
    printf("%d", checkSum(5,5,10));  // TRUE
    printf("%d", checkSum(2,2,1));   // FALSE
}

// Définition de la fonction "checkSum"
int checkSum(int n1, int n2, int n3)
{
    /* Vérifier si deux nombres parmi 'n1', 'n2' et 'n3' 
       s'additionnent pour former le troisième nombre. */
    if (n1 == n2 + n3 || n2 == n1 + n3 || n3 == n1 + n2) {
        return 1; // Si la condition est vraie, retournez 1
    } else {
        return 0; // Si la condition est fausse, retournez 0
    }
}


9. Job09:


#include <stdio.h>

//Déclarez la fonction "checkNbr" avec un paramètre
int checkNbr(int n); 

int main(void)
{
    printf("%d", checkNbr(3));   // TRUE
    printf("%d", checkNbr(7));   // TRUE
    printf("%d", checkNbr(21));  // FALSE
}

// Définition de la fonction "checkNbr"
int checkNbr(int n)
{
    /* Vérifier si "n" est divisible par 3 XOR divisible par 7
    XOR (^) retourne vrai si l'une des conditions est remplie, 
    mais pas les deux. */
    if (n % 3 == 0 ^ n % 7 == 0) {
        return 1; // Si la condition XOR est vraie, retourner 1 (vrai)
    } else {
        return 0; // Si la condition XOR est fausse, retourner 0 (faux)
    }
}


10. Job10:



#include <stdio.h>
//Déclarez la fonction "checkNbr" avec deux paramètre
int checkNbr(int n1, int n2); 
int main(void)
{
    printf("%d", checkNbr(6,1));  // TRUE
    printf("%d", checkNbr(3,3));  // TRUE
    printf("%d", checkNbr(3,2));  // FALSE
}
// Définition de la fonction "checkNbr"
int checkNbr(int n1, int n2)
{
    /* Vérifiez si "n1" est égal à 6, si "n2" est égal à 6, 
        si la somme de "n1" et "n2" est égale à 6 ou
        si la différence absolue entre "n1" et "n2" est égale à 6 */
    if (n1 == 6 || n2 == 6 || n1 + n2 == 6 || abs(n1 - n2) == 6) {
        //Si l'une des conditions est remplie, retourner 1 (true)
        return 1; 
    } else {
        //Si aucune des conditions n'est remplie, renvoyer 0 (false)
        return 0; 
    }
}