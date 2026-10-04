# Línea Base de Procedencia y Binarios

Fecha: 2026-09-28  
Alcance: hitos 1 y 2; solo lectura sobre `sources/Isos`, `sources/dumps` y `sources/Code`.  
Inspector reproducible: [`tools/provenance_binary_baseline.ps1`](tools/provenance_binary_baseline.ps1).  
Ledger íntegro de hashes, cabeceras de 256 bytes, ELF y cruces ISO: [`evidence/provenance-binary-baseline.json`](evidence/provenance-binary-baseline.json).

## Resultado ejecutivo

- Hash completo de los tres ejecutables principales, los tres `SYSTEM.CNF` y los 34 módulos IOP (31 `.IRX` y 3 `IOPRP*.IMG`). Hash de prefijo de 4 MiB para ISOs y BNS grandes; hash completo para los BNS menores y los cinco `.TM2`.
- Se compararon por ruta y tamaño los miembros seleccionados y sus hashes contra el contenido ubicado en cada ISO: **60/60 coinciden** (21 DW3, 20 DW3XL, 19 versión japonesa); 46 comparaciones cubren el archivo completo y 14 los primeros 4 MiB.
- Las tres ISOs PS2 tienen tabla ISO9660 legible, y su tamaño coincide exactamente con `volume_blocks * 2048`. El ISO Xbox conserva tamaño, hash de prefijo y campos PVD, pero su PVD no presenta un registro raíz ISO9660 válido para este lector; no hay grupo Xbox extraído con el cual contrastarlo.
- Los ELF son ELF32 little-endian, `e_machine=8 (MIPS)`, `e_entry=0x00100008`. Se conservaron tablas de programa y sección en el JSON. No hay nombres de símbolos utilizables: `.symtab` y `.strtab` están vacías.
- Las tablas de recursos de DW3 y DW3XL se mapearon desde `PT_LOAD` y pasaron todas las comprobaciones de tamaño, límites, orden y continuidad sectorial.

## ISOs

Hash SHA-256 de los primeros 4.194.304 bytes; no se calculó hash completo de las imágenes grandes.

| Imagen | Bytes exactos | Volumen ISO (bloques) | Entradas de archivo | SHA-256 prefijo |
|---|---:|---:|---|---|
| `Dynasty Warriors 3 (USA).iso` | 2.262.433.792 | 1.104.704 | 64 | `903cc26677341c91fea61aca9dbac56860bf192d5d9781066ff6ed0a7405440e` |
| `Dynasty Warriors 3 - Xtreme Legends (USA).iso` | 3.145.170.944 | 1.535.728 | 116 | `6c3a2cf44cd4cc886214592c526da1bbd5e3c5018e387c97e9f7192835ceb1ef` |
| `Shin Sangokumusou 2 (Japan).iso` | 1.819.082.752 | 888.224 | 45 | `638ab24719bd989f4d0265e3cf1b163df84acd6068e19ba289193b3a71163c64` |
| `Dynasty Warriors 3 Xbox (USA).iso` | 1.921.318.912 | 938.144 | PVD sin raíz ISO9660 válida | `7d89dc3573e4325f1e316ded513a510f150bff0834bcb00f4ac3a5a22afa34bc` |

`bytes / 2048` concuerda con los bloques declarados por el PVD en las cuatro imágenes. El ISO Xbox no se clasificó como ausente o corrupto: únicamente queda fuera de la comparación de miembros porque el lector ISO9660 no pudo recorrer su raíz.

## Hashes de ejecutables y arranque

SHA-256 completo, reproducido también con `Get-FileHash` para contrastar el hash del ejecutable base.

| Grupo | Ejecutable | Bytes | SHA-256 completo | `SYSTEM.CNF` / `BOOT2` |
|---|---|---:|---|---|
| DW3 USA | `SLUS_202.77` | 2.513.712 | `b5a2fb3c32ce7468160e3845b64babc4ace0d6cb7650f4d940083c6841c1f5d1` | `cdrom0:\SLUS_202.77;1` |
| DW3XL USA | `SLUS_206.17` | 1.905.272 | `d26695fa7769cabbddbd89168924279cd1035eeb0bdd3744aec95257f7cfa731` | `cdrom0:\SLUS_206.17;1` |
| Shin Sangokumusou 2 JP | `SLPM_650.53` | 2.447.408 | `6a16ec44628dd08099bb4c9eeb7f20c4754f189ac43d6148e1d67b71dabc73f5` | `cdrom0:\SLPM_650.53;1` |

Los tres `SYSTEM.CNF` miden 57 bytes. Sus SHA-256 completos son, en el mismo orden: `671b046323edc72e4ec93d965673301c1f2a87ea7990470ea09f8cfd1de43362`, `9812ea90bddbbf0ffe077b11467ef78bbbbd5778210aa8565bcc57d402a9a9e9` y `f32c636935654ec0e4d741aecf63fb296cdb43b90beada4009c7f4c66c2e9bbf`.

Todos los hashes completos de los 34 módulos, hashes de los 15 BNS y cinco TM2, tamaños exactos, ámbitos de hash y resultado individual de cada cruce están en el ledger JSON vinculado arriba. No se trunca ningún SHA-256 en ese registro.

### Discrepancia de identidad histórica

`sources/Code/DW3RE_FORENSIC_PROVENANCE.json` declara para una entrada externa `SLUS_202.77` el tamaño 2.513.712 y hash `0e1edac59fdb854ad665bd37e44b11bc7c4c6211f34eefdafae84db4011a547d`. El ejecutable actual del dump tiene el mismo tamaño pero hash `b5a2…`; `Get-FileHash` lo confirmó independientemente. A la vez, el hash completo del miembro `SLUS_202.77` dentro de `Dynasty Warriors 3 (USA).iso` coincide con el dump actual. Por tanto, el dump actual está corroborado por esa ISO, pero no es el mismo contenido que la ruta histórica externa declarada. No se atribuye causa a la diferencia; mantener esas dos identidades separadas hasta verificar el original externo.

El hash completo del `SLUS_206.17` actual coincide con la afirmación histórica `d26695fa…` y con el miembro del ISO DW3XL.

## Cabeceras ELF y mapa de carga

| ELF | Bytes | `e_entry` | `e_flags` | Program headers | Section headers | `e_shoff` |
|---|---:|---|---|---:|---:|---:|
| DW3 `SLUS_202.77` | 2.513.712 | `0x00100008` | `0x20924000` | 2 | 8 | `0x002659F0` |
| DW3XL `SLUS_206.17` | 1.905.272 | `0x00100008` | `0x20924000` | 7 | 13 | `0x001D1070` |
| JP `SLPM_650.53` | 2.447.408 | `0x00100008` | `0x20924000` | 2 | 8 | `0x002556F0` |

Cada fila siguiente es `PT_LOAD`; direcciones/offsets/file size/mem size son del ELF sin reinterpretar los segmentos de tamaño cero.

| ELF | `p_vaddr` | `p_offset` | `p_filesz` | `p_memsz` | Flags | `p_align` |
|---|---|---|---:|---:|---|---|
| DW3 | `0x00100000` | `0x00000080` | `0x265900` | `0x532C00` | RWX | `0x80` |
| DW3 | `0x00632C00` | `0x00265980` | `0x0` | `0x0` | RW | `0x10` |
| DW3XL | `0x00100000` | `0x00000800` | `0x1D0580` | `0x4A6000` | RWX | `0x800` |
| DW3XL | `0x005A6000` | `0x001D1000` | `0x0` | `0x2D800` | RWX | `0x800` |
| DW3XL | `0x005A6000` | `0x001D1000` | `0x0` | `0x2A800` | RWX | `0x800` |
| DW3XL | `0x005A6000` | `0x001D1000` | `0x0` | `0x9000` | RWX | `0x800` |
| DW3XL | `0x005A6000` | `0x001D1000` | `0x0` | `0x1A000` | RWX | `0x800` |
| DW3XL | `0x005D3800` | `0x001D1000` | `0x0` | `0xA5800` | RWX | `0x800` |
| DW3XL | `0x01FF7000` | `0x001D1000` | `0x0` | `0x0` | RW | `0x10` |
| JP | `0x00100000` | `0x00000080` | `0x255600` | `0x4EB780` | RWX | `0x80` |
| JP | `0x005EB780` | `0x00255680` | `0x0` | `0x0` | RW | `0x10` |

Las tablas de secciones existen. Sin embargo, los ELF tienen `.symtab` y `.strtab` de tamaño cero; los segmentos de carga aparecen sin nombre y no proporcionan una separación simbólica útil `.text`/`.data`. Se conservan sus valores crudos, offsets y tamaños en el JSON; `e_flags` se reporta sin decodificar ABI adicional.

## Contraste de tabla de recursos y LINKDATA

El candidato DW3 `VA 0x002FF850` y el candidato XL `VA 0x00290CF0` se tradujeron a file offset usando los `PT_LOAD` file-backed reales, no una resta fija:

| Título | Tabla VA → offset ELF | Descriptores | Bytes BNS | Conteo de sectores válido | En límites | Pares contiguos / sin solape | Sector final exclusivo |
|---|---|---:|---:|---:|---:|---:|---:|
| DW3 | `0x002FF850 → 0x001FF8D0` | 2.123 | 293.441.536 | 2.123/2.123 | 2.123/2.123 | 2.122/2.122 | 143.282 |
| DW3XL | `0x00290CF0 → 0x001914F0` | 3.015 | 460.529.664 | 3.015/3.015 | 3.015/3.015 | 3.014/3.014 | 224.868 |

En ambas tablas, `sector_count == ceil(payload_size / 2048)`, cada rango de payload/sectores cae dentro del BNS, todas las entradas forman una secuencia continua desde LBN 0 hasta el sector final y los 2.123/3.015 campos `reserved` observados son cero. El tamaño de cada LINKDATA es exactamente el sector final por 2.048.

Primeros descriptores, little-endian (`id: sector_offset, sector_count, payload_size, reserved`):

| ID | DW3 | DW3XL |
|---:|---|---|
| 0 | `0, 68, 137280, 0` | `0, 68, 137280, 0` |
| 1 | `68, 34, 67648, 0` | `68, 34, 67648, 0` |
| 2 | `102, 173, 354096, 0` | `102, 173, 354096, 0` |
| 3 | `275, 56, 113448, 0` | `275, 54, 109752, 0` |
| 4 | `331, 5781, 11839488, 0` | `329, 6063, 12417024, 0` |

RID4 empieza en `331 * 2048 = 0xA5800` en DW3 y `329 * 2048 = 0xA4800` en DW3XL. Ambos prefijos empiezan `TIM2`; el descriptor 4 de ambos archivos cumple los límites del contenedor.

## Cabeceras BNS y TIM2

Se capturaron los primeros 256 bytes de los 15 `.BNS` y cinco `.TM2` en el JSON. Las firmas iniciales difieren entre familias: LINKDATA/LINKDAT2 empiezan `TIM2`; BGM empieza `00 08 00 00`; OPED empieza ASCII `COLL`; VOICE empieza `IECSsreV`; LINKOVL empieza `MWo3`. `.BNS` es una extensión, no una cabecera común. La tabla sectorial descrita arriba corresponde a LINKDATA/LINKDAT2, no se debe extrapolar a BGM/VOICE/OPED/LINKOVL.

En `.TM2` independientes, la cabecera global observada es de 16 bytes: `TIM2`, versión 4, formato 0, una imagen y ocho bytes reservados en cero. La cabecera de imagen empieza en `+0x10`, según la referencia `DW3RE_Tim2.cpp`. Muestras:

| Muestra | Tamaño archivo | Picture `total_size` | `total_size + 16` | Imagen / CLUT | Tipo | Dimensiones |
|---|---:|---:|---:|---|---:|---|
| `KANJI.TM2` | 327.872 | 327.856 | 327.872 | 327.680 / 128 | 4 | 1024 x 640 |
| `USA_FONT.TM2` | 32.896 | 32.880 | 32.896 | 32.768 / 64 | 4 | 256 x 256 |
| DW3 RID4 en LINKDATA | 11.839.488 | 287.792 | 287.808 | 286.720 / 1.024 | 5 | 640 x 448 |
| DW3XL RID4 en LINKDAT2 | 12.417.024 | 287.792 | 287.808 | 286.720 / 1.024 | 5 | 640 x 448 |

Las muestras confirman los supuestos de magic, cabecera de 16 bytes, picture header en `+0x10`, `header_size=48`, y `image_type=5` para el caso PSMT8 de RID4; los TM2 independientes muestreados usan tipo 4. En cambio, el tamaño del primer picture de RID4 no consume el `payload_size` completo del descriptor. La discrepancia es empírica y sigue **sin explicar**; no asumir que un descriptor TIM2 siempre equivale a un único picture que ocupa todo el payload. El parseo de cabecera por sí solo no prueba el decodificador completo.

## Límites y siguiente decisión

- Los SHA-256 de ISO y BNS mayores son de prefijo, no hashes del archivo entero; sus tamaños exactos quedan registrados. Las verificaciones de miembros ISO sí comparan ese mismo rango dentro de la entrada y el dump.
- Se verificaron hashes completos para todos los ELF principales, SYSTEM.CNF y módulos críticos; no se hashearon completos los otros ~7 GB de assets/video de los dumps.
- La comparación ISO/dump cubre los 60 objetos críticos seleccionados, no certifica cada video, asset o archivo del árbol. Los conteos de entradas ISO y archivos por grupo coinciden (64, 116, 45), pero no sustituyen hashes de cada archivo restante.
- El hash base histórico externo difiere pese a que el dump actual coincide con la ISO; resolver qué original externo respalda el informe histórico antes de unir ambas ramas de procedencia.
- En la fase de línea base no se escribió en `sources/Isos`, `sources/dumps`, `sources/Code` ni `C:\Fate Soldiers 3`. La Fase 4 posterior, autorizada, creó el bootstrap descrito en `PHASE4_BOOTSTRAP_AND_RESOURCE_INDEX.md`; los tres árboles `sources` permanecieron de solo lectura.

## Addendum de autoridad posterior

El usuario aprobó `b5a2fb3c32ce7468160e3845b64babc4ace0d6cb7650f4d940083c6841c1f5d1` como identidad autoritativa única de DW3 Base y descartó el hash externo `0e1edac...` como autoridad. La discrepancia medida persiste solo como antecedente histórico, no como bloqueo de procedencia. La decisión vigente y sus consecuencias constan en `DECISIONS.md` y `PHASE4_BOOTSTRAP_AND_RESOURCE_INDEX.md`.