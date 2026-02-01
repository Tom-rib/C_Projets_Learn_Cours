#include <stdio.h>
#include <math.h>


int main() {
    
    float x1 , x2 , y1 , y2 , distance, nombrex , nombrey , totalnombre = 0; 

    printf("Saisir les coordonnée de x1: ");
    scanf("%f", &x1);
   
    printf("Saisir les coordonnée de y1: ");
    scanf("%f", &y1);


     printf("Saisir les coordonnée de x2: ");
    scanf("%f", &x2);

     printf("Saisir les coordonnée de y2: ");
    scanf("%f", &y2);

    nombrex = (x2 - x1) * (x2 - x1);  
    nombrey = (y2 - y1) * (y2 - y1);
    totalnombre = nombrex + nombrey;

    distance = sqrt(totalnombre);

    printf("Distance entre ces points est : %.4f L\n", distance);


    return 0;
}