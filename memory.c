#include <stdlib.h>
#include "memory.h"

void* reallocate(void* pointer, size_t oldSize, size_t newSize) {
    if(newSize == 0){
        free(pointer);
        return 0;
    }

    void* result = realloc(pointer, newSize);
    if (result == 0) exit(1);
    return result;
}