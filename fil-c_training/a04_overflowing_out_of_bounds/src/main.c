#include <inttypes.h>
#include <limits.h>
#include <stdlib.h>

int main() {
    char *p = malloc(16);
    p -= (uintptr_t)p;
    p += UINT_MAX;
    *(int *)p = 42;
    return 0;
}
