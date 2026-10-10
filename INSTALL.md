# Install

Contents:
- [Prerequisites](#prerequisites)
- [Build the ROM](#build-the-rom)
- [Matching the base ROM](#matching-the-base-rom)

## Prerequisites

1. Use one of these platforms:
    - Windows (recommended)
    - Linux (the compiler runs through [Wibo](https://github.com/decompals/wibo), downloaded automatically)
2. Install the following:
    - Python 3.11+ and pip
    - Ninja
    - GCC 9+ (used to preprocess context files for decomp.me)
    - Optional: [GNU Arm Embedded Toolchain](https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads)
      (`arm-none-eabi-objdump`, used by `tools/probe_compiler.py --show`)
3. Install the Python dependencies:
```shell
python -m pip install -r tools/requirements.txt
```
4. Install the pre-commit hooks:
```shell
pre-commit install
```
5. Put the base ROM in the [`/extract/`](/extract/README.md) directory as `baserom_rrr_usa.nds`.
6. Run the configure script:
```shell
python tools/configure.py usa
```

## Build the ROM

```shell
ninja
```

The first run downloads `dsd`, `objdiff-cli`, `sjiswrap` and the `mwccarm` compilers, extracts the ROM, splits the
code and links it again. The build is successful when it ends with:

```
rrr_usa.nds: OK
```

Other useful targets:

| Command | Effect |
|---|---|
| `ninja report` | Compiles `src/` and writes progress to `build/usa/report.json` |
| `ninja dis` | Disassembles the whole game into `build/usa/asm/` |
| `ninja apply` | Copies symbol names from the linked binary into `symbols.txt` |
| `ninja check` | Verifies that every module and symbol matches the base ROM |

> [!TIP]
> If you already have the compilers, point to them with `python tools/configure.py usa --compiler <path>` or the
> `MWCCARM` environment variable to skip the download.

## Matching the base ROM

The ARM7 BIOS is needed to rebuild the encrypted secure area, so that the ROM is byte-identical.
[Dump the ARM7 BIOS from your DS](https://wiki.ds-homebrew.com/ds-index/ds-bios-firmware-dump), put it in the
repository root as `arm7_bios.bin` and check that it matches one of these:

| File name       | SHA1                                       |
| --------------- | ------------------------------------------ |
| `arm7_bios.bin` | `6ee830c7f552c5bf194c20a2c13d5bb44bdb5c03` |
| `arm7_bios.bin` | `24f67bdea115a2c847c8813a262502ee1607b7df` |

Without the BIOS the ROM still builds, but the SHA-1 check fails.
