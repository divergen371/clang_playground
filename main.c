#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char **argv)
{
    if (argc != 2)
        {
            fprintf(stderr, "Usage:  filename\n");
            exit(1);
        }
    int fd = open(argv[1], O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd < 0)
        {
            fprintf(stderr, "Cannot open %s\n", argv[1]);
            exit(1);
        }

    dprintf(fd, "Hello, %s\n", argv[1]);
    close(fd);
    return 0;
}
