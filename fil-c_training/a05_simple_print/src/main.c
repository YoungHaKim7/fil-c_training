#include <string.h>
#include <unistd.h>

int main() {
    write(1, "hello\n", strlen("hello\n"));
    return 0;
}
