#include <stdio.h>
#include <stdlib.h>

void
usage(char *prog)
{
    fprintf(stderr, "usage: %s\n", prog);
}

void
die(char *msg)
{
    fprintf(stderr, msg);
    exit(EXIT_FAILURE);
}

int
main(int argc, char **argv)
{
    int i;
    int j;

    for (i = 1; i < argc; i++) {
        if (argv[i][0] != '-') {
            usage(argv[0]);
            die("");
        }

        for (j = 1; argv[i][j]; j++)
            printf("%c\n", argv[i][j]);
    }

    return EXIT_SUCCESS;
}
