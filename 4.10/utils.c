bbbhh  #include "utils.h"
void print_error_info(FILE* stream, status_code st){
    switch (st)
    {
        case BAD_ALOC:
            fprintf(stream, "Info: [memory alloc error]");
            break;
        case FILE_ERROR:
            fprintf(stream, "Info: [file handling error, ti ne smog v file =)]");
            break;
        case ARGS_ERROR:
            fprintf(stream, "Info: [invalid argumets =(]");
            break;
        case DIV_BY_ZERO:
            fprintf(stream, "Info: [u try to divide by zero nigg... go home and have a nice day]");
            break;
        case INVALID_FORMAT:
            fprintf(stream, "Info: [dude... try to type valid expression]");
            break;
        default:
            break;
    }
}