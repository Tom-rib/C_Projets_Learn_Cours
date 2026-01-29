#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "music.h"

int open_file(void) {
    char *path = "raw.txt";
    int fd = open(path, O_RDONLY);
    if (fd == -1) {
        printf("Error opening the file %s\n", path);
        return -1;
    }
    return fd;
}

void read_file(int fd, char *buf) {
    int ret = read(fd, buf, 1024 * 4);
    if (ret == -1) {
        printf("Error reading the file on fd %d\n", fd);
    }
    printf("Bytes read: %d\n", ret);
}

void parse_content (char* str) {
char **lines = strsplit(str, '\n');


}

int main(void) {
    Album a = {"Master of Puppets", "Metallica", 1986};

    int fd = open_file();
    printf("%d\n", fd);

    // we like 4 KB buffer
    char buf[1024 * 4] = {0};
    read_file(fd, buf);
    printf("%s\n", buf);
    return 0;
}