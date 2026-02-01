#include <stdio.h>

int main() {
    float heures = 0;
    float montant_par_heure = 0;
    float salaire = 0;

    printf("Saisir les heures de travail: ");
    scanf("%f", &heures); 
   
    printf("Montant du salaire/heure: ");
    scanf("%f", &montant_par_heure);  
    
    salaire = heures * montant_par_heure;  
    
    printf("Salaire = %.2f €\n", salaire);  

    return 0;
}