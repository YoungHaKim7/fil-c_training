# Result
- null에 접근하니 에러
  - `p2 = 0x29a,<null>`

```bash
filc safety error: cannot write pointer with null object.
    pointer: 0x29a,<null>
    expected 4 writable bytes.
semantic origin:
    ./src/main.c:9:9: main
check scheduled at:
    ./src/main.c:9:9: main
    src/env/__libc_start_main.c:79:7: __libc_start_main
    <runtime>: start_program
[1684006] filc panic: thwarted a futile attempt to violate memory safety.
Trace/breakpoint trap (core dumped)
```
