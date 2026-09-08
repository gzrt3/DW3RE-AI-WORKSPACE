# PHASE 44B.15 — GS primitive assembly proof

**PHASE_44B_15: PASS**  
**XYZF2_SUBMISSION: CONFIRMED**  
**TRIANGLESTRIP_ASSEMBLY: CONFIRMED**  
**SAMPLE_A: PASS**  
**SAMPLE_B: PASS**  
**VSYNC_PRIMITIVES: PARTIAL**  
**DRAW_BATCHES: UNKNOWN**  
**CHARACTER_ATTRIBUTION: NOT_ATTEMPTED**  
**SECTION5: UNKNOWN**  
**0033: UNKNOWN**  
**PRIMARY_REMAINING_UNKNOWN: cómo delimitar batches GS completos y atribuirlos a un personaje**  
**NEXT_FORENSIC_EXPERIMENT: aplicar el ensamblador validado al primer paquete/segmento del VSync 0 y verificar discontinuidades contra EOP y cambios de estado**  
**PRODUCTION_CHANGES: 0**

## Proof

Sample A is a real `TRIANGLESTRIP` packet with 8 ordered XYZF2 vertices. The GS strip rule produces `max(8-2,0)=6` primitives. The CSV contains exactly 6, with alternating winding.

Sample B is an independent packet with 10 ordered XYZF2 vertices. The same rule produces `max(10-2,0)=8` primitives. The CSV contains exactly 8, with alternating winding.

No restart or discontinuity is observed inside either packet. Vertex order is deterministic and no vertex is duplicated by the assembly records. Raw GS coordinates are preserved; no renderer scaling is applied.

## Scope boundary

The proof establishes conversion of these XYZF2 submissions into actual triangle-strip primitive records. It does not establish that either packet is character geometry, does not establish complete-body coverage, and does not prove Section5 or `0x0033` routing. The continuous VSync ledger remains deferred because batch boundaries and state transitions require the next conservative step.

