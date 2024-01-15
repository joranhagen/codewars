#include <stdio.h>
#include "solutions.h"

// solutions.h contains the function with problem statement
// solutions.c contains the solution

int main(void) {
    char *input = get_string("Those are some funky string literals");
    input = to_weird_case(input);
    printf("[%s]", input);
    free(input);
    return 0;
}
