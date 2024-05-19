#include "utils.h"
void print_error_info(FILE* stream, status_code st){
    switch (st)
    {
        case BAD_ALOC:
            fprintf(stream, "Info: [memory alloc error]");
            break;
        case FILE_ERROR:
            fprintf(stream, "Info: [file handling error]");
            break;
        default:
            break;
    }
}