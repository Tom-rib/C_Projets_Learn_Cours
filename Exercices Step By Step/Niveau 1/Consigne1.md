1. Job01: 

Écrire un programme en C qui afficher le message ‘Hello, World!’ sur l’écran.

Exemple de sortie:

Hello, World!


2. Job02 : 

 Ecrivez un programme C qui affiche votre nom, votre date de naissance et votre numéro de téléphone portable.


Exemple de sortie:

Nom               : Alex Babtise 
Date de naissance : Janvier 10, 2004
Tél               : 0785463521



3. Job03 :

  Écrire un programme en C permettant la saisie de deux nombres et l’affichage de leur somme.

Entrer 1er nombre: 10
Entrer 2éme nombre: 5
La somme de 10 et 5 = 15
---------------------------
Entrer 1er nombre: 2.5
Entrer 2éme nombre: 2.5
La somme de 2.5 et 2.5 = 5


4. Job04:

 Ecrivez un programme C pour calculer le périmètre et la surface d’un rectangle d’une hauteur de 8 cm et d’une largeur de 4 cm.

Surface = Largeur * Hauteur
Périmètre = 2 * (Largeur + Hauteur)

Exemple de sortie:

Périmètre du rectangle = 24 cm 
Surface du rectangle = 32 cm²



5. Job05: 

 Écrire un programme C pour calculer le périmètre et la surface d’un cercle dont le rayon est 5.

surface = PI x r^2
périmètre= 2PI x r

Exemple de sortie:

Périmètre du cercle = 31.4 cm 
Surface du cercle = 78.5 cm²


6. Job06: 

Écrire un programme en C permettant de permuter le contenu de deux entiers n1 et n2 entrés par l’utilisateur, et afficher ces entiers après permutation.
Exemple de sortie:

Entrer un entier n1 : 10
Entrer un entier n2 : 5
------permutation------
n1 = 5
n2 = 10


7. Job07:

Écrire un programme en C pour calculer la factorielle d’un nombre entier saisi par l’utilisateur. (Remarque: le factoriel de 5, qui s’écrit 5! = 5 × 4 × 3 × 2 × 1).

Exemple de sortie:

Saisir un nombre : 5
Le factoriel de 5 est: 120


8. Job08:

Écrire un programme en C permettant d'afficher si un nombre saisi est pair ou impair.
Exemple de sortie:

Entrer un nombre: 8 
Nombre pair
--------------------
Entrer un nombre: 1
Nombre impair


9. Job09:

Écrire un programme en C permettant d'afficher le plus grand des 3 nombres saisis au clavier.
Exemple de sortie:

Entrer 1er nombre : 2
Entrer 2éme nombre: 9
Entrer 3éme nombre: 7
Le nombre le plus grand est: 9


10. Job10:

A quoi sert le programme en C suivant?

#include <stdio.h>

int main() 
{
  int nbr = 0;
  
  printf("Entrez un nombre entre 1 et 5:"); 
  
  do{
    scanf("%d",&nbr);
    if(nbr < 1 || nbr > 5)
      printf("Nombre incorrect. Recommencez!")
  }while(nbr < 1 || nbr > 5);

  return 0; 
}



