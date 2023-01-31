#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int opt;

    while ((opt = getopt(argc, argv, "xyz")) != -1) {
        switch (opt) {
        case 'x': printf("x"); break;
        case 'y': printf("y"); break;
        case 'z': printf("z"); break;
        default:
            fprintf(stderr, "Usage: %s [-xyz] \n", argv[0]);
            exit(EXIT_FAILURE);
        }
    }
   printf("This is a program to demonstrate options\n");

}
