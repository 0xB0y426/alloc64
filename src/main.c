#include <stdio.h>
#include "inc/alloc64.h"

int main() {
    int *a = (int *)cflloc(sizeof(int));

    if(a) {
        *a = 64;
    }

    printf("Memory Allocated %d bytes.\n", *a);

    frdom();

    return 0;
}