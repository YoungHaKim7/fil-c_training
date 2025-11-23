# Result

```bash
filc safety error: cannot write pointer with ptr >= upper.
    pointer: 0x7a40a2528210,0x7a40a2528190,0x7a40a2528200
    expected 1 writable bytes.
semantic origin:
    ./src/main.c:8:14: main
check scheduled at:
    ./src/main.c:8:14: main
    src/env/__libc_start_main.c:79:7: __libc_start_main
    <runtime>: start_program
[1675769] filc panic: thwarted a futile attempt to violate memory safety.
Trace/breakpoint trap (core dumped)
race/breakpoint trap (core dumped)
```
