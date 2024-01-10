//
// Created by macvanish on 10/01/24.
//

#include <stdio.h>
#include "solutions.h"


char *likes(size_t n, const char *const names[n]) {
    char *result;
    switch (n) {
        case 0:
            asprintf(&result, "no one likes this");
            break;
        case 1:
            asprintf(&result, "%s likes this", names[0]);
            break;
        case 2:
            asprintf(&result, "%s and %s like this", names[0], names[1]);
            break;
        case 3:
            asprintf(&result, "%s, %s and %s like this", names[0], names[1], names[2]);
            break;
        default:
            asprintf(&result, "%s, %s and %zu like this", names[0], names[1], n - 2);
            break;
    }
    return result;
}
