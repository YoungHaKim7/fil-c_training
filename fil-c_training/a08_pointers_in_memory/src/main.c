#include <stdfil.h>
#include <stdlib.h>

int main()
{
    char* p = malloc(16);
    *(int**)p = malloc(4);
    **(int**)p = 42;
    zprintf("p = %P\n", p);
    zprintf("*p = %P\n", *(int**)p);
    zprintf("**p = %d\n", **(int**)p);
    return 0;
}
