# Memoria operativa de DW3

Fuente de verdad: `C:\DW3`. Todo el sistema de memoria reside en esta carpeta. No sustituye los originales ni verifica por sí solo conclusiones de ingeniería inversa.

## Representación

- `FILES_INDEX.json`: metadatos de archivos fuente, clasificación, estado de cambio y hash opcional. No cargar íntegro en un prompt.
- `ENTITIES.json`: nodos con IDs estables, tipo, nombre, resumen, estado, etiquetas y evidencia.
- `RELATIONSHIPS.json`: aristas dirigidas con IDs, source, target, type, status y evidencia.
- `FINDINGS.json`: conclusiones/preguntas indexables, con los mismos estados y evidencia que los nodos.
- `PROJECT_STATE.md`: entrada compacta y estado actual. `DECISIONS.md`: decisiones y razones persistentes.
- `graph/`: esquemas y contrato de datos. `entities/`: espacio para fichas detalladas solo cuando hagan falta, no duplicación automática del grafo.
- `evidence/`: requisitos, mediciones y pruebas reproducibles; cada conclusión técnica debe apuntar también a su original cuando exista.
- `indexes/`: informes auxiliares de cobertura/cambio. `context-packs/`: selecciones acotadas, regenerables. `snapshots/`: copias de la memoria, nunca del proyecto fuente.
- `kg.py`, `CLI.md`, `tests/`: implementación, comandos y verificación.

## Evidencia

Usar rutas relativas a C:\DW3. Una evidencia admite SHA-256, offset, address, function, command, script, output, experiment, date y agent cuando sean conocidos. No inventar valores. Para binarios grandes puede omitirse hash en el índice inicial; eso no acredita identidad. SHA-256 de un reporte prueba su contenido, no la verdad de sus afirmaciones.

FACT = observación con evidencia; HYPOTHESIS = propuesta pendiente; DERIVED = inferencia explícita; IMPLEMENTED = artefacto existente; REJECTED = hipótesis refutada; UNKNOWN = información faltante. Registrar contradicciones como nodos/relaciones y no sobreescribir silenciosamente la historia: snapshot antes de revisión sustantiva.

Una función debe identificar ejecutable/hash y dirección; una estructura debe incluir offset/stride y accesos que la sostengan. Una extracción debe registrar origen, script/versión, parámetros y hash de salida. Estos datos pueden adjuntarse sin convertir esquemas desconocidos en hechos.

## Eficiencia y frescura

La consulta usa JSON persistido: no vuelve a recorrer sources. La recuperación es léxica y por relaciones, no comprensión automática de todos los archivos. Introducir sinónimos útiles en tags (por ejemplo animaciones/animation). Los límites del pack controlan salida al modelo, no garantizan un número exacto de tokens.

El índice inicial solo enumera metadatos. Una actualización explícita vuelve a enumerar las rutas de su alcance para detectar altas, cambios y bajas; no es un watcher. Las consultas reflejan la última actualización. La validación de evidencia accede solo a rutas enlazadas y, si hay hash, verifica contenido: no es un escaneo general.

Builds, caches, dependencias, logs y artefactos de análisis históricos no constituyen conocimiento validado. Su clasificación es heurística y necesita revisión si se quiere incluir un archivo relevante. Las exclusiones se documentan; no se borra nada.

## Operación

Leer primero PROJECT_STATE y AGENTS; consultar CLI para sintaxis exacta. Actualizar hallazgos después de trabajo verificado y crear snapshots en hitos. Serializar escritores: no ejecutar dos comandos de mutación simultáneos ni editar JSON mientras otro agente lo actualiza. Los archivos se escriben atómicamente de forma individual; un snapshot conserva un punto recuperable.

Ver `evidence/verification.json` para la prueba ejecutada de consulta sin recorrer el árbol, conteos y tiempos. No confundir tiempos locales con costes facturados de modelos.
