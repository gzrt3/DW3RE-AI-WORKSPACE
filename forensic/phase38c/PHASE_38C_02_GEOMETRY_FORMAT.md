# PHASE 38C-02: DYNASTY WARRIORS 3 SECTION 0 GEOMETRY FORMAT SPECIFICATION

**Game Target:** Dynasty Warriors 3 Base (`SLUS_202.77`, NTSC-U)  
**Container Architecture:** `KOEI_GEO_06`  
**Container Section:** Section 0 (DisplayCommand Execution Stream)  
**Status:** FROZEN & CONFIRMED BY REVERSE ENGINEERING

---

## 1. Container Section Topology

In `KOEI_GEO_06` character containers:
- **Section 0 (Visual Geometry Stream):** Contains part offsets and a stream of 32-byte DisplayCommands. **ALL visual vertex, normal, UV, and primitive draw commands reside in Section 0.**
- **Section 1:** Secondary rig control and skeleton metadata.
- **Section 2 (Skeletal Animation Keyframes):** Contains 81-joint keyframe animation tracks (frame counts, rotations, translations) for character locomotion and combat motions. It does **NOT** contain vertex geometry.
- **Section 3:** Collision bounding boxes and hit detection spheres.
- **Section 4:** Secondary animation channels.
- **Section 5 (Bone Mapping Table):** Contains `L0` (part-to-bone binding list) and `L1` (dynamic weapon sockets).

---

## 2. Section 0 Part Stream Structure

Section 0 begins with a 32-bit integer header:
```
Offset +0x00: uint32_t numParts;
Offset +0x04: uint32_t partOffsets[numParts];
```
Each Part spans from `partOffsets[p]` to `partOffsets[p+1]` (or section end).
Every command within a Part is **strictly 32 bytes** (`stride = 32`), dispatched via ELF jump table `0x003400C0`.

---

## 3. DisplayCommand Geometry Opcodes Specification

### 3.1 Opcode `0x0027`: Vertex Declaration Record
- **Size:** 32 bytes
- **Native Handler:** `0x0012E030`
- **Binary Layout:**
```
+0x00: uint16_t opcode;        // 0x0027 (decimal 39)
+0x02: uint16_t submeshIndex;  // Submesh slice index [0..N-1]
+0x04: int16_t  radius;        // Bounding radius parameter
+0x06: int16_t  x;             // X coordinate in millimeters (mm)
+0x08: int16_t  y;             // Y coordinate in millimeters (mm)
+0x0A: int16_t  z;             // Z coordinate in millimeters (mm)
+0x0C: int16_t  normalOrRot;   // Normal orientation angle / rotation (0 or 180)
+0x0E: int16_t  boneTag;       // Local joint/bone attachment tag
+0x10..0x1F: int16_t pad[8];   // Reserved / sub-vector parameters
```
- **Coordinate Transformation:**
  $$\vec{P}_{\text{local}} = \left( \frac{x}{1000.0}, \frac{y}{1000.0}, \frac{z}{1000.0} \right) \text{ meters}$$

### 3.2 Opcode `0x002F`: Texture Coordinates (UV) Record
- **Size:** 32 bytes
- **Native Handler:** `0x001308C0`
- **Binary Layout:**
```
+0x00: uint16_t opcode;        // 0x002F (decimal 47)
+0x02: uint16_t submeshIndex;  // Matches submesh index from 0x0027
+0x04: uint16_t u;             // Raw U coordinate [0..512]
+0x06: uint16_t v;             // Raw V coordinate [0..256]
+0x08: uint16_t flags;         // Texture wrapping / clamping flags
+0x0A..0x1F: uint16_t pad[11]; // Reserved
```
- **Normalized Texture Coordinates:**
  $$U_{\text{norm}} = \frac{u + 0.5}{512.0}, \quad V_{\text{norm}} = \frac{v + 0.5}{256.0}$$

### 3.3 Opcode `0x002E`: Strip Topology Descriptor
- **Size:** 32 bytes
- **Native Handler:** `0x00130AF0`
- **Binary Layout:**
```
+0x00: uint16_t opcode;        // 0x002E (decimal 46)
+0x02: uint16_t submeshIndex;  // Submesh slice index
+0x04: int16_t  boneA;         // Primary joint influence
+0x06: int16_t  boneB;         // Secondary joint influence
+0x08: int16_t  param1;        // Strip length / vertex span
+0x0A: int16_t  param2;        // Adjacency link index
+0x0C: int16_t  param3;        // Reserved
+0x0E: int16_t  param4;        // Reserved
```

### 3.4 Opcode `0x0033`: Draw Triangle Strip Trigger
- **Size:** 32 bytes
- **Native Handler:** `0x001303E0`
- **Execution Flow:**
  1. Calls `0x00130480` to evaluate rasterizer state.
  2. Calls `0x00130620` to configure hardware registers.
  3. Sets **GS PRIM = 3 (TRIANGLE STRIP)** via `0x0015D1C0`.
  4. Triggers drawing of the assembled submesh strip.

### 3.5 Opcode `0x003C`: VU1 Matrix Slot Binding Record
- **Size:** 32 bytes
- **Native Handler:** `0x0012FAB0`
- **Binary Layout:**
```
+0x00: uint16_t opcode;        // 0x003C (decimal 60)
+0x02: int16_t  slotIndex;     // Matrix slot index (e.g. 1)
+0x04: int16_t  field2;        // Rig node index (e.g. 26)
+0x06: int16_t  boneId;        // Character BoneID (e.g. 50 = Weapon socket)
+0x08: uint8_t  vu1_qw;        // VU1 Quadword destination (e.g. 40)
+0x09: uint8_t  field5;        // Sub-channel flag
+0x0A..0x1F: uint8_t pad[22];  // Reserved
```

### 3.6 Opcode `0x004F`: NOP Batch Delimiter
- **Size:** 32 bytes
- **Native Handler:** `0x00134670`
- Calls dummy subroutine `0x0012F450` (`jr ra`) and jumps to `0x00134B00` (`addiu s1, s1, 32`).

---

## 4. Triangle Strip Assembly & Winding Rules

In an $N$-vertex strip $v_0, v_1, v_2, \dots, v_{N-1}$:
- For Face A (front face, normal pointing outward):
  - Triangle $i$ ($i = 0 \dots N-3$):
    - If $i$ is even: $(v_i, v_{i+1}, v_{i+2})$
    - If $i$ is odd: $(v_{i+1}, v_i, v_{i+2})$
- For Face B (back face, normal rotated 180°):
  - Inverted winding closes the manifold volume:
    - If $i$ is even: $(v_{i+1}, v_i, v_{i+2})$
    - If $i$ is odd: $(v_i, v_{i+1}, v_{i+2})$

In Lu Bu Part 12:
- Pass 1: 11 vertices $\implies$ 9 triangles
- Pass 2: 11 vertices $\implies$ 9 triangles
- Total: **22 vertices, 18 triangles** forming the 3D Sky Piercer crescent blade.
