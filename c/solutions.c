//
// Created by macvanish on 10/01/24.
//

#include "solutions.h"
#include <stdio.h>


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

uint32_t ip_to_uint32(const char *ip) {
    unsigned char bytes[4] = {0};
    sscanf(ip, "%hhu.%hhu.%hhu.%hhu", &bytes[0], &bytes[1], &bytes[2], &bytes[3]);
    return (uint32_t) (bytes[0]) << 24 | (uint32_t) (bytes[1]) << 16 | (uint32_t) (bytes[2]) << 8 |
           (uint32_t) (bytes[3]);
}
