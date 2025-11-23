# Result

```bash
filc safety error: cannot write pointer with ptr < lower.
    pointer: 0xffffffff,0x765ad8d04250,0x765ad8d04260
    expected 4 writable bytes.
semantic origin:
    ./src/main.c:10:14: main
check scheduled at:
    ./src/main.c:10:14: main
    src/env/__libc_start_main.c:79:7: __libc_start_main
    <runtime>: start_program
[1678110] filc panic: thwarted a futile attempt to violate memory safety.
Trace/breakpoint trap (core dumped)
```
