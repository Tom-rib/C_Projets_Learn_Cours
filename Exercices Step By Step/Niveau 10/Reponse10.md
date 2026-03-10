1. Job01:

#include <stdio.h>

int nbrPremier(int n) {
    if (n < 2) {
        return 0;  // Pas un nombre premier
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Pas un nombre premier
        }
    }
    return 1;  // Nombre premier
}

int main() {
    int max;
    int n = 2; // En commençant par le 1er nombre premier
    int s = 0;

    printf("Entrez la limite des nombres premiers:");
    scanf("%d", &max);

    do {
        if (nbrPremier(n)) {
            s += n;  // Additionner les nombres premiers à la somme
        }
        n++;  // Passer au nombre suivant
    } while (n <= max);

    printf("Somme des nombres premiers jusqu'à %d est %d", max, s);

    return 0;
}



2. Job02:


#include <stdio.h>
#include <string.h>

int main() {
    // Définir le mot de passe correct
    char psw[] = "w@yToLearnX";  
  // Variable pour stocker le mot de passe entré par l'utilisateur
    char input[20];  

    /* Utiliser une boucle "do-while" pour demander le mot de passe
    de manière répétée. */
    do {
        printf("Saisir le mot de passe:");
        scanf("%s", input);

        // Vérifier si le mot de passe saisi est correct
        if (strcmp(input, psw) == 0) {
            printf("Mot de passe correct ! Accès accordé.\n");
            break; //Sortir de la boucle si le mot de passe est correct
        } else {
            printf("Mot de passe incorrect. Réessayez.\n");
        }

    } while (1); /* Executer la boucle indéfiniment jusqu'à ce que 
    le mot de passe correct soit saisi.*/

    return 0;
}



3. Job03:


#include <stdio.h>

int main() {
    int i;

    printf("Les 10 premiers entiers naturels sont:\n");

    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    // Renvoyer 0 pour indiquer que l'exécution est réussie
    return 0;
}



4. Job04:

#include <stdio.h>

int main()
{
    int i, s=0;

    printf("Les 10 premiers entiers naturels sont:\n");
 
    for (i = 1; i <= 10; i++)
    {
        s = s + i;
        printf("%d ",i);    
    }
    printf("\nLa somme est: %d", s);
}


5. Job05:

#include <stdio.h>

int main() {
    int i, n, s=0;

    printf("Entrée le nombre des éléments:");
    scanf("%d", &n);

    printf("\nLes %d premiers entiers naturels sont:\n", n);

    // Démarrez une boucle for pour itérer de 1 à 'n'
    for (i = 1; i <= n; i++) {  
        // Afficher la valeur actuelle de "i"
        printf("%d ", i);
        // Ajouter la valeur actuelle de "i" à la somme
        s += i;  
    }

    printf("\nLa somme des nombres naturels jusqu'à %d termes est %d.", n, s);
    return 0;
}

6. Job06:


#include <stdio.h>

int main() {
    int i, n, s=0;
    float m;

    printf("Saisir les 10 nombres:\n");

    for (i = 1; i <= 10; i++) {
        printf("Nombre-%d:", i);

        scanf("%d", &n); 
        s += n;
    }

    m = s / 10.0;  // Calculer la moyenne

    printf("La somme est:%d\nLa moyenne est:%f",s,m);
    return 0;
}

7. Job07:

#include <stdio.h>

int main() {
    int i, n;

    printf("Entrée le nombre des éléments:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Le nombre est: %d et le cube de %d est: %d\n",i,i,(i*i*i));
    }
    return 0;
}

8. Job08:

9. Job09:


#include <stdio.h>

int  main() {
    int i, j, n;

    printf("Entrer le nombre de lignes:");
    scanf("%d", &n);

  // Démarrer une boucle pour générer les lignes des étoiles
    for (i = 1; i <= n; i++) {  
        /* Boucle imbriquée pour afficher les étoiles en fonction 
    de la ligne actuelle */
        for (j = 1; j <= i; j++){
            // Afficher la valeur de j
            printf("%d", j);  
        } 
        printf("\n"); // Passez à la ligne suivante
    }
    return 0;
}


10. Job10:

#include <stdio.h>

int  main() {
    int i, j, n;

    printf("Entrer le nombre de lignes:");
    scanf("%d", &n);

  // Démarrer une boucle pour générer les lignes des étoiles
    for (i = 1; i <= n; i++) {  
        /* Boucle imbriquée pour afficher les étoiles en fonction 
    de la ligne actuelle */
        for (j = 1; j <= i; j++){
            // Afficher la valeur de i
            printf("%d", i);  
        } 
        printf("\n"); // Passez à la ligne suivante
    }
    return 0;
}