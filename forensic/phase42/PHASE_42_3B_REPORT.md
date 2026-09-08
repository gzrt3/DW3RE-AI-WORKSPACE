# PHASE 42.3B — RAW SECTION 0 / PART 12 RECOVERY REPORT

## Result

All required raw recovery and minimal geometry validation gates pass for
DW3 Resource 1670, Section 0, Part 12.

## Source and extraction

- Source: `D:\Juegos\Playstation\Playstation 2\Musou\DW3_native_spike\original\linkdata.bns`
- Resource ID: `1670`
- Sector: `130248`
- Resource absolute file offset: `0x0FE64000` (`266747904`)
- Extracted payload size: `72060` bytes
- Extracted payload SHA-256: `DC77C1DC3E1FEFF52F4A3593B6B99FC4274DC41FC0C06C0524C46BFC7DDE2D72`
- Container header: `KOEI_GEO_06` (`0x00000006`)

## Section and Part 12 validation

- Section 0 offset: `0x1C`
- Section 0 part count: `13`
- Part 12 offset within Section 0: `0x3188`
- Part 12 absolute resource offset: `0x31A4`
- Part 12 size: `10628` bytes
- Command count: `332`
- Command stride: `32` bytes
- Trailing sentinel: `FF FF 00 00`
- Socket record: raw DisplayCommand `0x0001003C`
- Socket fields: slot `1`, rig node `26`, Bone `50`, QW `40`
- Derived hardware command remains distinct: `0xEE001928`

## Geometry validation

- `0x0027` vertex records: `33`
- `0x0033` draw triggers: `22`
- Drawn vertices: `22`
- Triangle strips: `2`
- Triangles: `18`
- Bounds calculated from drawn vertices: `(4.556, 0.000, 2.926)` to `(5.108, 0.213, 6.196)` meters

The decoder uses `s16[3]`, `s16[4]`, `s16[5]` for position and `s16[6]`
for the auxiliary field. No manual vertices, transforms, bounds, or offsets
are used.

## Generated artifacts

- `PHASE_42_3B_RESOURCE_1670.bin`
- `PHASE_42_3B_PART12_RAW_HEXDUMP.txt`
- `PHASE_42_3B_PART12_COMMAND_TABLE.csv`

## Build and test

- `DW3RE_MODEL_VIEWER`: PASS
- `test_dw3_section0_part12`: PASS
- Viewer window smoke test: PASS
- Sky Piercer geometry: decoded and rendered through the new local geometry path
- Dragon Saber: unchanged and metadata-only

## Scope boundary

The module is intentionally limited to the recovered Resource 1670 / Part 12
path. It does not implement a generic Section 0 decoder, textures, materials,
FK/socket mounting, or other resources.
