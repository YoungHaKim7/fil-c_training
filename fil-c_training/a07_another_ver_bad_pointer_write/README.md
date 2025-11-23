# Result

```bash
filc safety error: cannot read 100 bytes when upper - ptr = 8 (ptr = 0x566e14665060,0x566e14665060,0x566e14665068,global,readonly).
    <runtime>: zsys_write
    src/unistd/write.c:7:9: write
    ./src/main.c:6:5: main
    src/env/__libc_start_main.c:79:7: __libc_start_main
    <runtime>: start_program
[1680508] filc panic: thwarted a futile attempt to violate memory safety.
Trace/breakpoint trap (core dumped)
```
