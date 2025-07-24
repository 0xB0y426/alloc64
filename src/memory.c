#include "inc/alloc64.h"
#include <stdint.h>

#define MEMORY_SIZE 1024 * 1024  
static uint8_t memory[MEMORY_SIZE];
static size_t offset = 0;

void *cflloc(size_t size) {
    size = (size + 7) & ~7;

    if (offset + size > MEMORY_SIZE) {
        return NULL; 
    }

    void *ptr = &memory[offset];
    offset += size;
    return ptr;
}

void frdom() {
    offset = 0;
}
