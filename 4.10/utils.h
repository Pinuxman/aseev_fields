#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

typedef unsigned long ul;
typedef unsigned long long ull;

typedef enum status_code{
    OK,
    FILE_ERROR,
    BAD_ALOC,
    UNDEF_ERR,
}status_code;

typedef struct var{
    char const* id;
    char* val;
}var;

void print_error_info(status_code st);
void free_all(ul cnt, ...);
status_code read_settings_file(char const* file);
status_code debug();
#endif
