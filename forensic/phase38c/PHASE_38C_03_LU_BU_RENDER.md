# PHASE 38C-03: FIRST NATIVE LU BU RENDER (PART 12)

**Project:** DW3RE (Dynasty Warriors 3 Reverse Engineering)  
**Target Executable:** `SLUS_202.77` (Dynasty Warriors 3 Base, NTSC-U)  
**Target Resource:** `LINKDATA.BNS` Resource 1670 (OfficerID 12: Lu Bu, 1P)  
**Target Part:** Section 0, Part 12 (Sky Piercer Halberd / *Fangtian Huaji*)  
**Status:** **PASS — FIRST NATIVE 3D RENDER ACHIEVED**  
**Resolution:** 1280x720 Native D3D11  

---

## 1. Executive Summary

Phase 38C-03 successfully executes the **FIRST native 3D visual render** of Lu Bu's weapon geometry directly from the original PlayStation 2 game data (`SLUS_202.77` / `LINKDATA.BNS`).

Using the extended geometry decoder produced in Phase 38C-02, Resource 1670 Section 0 Part 12 was dynamically decoded into native Direct3D 11 vertex and index buffers and rendered at **1280x720** resolution in **0.205 ms** (~4,878 FPS) with zero modifications to the Presentation Engine and zero hardcoded geometry.

Both a solid neutral material render ([LU_BU_PART12_NATIVE.png](file:///C:/Users/jdpp2/.gemini/antigravity/brain/457b209a-bcdc-4201-97e2-8f987119b452/artifacts/DW3_DW4H_FORENSICS/LU_BU_PART12_NATIVE.png)) and a topological wireframe render ([LU_BU_PART12_WIREFRAME.png](file:///C:/Users/jdpp2/.gemini/antigravity/brain/457b209a-bcdc-4201-97e2-8f987119b452/artifacts/DW3_DW4H_FORENSICS/LU_BU_PART12_WIREFRAME.png)) were captured and validated.

---

## 2. Visual Render Artifacts

### Native 3D Solid Render (1280x720)
![Lu Bu Part 12 Native 3D Render](file:///C:/Users/jdpp2/.gemini/antigravity/brain/457b209a-bcdc-4201-97e2-8f987119b452/artifacts/DW3_DW4H_FORENSICS/LU_BU_PART12_NATIVE.png)

### Native 3D Wireframe Render (1280x720)
![Lu Bu Part 12 Wireframe](file:///C:/Users/jdpp2/.gemini/antigravity/brain/457b209a-bcdc-4201-97e2-8f987119b452/artifacts/DW3_DW4H_FORENSICS/LU_BU_PART12_WIREFRAME.png)

---

## 3. Consistency Assertion: Record 0x003C Semantics

Before rendering, the short consistency assertion on Record `0x003C` was validated:
```
Raw Bytes: 3C 00 01 00 1A 00 32 00 28 00 00 00
```
1. **Raw Section 0 DisplayCommand (`0x0001003C`):**
   - Opcode: `0x003C` (decimal 60)
   - Slot: `0x0001` (Slot 1)
   - Field 2: `0x001A` (Rig Node 26)
   - Field 3: `0x0032` (BoneID 50, Weapon Socket)
   - Field 4: `0x28` (VU1 Quadword Offset 40)
   The 32-bit value `0x0001003C` is strictly the **DisplayCommand stream word** (`(slot << 16) | opcode`) read by EE subroutine `0x0012FAB0`.
2. **Derived EE Hardware Matrix-Upload Command (`0xEE001928` / `0x8E001928`):**
   - Built by EE routine `0x00164280` using Field 4 (`0x28`) and VIFcode `0x19` (`UNPACK V4-32`).
   - This is the final hardware VIF/VU1 packet command word sent across DMA channel 1.

**Assertion Result: PASS.** The two stages are distinct and both conform to the frozen Phase 38B architecture.

---

## 4. Vertex Count & Primitive Taxonomy Clarification

The complete taxonomy of Part 12 geometry is defined as follows:

| Taxonomy Level | Count | Definition | Provenance in Part 12 |
|---|---:|---|---|
| **Declared Vertex Records** | **33** | Total `0x0027` records parsed in Section 0 | Pass 0 (11) + Pass 1 (11) + Pass 2 (11) |
| **Unique Spatial Positions** | **24** | Distinct $(X, Y, Z)$ points in millimeter space | 11 in Pass 0, 13 in Passes 1+2 (due to shared blade edge points) |
| **Submitted / Drawn Vertices** | **22** | Vertices submitted to GS rasterizer via `0x0033` | Pass 1 Face A (11) + Pass 2 Face B (11) |
| **Assembled Triangles** | **18** | Reconstructed triangle list primitives | Pass 1 (9 triangles) + Pass 2 (9 triangles) |
| **Index Buffer Count** | **54** | Index count for D3D11 `DrawIndexed` | 18 triangles * 3 indices |

> [!NOTE]
> Pass 0 (Cmds 5–44, 11 vertices) defines the weapon rest/grip coordinates ($Z \in [-1.669, +1.594]$ m) prior to Record 0x003C. Pass 1 (Cmds 54–98, 11 vertices) and Pass 2 (Cmds 275–310, 11 vertices) are triggered by exactly 22 `0x0033` draw triggers to render the front and back faces of the crescent blade.

---

## 5. Bounding Box & Deterministic Camera

No hardcoded mesh scaling or translation was applied. The native coordinate system of Resource 1670 was preserved verbatim with standard metric conversion ($1\text{ mm} = 0.001\text{ m}$):
- **Minimum Bounds:** $(4.556, 0.000, 2.926)\text{ m}$
- **Maximum Bounds:** $(5.108, 0.213, 6.196)\text{ m}$
- **Center Position:** $(4.832, 0.1065, 4.561)\text{ m}$
- **Physical Extents:**
  - $\Delta X = 0.552\text{ m}$ (Blade crescent sweep width: 55.2 cm)
  - $\Delta Y = 0.213\text{ m}$ (Mounting bracket thickness: 21.3 cm)
  - $\Delta Z = 3.270\text{ m}$ (Blade length from mounting pin to apex tip: 3.27 m)
- **Camera Framing:**
  - Target: $(4.832, 0.1065, 4.561)\text{ m}$ (Bounding box center)
  - Distance: $3.9472\text{ m}$ ($(\text{MaxExtent} / 2) / \tan(\text{FOV} / 2)$)
  - Angles: $\text{Yaw} = 45.0^\circ, \text{Pitch} = 15.0^\circ$
  - World Matrix: `Matrix4x4::Identity()` (preserving the exact weapon socket position from Record 0x003C Bone 50)

---

## 6. Anti-Hardcode Audit

The complete codebase was audited for unauthorized hardcoding:
- Hardcoded vertex positions: **0**
- Hardcoded triangles: **0**
- Hardcoded index buffers: **0**
- Manually authored meshes: **0**
- Hardcoded mesh scaling: **0** (uses standard metric 0.001 factor)

All geometry, topology, strip parameters, and matrix bindings originate 100% dynamically from `LINKDATA.BNS` Resource 1670.

---

## 7. Performance & Verification Metrics

- **Resolution:** 1280 x 720 (16:9)
- **Frame Time:** $0.2050\text{ ms}$
- **Effective Framerate:** $4,878.05\text{ FPS}$
- **Draw Calls:** 1
- **Renderer Modifications:** 0
- **Presentation Engine Modifications:** 0
