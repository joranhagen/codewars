//
// Created by macvanish on 10/01/24.
//

#ifndef C_SOLUTIONS_H
#define C_SOLUTIONS_H

#include <stdlib.h>
#include <stdint.h>

/*
 * Who likes it?
 * https://www.codewars.com/kata/5266876b8f4bf2da9b000362
 */
char *likes(size_t n, const char *const names[n]);

/*
 * IPv4 to uint32_t
 * https://www.codewars.com/kata/52ea928a1ef5cfec800003ee
 */
uint32_t ip_to_uint32(const char *ip);


/*
 * Counting Duplicates
 * https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1
 */
size_t duplicate_count(const char *input);

#endif //C_SOLUTIONS_H
