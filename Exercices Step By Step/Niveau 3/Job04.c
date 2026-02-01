#include <stdio.h>

int main() {
    long  nombre = 0;
    long années = 0;
    long  semaines = 0;
    long  jours = 0;
    long reste = 0;

    printf("Saisir un nombre jours entier:");
    scanf("%ld", &nombre);
   
    années = nombre / 365;
    reste = nombre % 365;
    semaines = reste / 7 ;
    jours = reste % 7;
    
  
    printf("Années: %ld\n",années);
    printf("Semaines: %ld\n",semaines);
    printf("Jours: %ld\n",jours);

  return 0;
}
