#ifndef __ERRORS_H_
#define __ERRORS_H_

#include <stdint.h>

//#define ERROR_CODE uint32_t

typedef enum ERROR_CODE_T
{
    ERROR_FAILURE_ALLOC_MEM = 0x500,
    ERROR_INDEX_OUT_OF_BOUND = 0x501,
    ERROR_CONTAINER_EMPTY = 0x502,
    ERROR_INVALID_ARGV = 0x503,
    ERROR_UNKNOWN = 0x999
} ERROR_CODE;

void handle_error(ERROR_CODE code);

#endif
