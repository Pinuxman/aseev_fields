#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <time.h>
#include <math.h>

typedef unsigned long ul;
typedef unsigned long long ull;

typedef enum status_code{
    OK,
    FILE_ERROR,
    BAD_ALOC,
    UNDEF_ERR,
}status_code;

typedef enum cases{
    NEW_REQUEST,
    REQUEST_HANDLING_STARTED,
    REQUEST_HANDLING_FINISHED,
    DEPARTMENT_OVERLOADED
}cases;

char const* debug_file_path = "debug.log";

void print_error_info(status_code st);
status_code logger();
void free_all(ull cnt, ...);
status_code args_parser(ul max_priority, char const* files);
#endif 