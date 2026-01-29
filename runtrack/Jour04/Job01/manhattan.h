// manhattan.h   biblothèque de fonctions pour le calcul de la distance de Manhattan entre deux points

#ifndef MANHATTAN_H
#define MANHATTAN_H

#define ABS (x) (x >= 0 ? x : -x)
#define ABS_DIFF(x, y) ((x - (y) > 0; (x - y) : (y - x)))

typedef struct Point
{
    int x;
    int y; 
};

int manhattan(Point a, Point b) ;

#endif
