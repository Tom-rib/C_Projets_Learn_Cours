// music.h

#ifndef MUSIC_H
#define MUSIC_H

typedef struct Album
{
    char* title;
    char* artist;
    int year; 
} Album;

void music(struct Album* album);

char **strsplit(const char *s, char d);

#endif