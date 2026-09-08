# PHASE 44B.14 — Final report

**PHASE_44B_14: PASS**  
**RAW_QWORD_DECODING: CONFIRMED**  
**GIF_TAG: CONFIRMED**  
**PRIM_BITFIELDS: CONFIRMED**  
**XYZF2_BITFIELDS: CONFIRMED**  
**PACKED_REGISTER_ORDER: CONFIRMED**  
**ENDIANNESS: CONFIRMED**  
**PRIMITIVE_ASSEMBLY: NOT_ATTEMPTED**  
**DRAW_BATCHES: NOT_ATTEMPTED**  
**CHARACTER_ATTRIBUTION: NOT_ATTEMPTED**  
**SECTION5: UNKNOWN**  
**0033: UNKNOWN**  
**PRIMARY_REMAINING_UNKNOWN: semántica de emisión/topología que convierte las submissions XYZF2 en primitivas y batches reales**  
**NEXT_FORENSIC_EXPERIMENT: validar un paquete que contenga una secuencia de vértices suficiente para una topología GS concreta, sin ensamblar todavía el stream completo**  
**PRODUCTION_CHANGES: 0**

## Answers

1. Sí, dos paquetes reales `PACKED` fueron decodificados desde qwords crudos.
2. Sí. Ambos consumen exactamente `1+NLOOP×NREG` qwords.
3. Sí. `PRIM` y `XYZF2` fueron extraídos de slots distintos de la misma secuencia `REGS`.
4. Sí. Las posiciones, qword indices y offsets están explicitados.
5. Sí para los bitfields del tag, PRIM y XYZF2 mostrados; no implica todavía semántica de draw.
6. Sí. Little-endian está resuelto.
7. Sí. El orden `0x12,0x04,0x00` se reproduce en ambos samples.
8. Sí, para implementar de forma segura la capa raw GIF/PACKED y la ejecución de registros; aún no para ensamblaje de primitivas.
9. Sí. El segundo sample fue validado independientemente.
10. Restan las reglas de ensamblaje GS y los límites de batches.

No se intentó ensamblar triángulos, clasificar personajes, probar Section5 ni atribuir `0x0033`. Corrección importante: `REGS=0x412` se decodifica por nibbles como `0x2,0x1,0x4` (`STQ,RGBA,XYZF2`); el PRIM procede del tag mediante `PRE=1`, no de un qword payload separado.
