1. Job01:

#include <stdio.h>

int  main() {
    int i, j, n, k = 1;

    printf("Entrer le nombre de lignes:");
    scanf("%d", &n);

    // Démarrer une boucle pour générer les lignes
    for (i = 1; i <= n; i++) {  
        /* Boucle imbriquée pour afficher les étoiles en fonction 
    de la ligne actuelle */
        for (j = 1; j <= i; j++){
            // Afficher la valeur de k et incrémentez-le
            printf("%d ", k++);  
        } 
        printf("\n"); // Passez à la ligne suivante
    }
    return 0;
}

2. Job02:

#include <stdio.h>

int main() {
   int i, j, espace, n, k, t = 1;

   printf("Entrer le nombre de lignes:");
   scanf("%d", &n);
   espace = n + 4 - 1; // Calculer le nombre initial d'espaces

   // Démarrer une boucle pour générer les lignes
   for (i = 1; i <= n; i++) {  
      //Boucle pour afficher les espaces avant les nombres
      for (k = espace; k >= 1; k--) {
         printf(" ");
      }

      //Boucle pour afficher les nombres basés sur la ligne actuelle
      for (j = 1; j <= i; j++) {
         printf("%d ", t++);  // Afficher la valeur de 't' et l'incrémenter
      }

      printf("\n"); // Passez à la ligne suivante
      espace--; // Décrémenter le nombre d'espaces pour la ligne suivante
   }
    return 0; 
}

3. Job03:

#include <stdio.h>

int main() {
   int i, j, espace, n, k, t = 1;

   printf("Entrer le nombre de lignes:");
   scanf("%d", &n);
   espace = n + 4 - 1; // Calculer le nombre initial d'espaces

   // Démarrer une boucle pour générer les lignes
   for (i = 1; i <= n; i++) {  
      // Boucle pour afficher les espaces avant les nombres
      for (k = espace; k >= 1; k--) {
         printf(" ");
      }

      //Boucle pour afficher les nombres basés sur la ligne actuelle
      for (j = 1; j <= i; j++) {
         printf("* ");  // Afficher une étoile suivie d'un espace
      }

      printf("\n"); // Passez à la ligne suivante
      espace--; // Décrémenter le nombre d'espaces pour la ligne suivante
   }
    return 0; 
}

4. Job04:

#include <stdio.h>

int main() {
    int i, j, n;

    printf("Entrer le nombre de lignes:");
    scanf("%d", &n);

    // Démarrer une boucle pour générer les lignes
    for (i = 0; i < n; i++)
    {
        // Boucle pour afficher les espaces avant les étoiles
        for (j = 1; j <= n - i; j++) 
            printf(" ");

        // Boucle pour afficher les étoiles
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");

        // Passer à la ligne suivante après avoir affiché chaque ligne
        printf("\n"); 
    }

    return 0;
}

5. Job05:

#include <stdio.h>

int main() {
    int i, j, espace, n, k;

    printf("Entrer le nombre de lignes:");
    scanf("%d", &n);

    espace = n + 4 - 1; // Calculer le nombre initial d'espaces

    // Démarrer une boucle pour générer les lignes
    for (i = 1; i <= n; i++)
    {
        // Boucle pour afficher les espaces
        for (k = espace; k >= 1; k--)
        {
            printf(" ");
        }

        //Boucle pour afficher les nombres
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }

        printf("\n");  // Passez à la ligne suivante
        espace--; // Décrémenter le nombre d'espaces pour la ligne suivante
    }

    return 0;
}

6. Job06:


#include <stdio.h>

int main() {
    int i, j, p, q, n;

    printf("Entrer le nombre de lignes:"); 
    scanf("%d", &n); 

    // Démarrer une boucle pour générer les lignes
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0) // Vérifier si 'i' est pair.
        {
            p = 1;
            q = 0;
        }
        else // Si 'i' est impair.
        {
            p = 0;
            q = 1;
        }

       // Boucler sur chaque élément de la ligne
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0) // Vérifier si 'j' est pair
                printf("%d", p); // Afficher 'p' si 'j' est pair
            else
                printf("%d", q); // Afficher 'q' si 'j' est impair
        }

       // Passer à la ligne suivante après avoir affiché la ligne
        printf("\n"); 
    }

    return 0;
}


7. Job07:


#include <stdio.h>

int main() {
   int i, j, n; 

   printf("Entrer le nombre de lignes (moitié du diamant):");
   scanf("%d", &n);

   // Boucle pour afficher la moitié supérieure du diamant
   for (i = 0; i <= n; i++) {
      // Boucle pour afficher les espaces avant les étoiles
      for (j = 1; j <= n - i; j++)
         printf(" ");

      // Boucle pour afficher les étoiles
      for (j = 1; j <= 2 * i - 1; j++)
         printf("*");

      // Passez à la ligne suivante après avoir terminé la ligne
      printf("\n"); 
   }

   // Boucle pour afficher la moitié inférieure du diamant
   for (i = n - 1; i >= 1; i--) {
      // Boucle pour afficher les espaces avant les étoiles
      for (j = 1; j <= n - i; j++)
         printf(" ");

      // Boucle pour afficher les étoiles
      for (j = 1; j <= 2 * i - 1; j++)
         printf("*");

      // Passez à la ligne suivante après avoir terminé la ligne
      printf("\n"); 
   }

   return 0;
}

8. Job08:

#include <stdio.h>

int main() {
    int n, c = 1, espace, i, j;

    printf("Entrer le nombre de lignes:");
    scanf("%d", &n);

    // Démarrer une boucle pour générer les lignes
    for (i = 0; i < n; i++) {
        // Boucle pour afficher les espaces
        for (espace = 1; espace <= n - i; espace++)
            printf("  ");

        //Boucle pour afficher les nombres
        for (j = 0; j <= i; j++) {
            // S'il s'agit de la 1er colonne ou de la 1er ligne, mettez c à 1
            if (j == 0 || i == 0) 
                c = 1;
            else
                c = c * (i - j + 1) / j; // Calculer la valeur suivante
            printf("% 4d", c); // Afficher la valeur
        }

        printf("\n"); // Passez à la ligne suivante
    }

    return 0;
}

9. Job09:


#include <stdio.h>

int main()
{
   int i, j, n;

   printf("Entrer le nombre de lignes:");
   scanf("%d", &n);

   // Démarrer une boucle pour générer les lignes
   for(i = 0; i <= n; i++)
   {
     //Boucle pour afficher les espaces avant les nombres
     for(j = 1; j <= n - i; j++)
       printf(" ");

     //Boucle pour afficher les nombres dans l'ordre croissant
     for(j = 1; j <= i; j++)
       printf("%d", j);

     //Boucle pour afficher les nombres dans l'ordre décroissant
     for(j = i - 1; j >= 1; j--)
       printf("%d", j);

     //Passer à la ligne suivante après avoir affiché une ligne
     printf("\n");
   }
    return 0;
}

10. Job10: