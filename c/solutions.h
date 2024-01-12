//
// Created by macvanish on 10/01/24.
//

#ifndef C_SOLUTIONS_H
#define C_SOLUTIONS_H

#include <stdlib.h>
#include <stdint.h>

/*
 * Stop gninnipS My sdroW!
 * https://www.codewars.com/kata/5264d2b162488dc400000001
 */
void spin_words(const char *sentence, char *result);

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


/*
 * Friend of Foe?
 * https://www.codewars.com/kata/55b42574ff091733d900002f
 */
void filter_friends (const char *names[]);

/*
 * Make the Deadfish Swim
 * https://www.codewars.com/kata/51e0007c1f9378fa810002a9
 */
int *parse (const char *program);

/*
* Helper function. Made to help print the result from `int *parse (const char *program);`
 */
size_t count_occurrences(const char* input, char c);

#endif //C_SOLUTIONS_H
