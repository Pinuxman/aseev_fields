#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <string.h>
<<<<<<< HEAD
#include <stdlib.h>
#include <stdbool.h>
=======
#include <stdint.h>
>>>>>>> bcb037191358aa5d18f967f5cb5455f3db70a841
#include <limits.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
<<<<<<< HEAD
#include <stdarg.h>
#include <complex.h>
=======
#include <complex.h>

#define MAX_SYNONYMS 20
>>>>>>> bcb037191358aa5d18f967f5cb5455f3db70a841

typedef enum status_codes {
    OK = 0,
    INVALID_ARGC = 1,
    FILE_NOT_OPEN = -2,
    NO_MEMORY = -1,
    WRONG_INPUT = 2,
    OVERFLOWED = 3,
    LIST_IS_EMPTY = 4,
    TOO_MUCH_ITERATIONS = 5,
    BRACKETS_NOT_BALANCED = 6,
    WRONG_ELEMENT = 7,
    DIVISION_BY_ZERO = 8,
    EMPTY_OPERAND_STACK = 9,
    INVALID_FORMAT = 10,
    HEAP_IS_EMPTY = 11,
    TOO_MUCH_SYNONYMS = 12,
    WRONG_SYSTEM = 13,
} status_codes;

<<<<<<< HEAD
void fprint_err(FILE* stream, int st) {
    switch (st)
    {
    case NO_MEMORY:
        fprintf(stream, "memory allocation error\n");
        break;
    
    case INVALID_ARGC:
        fprintf(stream, "wrong argc\n");
        break;
    
    case FILE_NOT_OPEN:
        fprintf(stream, "file opening error\n");
        break;
    
    case WRONG_INPUT:
        fprintf(stream, "wrong input\n");
        break;
    
    case OVERFLOWED:
        fprintf(stream, "overflowed\n");
        break;
    
    case TOO_MUCH_ITERATIONS:
        fprintf(stream, "too much iterations\n");
        break;
=======
typedef enum status_code{
    OK,
    FILE_ERROR,
    ARGS_ERROR,
    DIV_BY_ZERO,
    BAD_ALOC,
    INVALID_FORMAT,
    UNDEF_ERR,
}status_code;
>>>>>>> bcb037191358aa5d18f967f5cb5455f3db70a841

    case BRACKETS_NOT_BALANCED:
        fprintf(stream, "brackets are not balanced\n");
        break;

<<<<<<< HEAD
    case WRONG_ELEMENT:
        fprintf(stream, "wrong element\n");
        break;
    
    case DIVISION_BY_ZERO:
        fprintf(stream, "division by zero\n");
        break;
    
    case EMPTY_OPERAND_STACK:
        fprintf(stream, "empty operand stack\n");
        break;

    case INVALID_FORMAT:
        fprintf(stream, "invalid expression format\n");
        break;    
    case HEAP_IS_EMPTY:
        fprintf(stream, "heap is empty\n");
    case TOO_MUCH_SYNONYMS:
        fprintf(stream, "too much synonyms\n");
    case WRONG_SYSTEM:
        fprintf(stream, "wrong system\n");
    
    default:
        break;
    }
}

#endif
=======
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
>>>>>>> bcb037191358aa5d18f967f5cb5455f3db70a841
