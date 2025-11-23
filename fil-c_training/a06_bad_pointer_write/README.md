# Result

```bash
filc safety error: cannot read pointer with ptr < lower (ptr = 0x65512c9b5ffc,0x65512c9b6060,0x65512c9b6068,global,readonly).
    <runtime>: zsys_write
    src/unistd/write.c:7:9: write
    ./src/main.c:6:5: main
    src/env/__libc_start_main.c:79:7: __libc_start_main
    <runtime>: start_program
[1679750] filc panic: thwarted a futile attempt to violate memory safety.
Trace/breakpoint trap (core dumped)
```
