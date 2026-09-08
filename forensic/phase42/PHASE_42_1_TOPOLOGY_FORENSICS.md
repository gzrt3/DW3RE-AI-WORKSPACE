# PHASE 42.1 — TOPOLOGY FORENSIC RECOVERY

## Resultado

`TOPOLOGY_FORENSICS: PASS` para Resource 1670 Section 0 Part 12.

La secuencia observada es una máquina de eventos, no una tríada fija. `0x0027` añade un vértice pendiente; `0x002E` actualiza el descriptor de submesh; `0x002F` actualiza UV; `0x0033` dispara la emisión del estado acumulado. En Part 12 hay dos grupos de 11 registros `0x0027`, cada uno asociado ordinalmente con su grupo de 11 triggers `0x0033`. Cada grupo se convierte en un triangle strip de 11 vértices: `11 - 2 = 9` triángulos.

Los triggers preparatorios inmediatamente anteriores al primer vértice de cada grupo forman parte de la misma ventana de emisión. La separación entre ventanas se detecta por el salto de comandos, no por ResourceID ni por PartID.

## Oracle

| Métrica | Esperado | Observado |
|---|---:|---:|
| Vertex records | 33 | 33 |
| Submitted vertices | 22 | 22 |
| Strips | 2 | 2 |
| Triangles | 18 | 18 |
| Triangles/strip | 9, 9 | 9, 9 |

## Semántica

- `0x0033`: trigger de emisión de triangle strip; el handler documentado es `0x001303E0`.
- `0x002E`: descriptor de submesh/estado de strip; no contiene índices finales.
- `0x002F`: UV asociada al vertex index.
- `0x0030`: variante de control de strip usada por paquetes corporales; el byte ADC exacto queda pendiente de una confirmación nativa independiente.
- Winding: se conserva el orden alternante de triangle strip: `(i,i+1,i+2)` y `(i+1,i,i+2)`.

## Validación cruzada

La misma máquina reconoce las ventanas de geometría de Parts 8/6/2 en 1622/1626/1630 sin ramas por ResourceID. La cifra de triángulos de esos assets queda como métrica de cobertura, no como oracle histórico equivalente a Part 12.

## Unknowns restantes

1. La rutina nativa exacta que convierte el descriptor `0x002E` en estado interno no está recuperada desde instrucciones MIPS nuevas.
2. El significado completo del byte ADC en `0x0030` no está demostrado por una captura GIF/VIF directa.
3. La relación exacta entre los dos primeros triggers de la segunda ventana y el puntero VU1 sólo está documentada por correlación de bytes y conteos.

Estos unknowns no impiden la reconstrucción genérica de strips validada contra Part 12.
