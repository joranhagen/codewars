#include <stdio.h>

#include "solutions.h"

// solutions.h contains the function with problem statement
// solutions.c contains the solution

int main(void) {
    const char *input = "Hello world this is a fucking test";
    char result[100]; // Adjust the size according to your needs

    printf("Original string: %s\n", input);
    spin_words(input, result);
    printf("Modified string: %s\n", result);

    return 0;
}
