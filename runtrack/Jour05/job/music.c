#include <unistd.h>
#include <stdlib.h>   
#include <stdio.h>
#include "music.h"

void music(struct Album* album) {
    printf("Title: %s\n", album->title);
    printf("Artist: %s\n", album->artist);
    printf("Year: %d\n", album->year);
}

