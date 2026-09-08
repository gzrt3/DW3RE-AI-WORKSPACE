# PHASE 42.2 — MULTI-ASSET GEOMETRY VALIDATION

## Status

`STRUCTURAL_DECODER: PASS`

`PART12_DECODER: PASS`

`MULTI_ASSET_DECODER: PASS`

`MODEL_VIEWER_INTEGRATION: BUILT; visual smoke validation pending`

The same `DecodeSection0` / `DecodeSection0Part` implementation processes the mandatory real assets without ResourceID or PartID branches:

| Resource / Part | Classification | Submitted | Strips | Triangles | Pipeline |
|---|---|---:|---:|---:|---|
| 1622 / 8 | GEOMETRY | 6 | 1 | 4 | 0x0033 |
| 1626 / 6 | GEOMETRY | 14 | 1 | 12 | 0x0033 |
| 1630 / 2 | OTHER in current directory interpretation; geometry is emitted by Part 4 | 0 | 0 | 0 | mixed |
| 1630 / 4 | GEOMETRY | 14 | 0 | 12 | 0x0030 |
| 1670 / 12 | GEOMETRY | 22 | 2 | 18 | 0x0033 |

All Section 0 parts were traversed and classified in `PHASE_42_2_MULTI_ASSET_GEOMETRY.csv`.

## Raw source

All data came from:

`D:/Juegos/Playstation/Playstation 2/Musou/DW3_native_spike/original/linkdata.bns`

Container SHA-256:

`D040B9FB068043654650642B3F4226A3AE9EA633DE096AC693A63B26B735F666`

No source asset was modified.

## Determinism

`test_dw3_section0_geometry.exe` was run twice against the same container. Output was identical: `DETERMINISM=True`.

## Remaining limitations

- The current test matrix confirms structural decoding and multi-asset topology generation, but does not yet compare every asset against an independent historical triangle-count oracle.
- `1630/Part2` remains a non-renderable/other branch under the current raw Section 0 directory interpretation; `1630/Part4` is the geometry-bearing part emitted by the same decoder.
- Viewer executable was rebuilt, but a separate visual screenshot/session check is still required before marking viewer integration as visual PASS.
