#include <stdlib.h>

char** __std_argv = NULL;

const char* const * _Get_argv(void) {
    return (const char* const *) __std_argv;
}
