//
// Created by macvanish on 10/01/24.
//

#ifndef C_SOLUTIONS_H
#define C_SOLUTIONS_H

#include <stdlib.h>
#include <stdint.h>
/*
 * Multiplication table
 * https://www.codewars.com/kata/534d2f5b5371ecf8d2000a08
 */
int **multiplication_table(int n);

/*
 * WeIrD StRiNg CaSe
 * https://www.codewars.com/kata/52b757663a95b11b3d00062d
 */
char *to_weird_case (char *string);

/*
 * Greed is Good
 * https://www.codewars.com/kata/5270d0d18625160ada0000e4
 */
int score(const int dice[5]);

/*
 * Equal Sides Of An Array
 * https://www.codewars.com/kata/5679aa472b8f57fb8c000047
 */
int find_even_index(const int *values, int length);

/*
 * Your order, please
 * https://www.codewars.com/kata/55c45be3b2079eccff00010f
 */
char *order_words (char *ordered, const char *words);

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
void uint32_to_ip(const uint32_t ip_int, char *ip_buffer);

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
* Helper functions
 */
size_t count_occurrences(const char* input, char c);
char * get_string(const char* input);

#endif //C_SOLUTIONS_H
