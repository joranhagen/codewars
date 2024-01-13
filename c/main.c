#include <stdio.h>

#include "solutions.h"

// solutions.h contains the function with problem statement
// solutions.c contains the solution

int main(void) {
    const char *ip = "128.128.128.128";
    uint32_t ip_int = ip_to_uint32(ip);
    char new_ip[16];
    uint32_to_ip(ip_int, new_ip);
    printf("%s", new_ip);
    return 0;
}
