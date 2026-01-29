// print_album.c

#include <unistd.h>
#include <stdlib.h>   
#include <stdio.h>
#include "print_album.h"



void print_album (Album *a) {
    printf("Album: %s\nArtist: %s\nYear: %d\n", a->title, a->artist, a->year);

}


int main(void) {
    Album a = {"The Dark Side of the Moon", "Pink Floyd", 1973};
    print_album(&a);
    return 0;
}