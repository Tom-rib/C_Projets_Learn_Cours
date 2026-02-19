1. Job01:

#include <stdio.h>

int main() {
    int i = 0;
    // Première boucle while: Affiche les nombres de 0 à 10
    printf("Nombres de 0 à 10:");
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }

    i = 10;  // Remettre le compteur de la boucle à 10
    // Deuxième boucle while: Affiche les nombres de 10 à 0
    printf("Nombres de 10 à 0:");
    while (i >= 0) {
        printf("%d ", i);
        i--;
    }

    return 0; 
}


2. Job02:


#include <stdio.h>

 int main() {
    int n; 
    int s = 0;

    printf("Entrez des nombres entiers (entrez 0 pour arrêter):\n");

    while (1) {
        printf("Entrer un nombre:");
        scanf("%d", &n);

        if (n == 0) {
            break;  //Quitter la boucle si l'utilisateur entre 0
        }

        if (n > 0) {
            s += n;  //Ajouter les nombres positifs à la somme
        }
    }

    printf("Somme de nombres positifs: %d", s);

    return 0;
}




3. Job03:

#include <stdio.h>

int main() {
    int n = 1;
    int p = 1;

    // Démarrer une boucle while pour itérer de 1 à 5
    while (n <= 5) {
        //Mettre à jour le produit en le multipliant par le nbr actuel
        p *= n;
        printf("Nombre actuel: %d, Produit actuel: %d\n", n, p);
        n++;
    }

    return 0;
}



4. Job04:



#include <stdio.h>

int main() {
    int nbr;
    int oldNbr[100];
    int doublon = 0;
    int compteur = 0;

    printf("Entrez des nombres (Entrez un doublon si vous voulez arrêter):");

    while(!doublon){
        printf("Saisir un nombre:");
        scanf("%d", &nbr);

        // Vérifier si le nombre actuel est égal à l'un des nombres précédents
        for(int i = 0; i < compteur; i++){
            if(nbr == oldNbr[i]){
                // Définir le drapeau indiquant qu'un doublon a été trouvé
                doublon = 1;  
                printf("Un doublon a été saisi. Le programme s'arrête.");
                break;  //Sortir de la boucle si un doublon est trouvé
            }
        }
        // Stocker le nombre actuel dans le tableau
        oldNbr[compteur++] = nbr;  
    }

    return 0;
}

5. Job05:


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    // Générer un nombre aléatoire entre 1 et 20
    int randNbr = rand() % 20 + 1;  

    int nbr;  //Variable pour stocker la supposition de l'utilisateur
    int tentatives = 0; //Variable pour compter le nombre de tentatives

    printf("Devinez un nombre entre 1 et 20:");

    // Démarrer une boucle while pour donner plusieurs chances à l'utilisateur
    while(1){
        printf("Saisissez votre nombre:");
        scanf("%d", &nbr);

        tentatives++;  //Incrémenter le nombre de tentatives

        // Vérifier si l'hypothèse est correcte
        if (nbr == randNbr) {
            printf("Félicitations! Vous avez deviné le bon nombre en %d tentatives.", tentatives);
            break;  // Sortir de la boucle si l'hypothèse est correcte
        } else {
            printf("Réponse incorrecte. Réessayez!");
        }
    }

    return 0;
}

6. Job06:

#include <stdio.h>

int main() {
    char username[20];

    /* Démarrer une boucle while pour continuer à demander 
  le nom d'utilisateur valide */
    while (1) {
        printf("Entrez un nom d'utilisateur (au moins 8 caractères):");
        scanf("%s", username);

        // Vérifier si le nom d'utilisateur a au moins 8 caractères
        if (strlen(username) >= 8) {
            break; //Sortir de la boucle si le nom d'utilisateur est valide
        } else {
            printf("Erreur: Le nom d'utilisateur doit comporter au moins 8 caractères.");
        }
    }

    printf("Nom d'utilisateur valide.");

    return 0;
}

7. Job07:


#include <stdio.h>

int main() {
    int max = 10; // Spécifier la limite des nombres pairs
    int n = 2;    // Commencer par le premier nombre pair
    int s = 0;    // Variable pour stocker la somme des cubes

    /* Démarrer une boucle while pour itérer sur les nombres 
    pairs jusqu'à la limite */
    while (n <= max) {
        // Calculer le cube du nombre pair actuel
        int cube = n * n * n;
        
        // Ajouter le cube à la somme
        s += cube;

        // Passer au nombre pair suivant
        n += 2;
    }

    printf("Somme des cubes des nombres pairs jusqu'à %d: %d", max, s);

    return 0;
}

8. Job08:



#include <stdio.h>

int main() {
    int n, reversedNbr=0, originalNbr;

    printf("Entrez un nombre:");
    scanf("%d", &n);
    originalNbr = n;

    // Démarrer une boucle while pour inverser les chiffres du nombre
    while (n != 0) {
        int r = n % 10;  // Extraire le dernier chiffre
        reversedNbr = reversedNbr * 10 + r; // Créer le nombre inversé
        n /= 10;  // Supprimer le dernier chiffre du nombre original
    }

    // Vérifier si le nombre inversé est égal au nombre original
    if (originalNbr == reversedNbr) {
        printf("%d est un palindrome.", originalNbr);
    } else {
        printf("%d n'est pas un palindrome.", originalNbr);
    }

    return 0;
}



9. Job09:

#include <stdio.h>

int main() {
    int n = 10;
    // Initialiser les deux premiers éléments de la série
    int e1 = 0, e2 = 1;  

    printf("Les %d premiers nombres de Fibonacci:", n);

    // Démarrer une boucle while pour générer les nombres de Fibonacci
    while (n > 0) {
        printf("%d, ", e1);  // Afficher le nombre de Fibonacci actuel
        int suivant = e1 + e2;  // Calculer le prochain nombre de Fibonacci
        e1 = e2;  // Mettre à jour le premier élément avec la valeur du deuxième élément
        e2 = suivant;   // Mise à jour du deuxième terme avec le prochain terme calculé
        n--;  // Réduire la valeur de n pour la prochaine itération
    }

    return 0;
}


10. Job10:

