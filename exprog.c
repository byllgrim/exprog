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
    char *ex = "ex";
    int start = 0;
    int goal = 100;

    /* TODO parse args the POSIX way */
    for (i = 1; i < argc; i += 2) {
        if (argv[i][0] != '-')
            die("dash missing\n");

        if (!argv[i + 1])
            die("option argument missing\n");

        switch (argv[i][1]) {
        case 'e':
            ex = argv[i + 1];
            break;
        case 's':
            start = atoi(argv[i + 1]);
            /* TODO check failure */
            break;
        case 'g':
            goal = atoi(argv[i + 1]);
            /* TODO check failure */
            break;
        case 'i':
            break;
        default:
            die("invalid option\n");
        }
    }

    printf("%s", ex);
    printf(",12x%d", start);
    printf(",...");
    printf(",1x%d", goal);
    printf("\n");
    /* TODO print session/day progression */

    return EXIT_SUCCESS;
}
