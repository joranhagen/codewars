#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Put 1 or more test cases in main
// solutions.h contains the function with problem statement
// solutions.c contains the solution
#include "solutions.h"

int main(void) {
    const char *const names[4] = {"Peter", "Marnie", "Friends", "More Friends"};
    char *submitted = likes(4, names);
    printf("%s", submitted);

    free(submitted);
    submitted = NULL;

    return EXIT_SUCCESS;
}
