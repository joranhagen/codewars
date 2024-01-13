#include <stdio.h>
#include <string.h>

#include "solutions.h"

// solutions.h contains the function with problem statement
// solutions.c contains the solution

int main(void) {
    const char *words = "is2 Thi1s T4est 3a";
    char *ordered = malloc(strlen(words) + 1);
    order_words(ordered, words);
    printf("%s", ordered);
    free(ordered);
    return 0;
}
