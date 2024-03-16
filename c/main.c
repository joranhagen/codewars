#include <stdio.h>
#include "solutions.h"

// solutions.h contains the function with problem statement
// solutions.c contains the solution

int main(void) {
    const char *input = "iiisdosooso";
    int *parsed = parse(input);
    size_t count = count_occurrences(input, 'o');
    printf("{");
    for (int i = 0; i < count; ++i) {
        printf("%d%s", parsed[i], i == count - 1 ? "}" : ", ");
    }
    return 0;
}
