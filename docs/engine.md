# The OpenSpace engine

Rayman Raving Rabbids DS (Ubisoft Casablanca, March 2007) runs on **OpenSpace**, also called CPA (Common Programming
Architecture), the engine of Tonic Trouble and Rayman 2. The DS version reuses the engine of *Rayman DS* (the
2005 port of Rayman 2). The code is plain **C**.

Evidence found in the binary: module prefixes such as `HIE_`, `MTH_`, `SND_` in assertion strings
(`HIE_g_lNbMatrixInCameraStack>0`, `MTH_M_bGreaterZero(p_stVect12->xX)`, `SND_fn_bInitBankSnd`) and source file
names (`HieMtStk.c`, `StdGame.c`, `Dynam.c`...).

## Modules
The code is organized in modules with a 2-4 letter prefix. Put each module in its own directory under `src/` and
`include/`.

| Prefix | Module |
|---|---|
| `AI` | Artificial intelligence (brains, behaviors, designer variables) |
| `CAM` | Cameras |
| `COL` | Collisions |
| `DNM` | Dynamics (physics) |
| `ERM` | Error management |
| `GAM` | Game logic (`StdGame.c`, `3dData.c`...) |
| `GEO` / `GLI` | Geometry / graphics library |
| `HIE` | Object hierarchy and matrix stack (`HieMtStk.c`) |
| `MTH` | Maths |
| `POS` | Positions (matrices) |
| `SCT` | Sectors |
| `SND` | Sound |

## Identified core functions

See `include/engine.h`. The most called functions of the game, identified from their code:

| Address | Calls | Function |
|---|---|---|
| `0x02084450` | 566 | calls `table[object->type]` (type byte at `+7`) with the same three arguments |
| `0x01ff87ec` | 221 | `(a * b - c * d + 0x800) >> 12` on 64 bits (ITCM) |
| `0x02001588` | 150 | byte copy, returns the destination |
| `0x0200b5b8` | 140 | `VEC_DotProduct` (assembly) |
| `0x0200e8f4`... | | interrupt helpers `OS_EnableIrq`, `OS_DisableIrq`, `OS_RestoreIrq`... |

Fixed-point numbers are 20.12 (`fx32`, rounding with `+ 0x800` before `>> 12`).

## Naming conventions
Use the engine's own conventions, as seen in the assertion strings and in ACP_Ray2:

| Element | Form | Example |
|---|---|---|
| Function | `MODULE_fn_<type><Name>` | `HIE_fn_bPopOnCameraMatrixStack` (returns a boolean) |
| Macro | `MODULE_M_<type><Name>` | `MTH_M_bGreaterZero` |
| Global variable | `MODULE_g_<type><Name>` | `HIE_g_lNbMatrixInCameraStack` |
| Struct type | `MODULE_tdst<Name>` | `POS_tdstCompletePosition` |
| Enum type | `MODULE_tde<Name>` | `HIE_tdeTypeOfObject` |
| Struct field | `<type><Name>` | `p_stLocalMatrix`, `ulFlags` |

Type prefixes: `b` boolean, `c` char, `uc` unsigned char, `w` short, `uw` unsigned short, `l` long,
`ul` unsigned long, `x` / `f` real, `st` struct, `p_` pointer, `a_` array, `h` handle, `sz` string,
`fn` function, `v` void.

## Reference projects
In order of trust:
1. **The game's own strings** (assertions give expressions, file names and function names).
2. [raytools/ACP_Ray2](https://github.com/raytools/ACP_Ray2) (MIT): reverse-engineered headers of the Rayman 2 PC
   engine, same module layout.
3. [LawlessCowboy/ray3](https://github.com/LawlessCowboy/ray3): matching decompilation of Rayman 3 PS2, also
   Metrowerks; real names from the debug information of the Korean release.
4. [byvar/raymap](https://github.com/byvar/raymap): OpenSpace level viewer that supports this game (`rrr_ds`, and a
   development build `rrr_ds_devbuild_20060525`). Its C# code describes the DS data structures
   (`Assets/Scripts/OpenSpace/ROM/`).
5. [raytools/OpenSpaceCodeGen](https://github.com/raytools/OpenSpaceCodeGen): decoder for binarized AI scripts.

The DS version differs from the PC engine (fixed-point maths, smaller structures): names can be reused, but every
structure layout must be checked against the game.

> [!CAUTION]
> The leaked Rayman 2 DS source code (2022) must never be used. See [CONTRIBUTING.md](../CONTRIBUTING.md#clean-room-policy).
