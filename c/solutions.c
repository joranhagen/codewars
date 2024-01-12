//
// Created by macvanish on 10/01/24.
//

#include "solutions.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void spin_words(const char *sentence, char *result) {
    while (*sentence != '\0') {
        const char *end = strchr(sentence, ' ') != NULL ? strchr(sentence, ' ') : strchr(sentence, '\0');
        int length = (end - sentence);
        if (length > 4) {
            for (int i = 0; i < length; ++i) {
                result[i] = sentence[length - 1 - i];
            }
        } else strncpy(result, sentence, length);
        sentence = (*end != '\0') ? end + 1 : end;
        result += length;
        *(result++) = (*end != '\0') ? ' ' : '\0';
    }
    *result = '\0';
}

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
    // %hhu -> format specifier for unsigned char
    sscanf(ip, "%hhu.%hhu.%hhu.%hhu", &bytes[0], &bytes[1], &bytes[2], &bytes[3]);
    return bytes[0] << 24 | bytes[1] << 16 | bytes[2] << 8 | bytes[3];
}

size_t duplicate_count(const char *input) {
    int occ[36] = {0};
    for (; *input != '\0'; input++) {
        if (isalpha(*input)) occ[tolower(*input) - 'a' + 10]++;
        else if (isdigit(*input)) occ[*input - '0']++;
    }
    size_t count = 0;
    for (int i = 0; i < 36; ++i) count += occ[i] > 1 ? 1 : 0;
    return count;
}

void filter_friends(const char *names[]) {
    if (!names) return;
    size_t foes = 0;
    size_t friends = 0;
    for (size_t i = 0; names[i] != NULL; ++i) {
        if (strlen(names[i]) != 4) foes++;
        else {
            friends++;
            names[i - foes] = names[i];
        }
    }
    names[friends] = NULL;
}

int *parse(const char *program) {
    int *my_arr = NULL;
    int n = 0;
    size_t arr_size = 0;
    while (*program != '\0') {
        if (*program == 'i') n++;
        else if (*program == 'd') n--;
        else if (*program == 's') n *= n;
        else if (*program == 'o') {
            my_arr = realloc(my_arr, (arr_size + 1) * sizeof(int));
            my_arr[arr_size++] = n;
        }
        program++;
    }
    return my_arr;
}

size_t count_occurrences(const char *input, char c) {
    size_t count = 0;
    while (*input != '\0') {
        if (*input == c) count++;
        input++;
    }
    return count;
}
