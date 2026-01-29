// realloc_album.c
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "print_album.h"
#include "realloc_album.h"


Album* realloc_album(Album *albums, int old_size, int new_size) {
    Album *new_albums = malloc(sizeof(Album) * new_size);
    memcpy (new_albums, albums, sizeof(Album) * old_size);
    return new_albums;
    }

int main(void) {
    Album albums[3];
    Album a1 = {"Album One", "Artist A", 2001};
    Album a2 = {"Album Two", "Artist B", 2002}; 
    Album a3 = {"Album Three", "Artist C", 2003};
    Album albums[3] = {a1, a2, a3};

    printf("%s\n", albums[0].title);
    Album *new_albumsrealloc_album(albums, 3, 5);
    printf("%s\n", albums[0].title);
    return 0;

}