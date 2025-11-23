#include <stdfil.h>
#include <stdlib.h>

int main() {
    char *p = malloc(16);
    *(int *)p = 666;
    int *p2 = *(int **)p;
    zprintf("p2 = %P\n", p2);
    return 0;
}
