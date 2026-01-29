// divide.c

#include <unistd.h>
#include <stdlib.h>   
#include <stdio.h>
#include "manhattan.h"



int manhattan(Point a, Point b) {
    printf( "Calcul de la distance de Manhattan entre les points (%d, %d) et (%d, %d)\n", a.x, a.y, b.x, b.y);
    int dx = ABS (a.x - b.x) ;
    int dy = ABS (a.y - b.y) ;
    return (dx + dy);
}


int main(void) {
    Point p1 = {1, 2};
    Point p2 = {4, 6};
    printf("Distance de Manhattan: %d\n", manhattan (p1, p2));
    return 0;
}