## What this changes

<!-- Which source files, functions or tooling. Include the addresses of matched functions. -->

## Checklist

- [ ] `ninja` passes and ends with `rrr_usa.nds: OK`
- [ ] Every new function is at 100% in objdiff (`ninja report`)
- [ ] Symbols in `symbols.txt` match the names used in the code
- [ ] Files are marked `complete` only if all their functions and data match
- [ ] Sources are ASCII only and formatted with clang-format
- [ ] No leaked source code or Nintendo SDK code was used
