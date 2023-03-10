#include "main.h"
#include <stdio.h>
#include <libgen.h>
int main(int argc, char *argv[])
{
    printf("%s\n", basename(argv[0]));
    return 0;
}

