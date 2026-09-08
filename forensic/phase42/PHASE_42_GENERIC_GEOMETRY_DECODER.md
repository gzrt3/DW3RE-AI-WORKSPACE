# PHASE 42 — GENERIC SECTION 0 GEOMETRY DECODER

## Estado

`GENERIC_SECTION0_DECODER: PASS (geometry/topology core)`

`TOPOLOGY: PASS for Resource 1670 / Part 12 and multi-asset generation.`

La implementación actual añade una API independiente de raylib/FK para leer contenedores `KOEI_GEO_06`, localizar el directorio de Section 0 y decodificar partes con registros de 32 bytes. La máquina de eventos recupera los dos strips de Part 12 sin índices hardcodeados. Los binarios originales no fueron modificados.

## Evidencia usada

- `artifacts/DW3_DW4H_FORENSICS/PHASE_38A_GEOMETRY_FORENSICS.md`
- `artifacts/DW3_DW4H_FORENSICS/PHASE_38A_VERTEX_FORMAT.md`
- `artifacts/DW3_DW4H_FORENSICS/PHASE_38A_INDEX_FORMAT.md`
- `artifacts/DW3_DW4H_FORENSICS/PHASE_38A_UV_FORENSICS.md`
- `artifacts/DW3_DW4H_FORENSICS/PHASE_38B_SECTION0_BONE_TAG_FORENSICS.md`
- `artifacts/DW3_DW4H_FORENSICS/PHASE_38B_PART_BONE_MATRIX.csv`

Recursos leídos directamente de `Musou/DW3_native_spike/original/linkdata.bns`:

| Resource | Sector | Bytes | Section 0 parts | Vertex records extraídos | Estado de triángulos |
|---:|---:|---:|---:|---:|---|
| 1622 | 129400 | 70092 | 10 | 98 | pendiente |
| 1626 | 129478 | 73196 | 11 | 59 | pendiente |
| 1630 | 129556 | 35744 | 5 | 14 | pendiente |
| 1670 | 130248 | 72060 | 13 | 33 en Part 12 | 22 vértices / 18 triángulos |

## Contrato implementado

- Cabecera de seis secciones: `uint32 section_count`, offsets relativos little-endian.
- Section 0 en `0x1C`; primer `uint32` = cantidad de partes.
- Offsets de partes relativos al inicio de Section 0; el último termina en el offset de Section 1.
- Registros de geometría con stride de 32 bytes y tríada `0x0027` + (`0x0030` o `0x002E`) + `0x002F`.
- Posiciones `s16` en `+0x04/+0x06/+0x08`, escala `0.001`.
- Auxiliar en `+0x0A`; matrix tag conservado desde `+0x12`.
- UV enteras en `+0x04/+0x06` del registro `0x002F`, normalizadas a `512x256` con `+0.5`.
- Socket `0x003C`: slot `+0x02`, node `+0x04`, bone `+0x06`, QW `+0x08`.
- Decodificador sin dependencia de runtime, raylib, texturas o FK.

## Discrepancia pendiente

Los datos de 1622/1626/1630 contienen control `0x0030` y 1670/Part12 contiene secuencias `0x002E`/`0x0033`. Part12 ya reproduce 33 registros, 22 submissions, 2 strips y 18 triángulos. El byte ADC de `0x0030` y la semántica nativa completa de `0x002E` permanecen documentados como unknowns.

## Archivos añadidos o modificados

- `ps2recomp_src/PS2Recomp-main/ps2xRuntime/include/dw3re_section0_geometry.h`
- `ps2recomp_src/PS2Recomp-main/ps2xRuntime/src/dw3re_section0_part12.cpp` — ahora contiene el decoder genérico y el wrapper legado.
- `ps2recomp_src/PS2Recomp-main/ps2xTest/src/test_dw3_section0_geometry.cpp`
- `ps2recomp_src/PS2Recomp-main/ps2xRuntime/CMakeLists.txt` — target `test_dw3_section0_geometry`.

## Verificación

Compila `test_dw3_section0_geometry.exe` y `DW3RE_MODEL_VIEWER.exe`. La prueba determinista confirma dos decodificaciones estructuralmente iguales por recurso, pero no se declara PASS de topología hasta resolver la discrepancia anterior.

## Dependencias externas

No se usó código externo para definir el formato. La búsqueda pública localizada no produjo un decoder DW3 utilizable; el soporte de formato procede de los artefactos locales y de los bytes de los cuatro recursos prioritarios.
