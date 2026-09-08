# SESSION HANDOFF — DYNASTY WARRIORS RE: DEFINITIVE EDITION
**Date**: September 4, 2026  
**Session Scope**: Phases 41A, 41B, 41C, and 41C-D.1 Finalization & Debug Packaging

---

## 1. PROJECT
**Dynasty Warriors RE Definitive Edition**  
Native decompilation, reconstruction, and modern re-implementation of *Dynasty Warriors 3* (DW3) and *Dynasty Warriors 3: Xtreme Legends* (DW3XL) on modern 64-bit systems.

---

## 2. CURRENT OBJECTIVE
Native reconstruction of *Dynasty Warriors 3* / *DW3XL*.  
- **Primary Implementation Target**: `SLUS_202.77` (DW3 USA) / `linkdata.bns`.
- **Secondary Target**: `SLUS_206.17` (DW3XL USA).
- Other Koei titles (*Dynasty Warriors 4 Hyper*, *Kessen*, *Samurai Warriors*) serve **strictly as historical or reference comparative evidence**. Never port structures from later games into DW3 without direct byte-level verification.

---

## 3. PROJECT PRINCIPLES
1. **Native Evidence > Assumptions**: If native code or binary structures contradict an assumption, the assumption must be discarded immediately.
2. **Direct DW3 Evidence > Later-Game Evidence**: DW4/DW5 mechanics and layouts do not apply to DW3 unless proven bit-exact.
3. **No Universal Koei Engine**: Engine subsystems evolved significantly between 2000 and 2004; treat DW3 as its own distinct pipeline.
4. **No Visual Hacks**: Never fudge matrices, rotations, or vertices to make something "look right".
5. **No Manual Transforms**: Zero coordinate scaling factors, zero ad-hoc offset adjustments.
6. **No Character-Specific Exceptions**: Every character must run through the exact same universal pipeline.
7. **No Gameplay Implementation Until Native Pipeline is Proven**: All underlying character, geometry, animation, and map container pipelines must be scientifically verified before game logic is authored.

---

## 4. BINARY PATHS & VERIFIED HASHES

### Dynasty Warriors 3 (USA)
- **Game Executable**: `D:\Juegos\Playstation\Playstation 2\Musou\DW3_native_spike\original\SLUS_202.77`
- **Forensic Copy**: `C:\Users\jdpp2\.gemini\antigravity\brain\457b209a-bcdc-4201-97e2-8f987119b452\artifacts\DW3_DW4H_FORENSICS\DW3_COPY\SLUS_202.77`
- **File Size**: `2,513,152 bytes`
- **SHA-256**: `0E1EDAC59FDB854AD665BD37E44B11BC7C4C6211F34EEFDAFAE84DB4011A547D`
- **Game Archive**: `D:\Juegos\Playstation\Playstation 2\Musou\DW3_native_spike\original\linkdata.bns`
- **Archive Size**: `1,048,576,000 bytes`

### Dynasty Warriors 3: Xtreme Legends (USA)
- **Game Executable**: `D:\Juegos\Playstation\Playstation 2\Musou\DW3_native_spike\original\SLUS_206.17`
- **Forensic Copy**: `C:\Users\jdpp2\.gemini\antigravity\brain\457b209a-bcdc-4201-97e2-8f987119b452\artifacts\DW3_DW3XL_STRUCTURAL_CORRELATION\SLUS_206.17`
- **SHA-256**: `D26695FA7769CABBDDBD89168924279CD1035EEB0BDD3744AEC95257F7CFA731`

### Analysis Tools
- **Ghidra**: `D:\Tools\ghidra\ghidra_12.1.3_PUBLIC`
- **MSVC Compiler**: `C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.44.35207\bin\Hostx64\x64\cl.exe`

---

## 5. FROZEN PHASES STATUS
The following phases have achieved **100% deterministic PASS** and are strictly **FROZEN**. Their algorithms, constants, structures, and outputs must not be altered:

- **Phase 37D**: Native Cinematic Startup (`PASS / FROZEN`)
- **Phase 37E**: Presentation & Debug Foundation (`PASS / FROZEN`)
- **Phase 38A**: Character Container & Resource Architecture (`PASS / FROZEN`)
- **Phase 38B**: Character Section0 / Section5 / VU1 Forensic Reconstruction (`PASS / FROZEN`)
- **Phase 38C**: Character Geometry / Socket / Identity Reconstruction (`PASS / FROZEN`)
- **Phase 39**: Global Forensic Harvest (`PASS / FROZEN`)
- **Phase 40**: Universal Native Character Architecture (`PASS / FROZEN`)
- **Phase 41A**: Primary Animation Runtime (`PASS / FROZEN`)
- **Phase 41B**: Secondary Dynamics Runtime (`PASS / FROZEN`)
- **Phase 41C**: Fu Xi Complete Character Pipeline (`PASS / VERIFIED / FROZEN`)
- **Phase 41C-D1**: He Fei Castle Map Forensics (`PASS / VERIFIED / FROZEN`)

---

## 6. SUBSYSTEM SUMMARIES

### Phase 41A Summary (Primary Animation Runtime)
- **Target Section**: Section 2 of motion bank resources.
- **Skeletal Rig**: Universal 81-joint hierarchical skeleton.
- **Interpolation**: Native Hermite spline evaluation with tangent clamping.
- **Root Motion**: Dedicated translation channels 9, 10, 11 for $(X, Y, Z)$ spatial displacement.
- **Rotation Order**: Strict Tait-Bryan $R = R_z \times R_y \times R_x$.
- **Forward Kinematics**: Recursive concatenation: $M_{\text{world}}[\text{joint}] = M_{\text{world}}[\text{parent}] \times M_{\text{local}}[\text{joint}]$.
- **Verification**: Multi-frame playback across all standard characters with bit-exact hash verification.

### Phase 41B Summary (Secondary Dynamics Runtime)
- **Target Section**: Section 3 of motion bank resources.
- **Physical Model**: Secondary angular bone dynamics (spring-damper angular simulation).
- **Domain**: Operates directly on appendage bone chains (hair, sashes, capes, tassles, scabbards).
- **Distinction**: **NOT** vertex cloth, **NOT** Section 4 collision hurtboxes.
- **Pipeline Dataflow**:
  $$\text{Section 2} \longrightarrow \text{Section 3 Angular Integration} \longrightarrow M_{\text{local}}[\text{joint}] \longrightarrow \text{81-Joint FK} \longrightarrow \text{VU1}$$
- **Verification**: Deterministic cross-character verification, multi-frame stability, zero hardcoded parameters.

### Phase 41C Summary (Complete Character Pipeline / Fu Xi)
- **Target Subject**: **Fu Xi (OfficerID 39)**.
- **Container Architecture**: Discovered that bonus/secret characters (Fu Xi, Nu Wa, Diao Chan, etc.) reside in consolidated multi-character archives (`Resource 1620` 1P / `Resource 1621` 2P) rather than dedicated single-character archives.
- **Skeletal Mesh**: 9 submeshes, fully bound to the 81-joint skeleton.
- **Section 5 VU1 Partitioning**: Reconstructed matrix selector buffers mapping joints to VU1 memory slots `[32..95]`.
- **GS Packet Submission**: Simulated VIF `MSCAL` primitive generation for triangle strips.
- **Determinism**: Evaluated frames 0, 5, 10, 15, 30 with state hash verification (Frame 0 hash: `0x4c94f9f54fa77802`).

### He Fei Castle Summary (Phase 41C-D1)
- **Stage ID**: **`18`** (`0x12`) — *"The Siege of He Fei Castle"*.
- **Native Resource Cluster**:
  - `FOB` (**Resource 1100**, 175,088 bytes): Field objects, 80x80 navigation grid, 4,053 position vectors, 3,244 plane pairs.
  - `CB2` (**Resource 1101**, 737,572 bytes): Quadtree collision block and heightfield.
  - `GB2` (**Resource 1102**, 537,296 bytes): 3,358 static modular architectural instances ($160\text{ bytes each}$).
  - `TM3 Primary` (**Resource 168**, 102,672 bytes): Castle wall and stone tile textures ($150 + 18$).
  - `TM3 Secondary` (**Resource 366**, 53,520 bytes): Environmental props and terrain textures ($348 + 18$).
  - `Terrain Mesh` (**Resource 1111**, 1,335,356 bytes): $160 \times 160$ continuous ground elevation surface.
  - `Stage Mesh` (**Resource 1112**, 1,957,368 bytes): Master 3D geometry stream and VU1 display lists.
- **World Space Metrics**:
  - Right-handed 3D Cartesian ($X$ East/West, $Y$ Elevation/Up, $Z$ North/South).
  - Scale: $1.0\text{ unit} = 1.0\text{ mm}$ ($0.001\text{ meters}$).
  - Nominal ground level: $Y = -5,000.0\text{ mm}$ ($-5.00\text{ meters}$).
  - Stage Center: $(38090.20\text{ mm}, -4933.15\text{ mm}, 37592.50\text{ mm})$.

### Zhang Jiao Identity (Combat Subject)
- **OfficerID**: **`27`** (Faction 3 — Yellow Turbans).
- **Container**: `Resource 1620` (Sub-Packet `Sub 4`, calculated as $27 - 23$).
- **MovesetID**: `32`.
- **Weapon Base ID**: `75` (Staff).
- **Motion Bank**: `Resource 1778` ($1714 + 32 \times 2 = 1778$).

---

## 7. DEBUG SCENE & COMBAT VECTORS

### Intended Integration Scene
- **Battlefield**: He Fei Castle (Stage 18) courtyard arena.
- **Central Defender**: Zhang Jiao (Officer 27).
- **Combat Situation**: Player survives in the center while enemy forces advance from both flanks.

```
                          [NORTH GATE: Z ~ 75.5m]
                    Spawns 17..28 (X: 35.0m..50.0m)
                                 │
                                 ▼
┌──────────────────────────────────────────────────────────────────┐
│                                                                  │
│  [WEST ENEMY FLANK]                     [EAST ENEMY FLANK]       │
│  Spawns 36..42 & Waypoints 0..153       Spawns 0..16             │
│  (X: 6.5m..24.0m, Z: 41.0m..72.5m)      (X: 71.5m..73.5m,        │
│          ───►                             Z: 66.5m..68.0m)       │
│                                                  ◄───            │
│                                                                  │
│                         [PLAYER: ZHANG JIAO]                     │
│                         Courtyard Center (Idx 1250 / 1276)       │
│                         (X: 38.0m..39.0m, Z: 36.5m..37.5m)       │
│                         Elevation: Y = -5,000.0 mm (-5.0m)       │
│                                                                  │
└──────────────────────────────────────────────────────────────────┘
```

- **Player Placement (Zhang Jiao)**:
  - $(X = 39000.0\text{ mm},\ Y = -5000.0\text{ mm},\ Z = 37500.0\text{ mm})$.
  - Facing North ($0.0^{\circ}$).
- **Eastern Wave (17 Spawns)**:
  - Primary Base: $(X = 72500.0\text{ mm},\ Y = -3500.0\text{ mm},\ Z = 66500.0\text{ mm})$.
  - March Vector: West-South-West towards courtyard center.
- **Western Wave (7 Spawns + Corridor Nodes)**:
  - Approach Nodes: $(X = 29750.0\text{ mm},\ Y = -4700.0\text{ mm},\ Z = 75000.0\text{ mm})$ and $(X = 24000.0\text{ mm},\ Y = -5000.0\text{ mm},\ Z = 59000.0\text{ mm})$.
  - March Vector: East-South-East towards courtyard center.
- **Northern Outer Reserve (12 Spawns)**:
  - Gate Origin: $(X = 50000.0\text{ mm},\ Y = -5000.0\text{ mm},\ Z = 75500.0\text{ mm})$.

> [!NOTE]
> These coordinates originate strictly from native `FOB` records. They are debug scene references, not hardcoded character pipeline constants.

---

## 8. KNOWN RESOURCE TABLES & RESOLUTION CHAINS
- **Master Resource Descriptor Table**: VA `0x002FF850` (File offset `0x001FF8D0`).
  - Stride: 16 bytes (`sector_offset`, `sector_count`, `payload_size`, `reserved`).
- **Officer Names Table**: VA `0x002D0400` (Pointers to Shift-JIS strings).
- **Officer Model Map Table**: VA `0x002CDD60`.
  - Officer 0 = Zhao Yun $\to$ `Resource 1622`
  - Officer 1 = Guan Yu $\to$ `Resource 1626`
  - Officer 2 = Zhang Fei $\to$ `Resource 1630`
  - Officer 12 = Lu Bu $\to$ `Resource 1670`
  - Officer 27 = Zhang Jiao $\to$ `Resource 1620` (Sub 4)
  - Officer 39 = Fu Xi $\to$ `Resource 1620` (Sub 16)
- **Stage Name Table (Long)**: VA `0x002D0340` (23 stage pointers).
- **Stage Name Table (Short)**: VA `0x002D03A0`.
- **Scenario Table**: VA `0x00309760`.

---

## 9. FALSIFIED HYPOTHESES (DO NOT RE-OPEN)
1. **Resource 1877 is NOT Weapon Geometry**: It is attack bounding box and combat collision parameter data.
2. **Section 4 is NOT Skeletal Bind Translation**: It defines hurtbox/hitbox capsules.
3. **Tag 25 $\to$ Bone 50 Hypothesis Falsified**: Tag 25 is an auxiliary flag, not a bone index.
4. **WPN-02 Socket $t_2 = 80$ Falsified**: Socket mapping uses the attachment offset table.
5. **Ad-Hoc Coordinate Scaling Falsified**: Character models and map environments share the exact same $1\text{ unit} = 1\text{ mm}$ scale.

---

## 10. CURRENT NEXT ACTION (PHASE 41C-D2)
When resuming in the next session:
1. **Stage Step 1**: Render He Fei Castle static architecture (`GB2` + `1112`) headlessly or into a window.
2. **Stage Step 2**: Place Zhang Jiao in the courtyard center $(39000, -5000, 37500)$.
3. **Stage Step 3**: Introduce a single enemy entity at the Eastern approach node.
4. **Stage Step 4**: Instantiate the two-flank debug combat composition.

---

## 11. ENGINEERING RULE: FIRST FAILURE STAGE
If visual anomalies or matrix discrepancies occur:
**DO NOT WRITE PATCHES OR FUDGE MATRICES**.  
Locate the `FIRST_FAILURE_STAGE` in the pipeline:
$$\text{Resource Reading} \longrightarrow \text{Hermite Spline} \longrightarrow \text{FK Evaluation} \longrightarrow \text{VU1 Matrix Packing} \longrightarrow \text{GS Raster}$$
Debug and fix the exact stage where the discrepancy originates.

---

## 12. BUILD STATUS & TEST EXECUTABLE
- **Executable**: `DW3RE_DEBUG_TEST.exe`
- **Location**: `C:\Users\jdpp2\.gemini\antigravity\brain\457b209a-bcdc-4201-97e2-8f987119b452\scratch\dw3re_presentation\DW3RE_DEBUG_TEST.exe`
- **Package Location**: `C:\Users\jdpp2\.gemini\antigravity\brain\457b209a-bcdc-4201-97e2-8f987119b452\DW3RE_DEBUG_TEST\` and `D:\Juegos\Playstation\Playstation 2\DW3RE_DEBUG_TEST\`
- **Build Configuration**: MSVC 19.44, x64, `/std:c++17 /EHsc /O2`
- **Smoke Test**: `PASS (Code 0)` — All 4 diagnostic suites executed and passed.
