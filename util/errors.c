#ifndef __ERRORS_C_
#define __ERRORS_C_

#include <stdlib.h>
#include <stdio.h>
#include "errors.h"

void handle_error(ERROR_CODE code) {
    switch (code) {
        case ERROR_FAILURE_ALLOC_MEM:
            printf("memory allocation failure, exitting!\n");
            exit(ERROR_FAILURE_ALLOC_MEM);
            break;

        case ERROR_INDEX_OUT_OF_BOUND:
            printf("index out of bound failure, exitting!\n");
            exit(ERROR_INDEX_OUT_OF_BOUND);
            break;

        case ERROR_CONTAINER_EMPTY:
            printf("Error vector_pop_back, vector is empty\n");
            break;

        case ERROR_INVALID_ARGV:
            printf("Invalid argument, exitting!\n");
            exit(ERROR_INVALID_ARGV);
            break;

        default:
            printf("unknown error, exitting!\n");
            exit(ERROR_UNKNOWN);
    }
}

#endif
