# Result

```bash
filc safety error: cannot write pointer with ptr >= upper.
    pointer: 0x71c57650427a,0x71c576504250,0x71c576504260
    expected 1 writable bytes.
semantic origin:
    ./src/main.c:7:11: main
check scheduled at:
    ./src/main.c:7:5: main
    src/env/__libc_start_main.c:79:7: __libc_start_main
    <runtime>: start_program
[1673849] filc panic: thwarted a futile attempt to violate memory safety.
Trace/breakpoint trap (core dumped)
```
