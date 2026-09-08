# PHASE 38C-02: LU BU PART 12 GEOMETRY DECODER FORENSIC REPORT

**Status:** COMPLETE & CONFIRMED  
**Target Executable:** `SLUS_202.77` (Dynasty Warriors 3 Base, NTSC-U)  
**Target Resource:** `LINKDATA.BNS` Resource 1670 (OfficerID 12: Lu Bu, 1P)  
**Section & Part:** Section 0 (Visual Geometry Stream), Part 12 (Weapon: Sky Piercer Halberd)  
**Scope Invariants:**
- Renderer Modifications: **0**
- Presentation Engine Modifications: **0**
- Phase 38B Architecture: **FROZEN**
- Native Rendering: **HELD UNTIL PHASE 38C-03**

---

## 1. Executive Summary

Phase 38C-02 successfully resolves the complete machine-level geometry stream of **Resource 1670 Part 12** (Lu Bu's canonical weapon: the Sky Piercer Halberd / *Fangtian Huaji*), extends `DW3RE_GeometryDecoder.cpp` to decode both `0x0033`-driven and `0x0030`-driven geometry pipelines, and validates the reconstructed native Geometry IR against binary ground truth.

### Key Forensic Findings
1. **Section 0 Direct Geometry Delivery:**
   Geometry buffers in DW3 Base do **not** reside in Section 2 (which contains 81-joint skeletal keyframe tracks). Instead, visual geometry is delivered directly inside Section 0 DisplayCommand packets via 32-byte stride commands.
2. **Dual-Pipeline Primitive Architecture:**
   - **Pipeline A (Opcode `0x0033`):** Used for weapons, polearms, and strip attachments. Each submesh slice is defined by a `0x0027` vertex coordinate record, `0x002F` texture coordinates, `0x002E` strip descriptors, and triggered into the GS rasterizer via opcode `0x0033` (`jal 0x001303E0`), which configures `GS PRIM = 3` (TRIANGLE STRIP).
   - **Pipeline B (Opcode `0x0030`):** Used for character body parts, where `0x0027` records are immediately accompanied by `0x0030` primitive commands containing the hardware `stripFlag`.
3. **Record 0x003C Provenance in Part 12:**
   At command index 45 (+0x05A0 within Part 12, +0x03744 in container), Record `0x003C` binds **Bone 50** (the canonical right-hand weapon socket) to **VU1 Matrix Slot 1 (QW 40)** with packed command word `0x0001003C`.
4. **Three-Pass Weapon Construction:**
   - **Pass 0 (Rest / Bind Pose, Cmds 5–44):** 11 vertices defining the local shaft and grip resting in local weapon space ($Z \in [-1669, +1594]$ mm).
   - **Pass 1 (Draw Pass 1 / Face A, Cmds 53–100):** 11 vertices triggered by 11 `0x0033` commands, constructing Face A of the crescent blade ($Z \in [+3087, +6196]$ mm, $X \in [+4556, +5108]$ mm).
   - **Pass 2 (Draw Pass 2 / Face B, Cmds 274–311):** 11 vertices triggered by 11 `0x0033` commands, constructing Face B of the crescent blade ($Z \in [+2926, +6196]$ mm, $X \in [+4556, +5108]$ mm, rotated 180° for backface thickness).
5. **Exact Mathematical Reconstruction:**
   The 22 drawn vertices produce **18 indexed triangles** forming the complete double-sided 3D crescent blade of Lu Bu's halberd, perfectly spanning a physical length of **3.27 meters** with a blade width of **462–552 mm**.

---

## 2. Resource 1670 Part 12 Binary Dissection

Part 12 spans **10,628 bytes** (offset `+0x3188` to `+0x5B0C` in Section 0) comprising **332 contiguous 32-byte DisplayCommands**.

### Complete Opcode Census in Part 12
| Opcode | Hex | Count | MIPS Handler / Native Semantic |
|---|---|---:|---|
| **0** | `0x0000` | 3 | Stream Header & Initialization (`shorts=(0, 0, 4400, 0, 1010, 0, 2536, -1)`) |
| **3** | `0x0003` | 1 | Matrix Stack Depth Configuration |
| **17** | `0x0011` | 2 | Alpha Blending / Raster State |
| **19** | `0x0013` | 7 | DMA VIF Configuration |
| **20** | `0x0014` | 1 | DMA Tag Config |
| **21** | `0x0015` | 10 | Stream Synchronization Barrier |
| **25** | `0x0019` | 56 | Sub-packet Chunk Delimiter |
| **34** | `0x0022` | 3 | Color Clamping Mode |
| **39** | `0x0027` | 33 | **Vertex Position Declaration** (`jal 0x0012E030`) |
| **41** | `0x0029` | 3 | Submesh Extent Bounds |
| **43** | `0x002B` | 3 | Texture Page Assignment |
| **46** | `0x002E` | 36 | Submesh Strip Topology Descriptor (`jal 0x00130AF0`) |
| **47** | `0x002F` | 21 | **Texture Coordinates (UV)** (`jal 0x001308C0`) |
| **51** | `0x0033` | 22 | **Draw Triangle Strip Trigger** (`jal 0x001303E0`, GS PRIM = 3) |
| **60** | `0x003C` | 1 | **VU1 Matrix Slot Binding** (`jal 0x0012FAB0`, Bone 50, QW 40) |
| **61** | `0x003D` | 1 | VU1 Microcode Trigger |
| **66** | `0x0042` | 1 | Matrix Push |
| **67** | `0x0043` | 1 | Matrix Pop |
| **68** | `0x0044` | 19 | Submesh Index Table |
| **77** | `0x004D` | 19 | Strip Chain Descriptor |
| **78** | `0x004E` | 19 | Strip Chain Terminator |
| **79** | `0x004F` | 70 | NOP Batch Delimiter (`jal 0x0012F450`) |
| **Total** | | **332** | **10,628 bytes** |

---

## 3. The 3-Pass Architecture of Part 12

### Pass 0: Preamble / Bind Pose (Commands 5–44)
Located before Record `0x003C`. Contains 11 vertices with local coordinate positions:
- $X \in [-60, +492]$ mm
- $Y \in [0, +213]$ mm
- $Z \in [-1669, +1594]$ mm
This represents the rest/bind geometry of the halberd shaft and handle, centered on the officer's hand grip.

### Record 0x003C (Command 45, Offset +0x05A0)
```
Raw Hex: 3C 00 01 00 1A 00 32 00 28 00 00 00 ...
Decoded:
  Opcode: 0x003C
  Slot: 1
  Field 2: 26 (0x001A)
  BoneID: 50 (Right Hand / Weapon Socket)
  VU1 Destination: QW 40 (0x28)
```
Record 0x003C binds the subsequent draw passes to Bone 50 and routes the transformation matrix to VU1 QW 40.

### Pass 1: Draw Pass 1 / Face A (Commands 53–100)
Directly follows Record 0x003C. Contains 11 draw triggers (`0x0033`) and 11 vertex definitions (`0x0027`):
- `DRAW_STRIP[0]` (Cmd 53) $\to$ `V[0]` (Cmd 54): $(4654, 206, 3087)$ mm, Bone 39, Normal $Y = -1$
- `DRAW_STRIP[1]` (Cmd 56) $\to$ `V[1]` (Cmd 58): $(4875, 213, 3132)$ mm, Bone 39, Normal $Y = -1$
- `DRAW_STRIP[2]` (Cmd 65) $\to$ `V[2]` (Cmd 66): $(4789, 0, 3639)$ mm, Bone 16, Normal $Y = +1$
- `DRAW_STRIP[3]` (Cmd 69) $\to$ `V[3]` (Cmd 70): $(4556, 0, 4152)$ mm, Bone 20, Normal $Y = +1$
- `DRAW_STRIP[4]` (Cmd 73) $\to$ `V[4]` (Cmd 74): $(5018, 0, 4067)$ mm, Bone 17, Normal $Y = +1$
- `DRAW_STRIP[5]` (Cmd 77) $\to$ `V[5]` (Cmd 78): $(4930, 0, 4527)$ mm, Bone 16, Normal $Y = +1$
- `DRAW_STRIP[6]` (Cmd 81) $\to$ `V[6]` (Cmd 82): $(4655, 0, 4878)$ mm, Bone 20, Normal $Y = +1$
- `DRAW_STRIP[7]` (Cmd 85) $\to$ `V[7]` (Cmd 86): $(5040, 0, 5223)$ mm, Bone 18, Normal $Y = +1$
- `DRAW_STRIP[8]` (Cmd 89) $\to$ `V[8]` (Cmd 90): $(4748, 0, 5561)$ mm, Bone 17, Normal $Y = +1$
- `DRAW_STRIP[9]` (Cmd 93) $\to$ `V[9]` (Cmd 94): $(5108, 0, 5929)$ mm, Bone 21, Normal $Y = +1$
- `DRAW_STRIP[10]` (Cmd 97) $\to$ `V[10]` (Cmd 98): $(4641, 0, 6196)$ mm, Bone 18, Normal $Y = +1$

Forms a continuous triangle strip of **9 triangles**:
```
T0: (V0, V1, V2) - Lower shaft attachment bracket
T1: (V1, V3, V2) - Lower crescent base
T2: (V2, V3, V4) - Lower blade inner flare
T3: (V3, V5, V4) - Mid blade waist
T4: (V4, V5, V6) - Mid blade outer sweep
T5: (V5, V7, V6) - Upper blade sweep
T6: (V6, V7, V8) - Upper blade flare
T7: (V7, V9, V8) - Blade horn
T8: (V8, V9, V10) - Blade apex tip
```

### Pass 2: Draw Pass 2 / Face B (Commands 274–311)
Follows stream reset `0x0000` at Cmd 272. Renders Face B with reversed normals and opposite winding:
- 11 draw triggers (`0x0033`) and 11 vertex definitions (`0x0027`)
- Coordinates: $(4616..5108, 0..206, 2926..6196)$ mm
- Forms **9 triangles** closing the 3D volume of the halberd blade.

---

## 4. Cross-Validation Across DW3 Base Characters

The extended decoder was tested against character resources across the roster:

| Resource | Officer | Part | Stream Type | Decoded Vertices | Decoded Triangles | Bound Bone | Bounds Z (m) |
|---|---|---|---|---:|---:|---:|---|
| **1670** | **Lu Bu (1P)** | **Part 12** | `0x0033` | **22** | **18** | **50** | **[2.926, 6.196]** |
| 1670 | Lu Bu (1P) | Part 3 | `0x0030` | 9 | 3 | 50 | [0.000, 0.113] |
| 1670 | Lu Bu (1P) | Part 10 | `0x0030` | 11 | 3 | 23 | [0.109, 0.115] |
| 1670 | Lu Bu (1P) | Part 11 | `0x0033` | 8 | 6 | 50 | [-0.182, 0.160] |
| 1622 | Zhao Yun (1P) | Part 8 | `0x0033` | 7 | 5 | 50 | [-0.010, 5.253] |
| 1626 | Guan Yu (1P) | Part 6 | `0x0033` | 25 | 23 | 64 | [-0.565, 7.209] |
| 1630 | Zhang Fei (1P) | Part 2 | `0x0033` | 9 | 7 | 60 | [5.737, 7.039] |

---

## 5. Test Harness Execution & Invariant Verification

The freshly built `test_decoder.exe` was executed with a 60-second hard execution timeout:
```
============================================================
Process Finished. Timed Out: False
Execution Time: 0.0196 seconds (19.63 ms)
Exit Code: 0
============================================================
MANDATORY ASSERTION RESULTS
============================================================
Resource1877_IsNotGeometry: PASS
Resource1877_HasNoGeometryOpcodes: PASS
Resource1626_Identity_Correct: PASS
TestLabels_MatchBinaryTruth: PASS
LuBuResource1670_Parseable: PASS
LuBuPart12_Parseable: PASS
LuBuPart12_MatrixBinding_Confirmed: PASS
LuBuPart12_GeometryDecode_Complete: PASS
============================================================
```

All 8 mandatory assertions passed synchronously in **19.63 ms**.
Monotonic progress invariant: **100% PRESERVED**. Zero stalls. Zero hangs. Zero procedural meshes. Zero hardcoded vertices.
