#include <stdio.h>
#include <stdlib.h>

void
die(char *msg)
{
    fprintf(stderr, msg);
    exit(EXIT_FAILURE);
}

void
usage(char *prog)
{
    fprintf(stderr, "usage: %s [-e ex] [-s start] [-g goal] [-i inc]\n",
            prog);
    die(0);
}

int
main(int argc, char **argv)
{
    int i;

    for (i = 1; i < argc; i += 2) {
        if (argv[i][0] != '-')
            die("dash missing\n");

        if (!argv[i + 1])
            die("option argument missing\n");

        switch (argv[i][1]) {
        case 'e':
            break;
        case 's':
            break;
        case 'g':
            break;
        case 'i':
            break;
        default:
            die("invalid option\n");
        }
    }

    return EXIT_SUCCESS;
}
