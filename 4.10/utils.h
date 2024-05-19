#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <limits.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
#include <complex.h>

#define MAX_SYNONYMS 20

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

typedef struct {
    char* key;
    char* value;
} KeyValuePair;

typedef struct {
    KeyValuePair pairs[MAX_SYNONYMS];
    int count;
} SynonymTable;

void print_error_info(FILE* stream, status_code st);
void free_all(ul cnt, ...);
status_code read_settings_file(char const* file);
status_code debug();

SynonymTable* create_table();
void add_synonym(SynonymTable* table, const char* key, const char* value);
const char* get_synonym(SynonymTable* table, const char* key);
void free_table(SynonymTable* table);

#endif
