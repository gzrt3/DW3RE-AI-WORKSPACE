# Uso de la memoria

Python 3.12+, biblioteca estándar. Todo permanece en C:\DW3\knowledge.

## Consultar primero

```powershell
python C:\DW3\knowledge\kg.py query "animaciones DW3" --limit 12 --chars 12000
python C:\DW3\knowledge\kg.py pack "Investiga cómo se cargan las animaciones de DW3" --output animaciones-dw3.json --limit 12 --chars 12000
python C:\DW3\knowledge\kg.py validate
```

query/pack leen los cuatro JSON canónicos, sin abrir originales ni enumerar el árbol. Priorizan nodos y relaciones de un salto; búsqueda léxica con normalización de acentos y algunos sinónimos. Los límites pueden omitir resultados. La fecha del índice aparece en el pack; regenerarlo tras cambios. --include-noise permite incluir archivos clasificados como ruido.

## Índice incremental

```powershell
python C:\DW3\knowledge\kg.py init
python C:\DW3\knowledge\kg.py index
python C:\DW3\knowledge\kg.py index --scope sources/dumps/dw3_ps2
python C:\DW3\knowledge\kg.py index --scope planner-inventory.md --hash planner-inventory.md
```

index enumera metadatos; --scope limita a un archivo/subárbol. No ejecutarlo por cada prompt. Los hashes solo se calculan con --hash (ruta relativa raíz dentro del alcance). Los existentes se reutilizan si tamaño/mtime no cambian; si cambian, se invalida el hash. Un cambio que preserve ambos metadatos requiere rehash explícito.

NEW/MODIFIED/REMOVED/UNCHANGED describen el alcance actualizado respecto al índice anterior. REMOVED conserva historia. Un fallo de acceso aborta sin reemplazar el índice previo. last_full_scan_at distingue un barrido completo de uno parcial.

Se indexan también metadatos de builds, dependencias y artefactos históricos, pero se filtran en consultas por defecto. Se excluyen knowledge, .git, symlinks/junctions; se declara cobertura. La clasificación es heurística. No se deduplican contenidos ni se lee todo el código.

## Registrar hallazgos

Payload dentro de knowledge:

```json
{"schema_version":1,"entities":[],"relationships":[],"findings":[{"id":"finding:identificador-estable","type":"finding","name":"Pregunta concreta","summary":"Información pendiente de investigar","status":"UNKNOWN","tags":["tema"],"evidence":[]}]}
```

```powershell
python C:\DW3\knowledge\kg.py add C:\DW3\knowledge\mi-hallazgo.json
python C:\DW3\knowledge\kg.py add --replace C:\DW3\knowledge\mi-hallazgo.json
python C:\DW3\knowledge\kg.py validate
python C:\DW3\knowledge\kg.py snapshot
```

--replace actualiza IDs del mismo grupo, nunca promueve estados automáticamente. Tomar snapshot antes de cambios de criterio. Estados: FACT/HYPOTHESIS/DERIVED/IMPLEMENTED/REJECTED/UNKNOWN. FACT, DERIVED e IMPLEMENTED requieren evidencia. Cada evidencia incluye path relativo a C:\DW3; puede incluir sha256, offset, address, function, script, command, output, experiment, date, agent. Relaciones: source/target apuntan a IDs de entidades, hallazgos o archivos indexados.

validate comprueba estructura básica, estados, IDs, relaciones y existencia/frescura/hash de evidencia enlazada. No verifica la verdad de conclusiones ni recalcula hashes de todo el índice. graph/schema.json documenta el contrato JSON Schema para herramientas externas.

Un escritor a la vez. add guarda un journal antes de escribir. Si se interrumpe, consultas y validación se bloquean; recuperar con:

```powershell
python C:\DW3\knowledge\kg.py recover
python C:\DW3\knowledge\kg.py validate
```

recover revierte el add pendiente, conserva su journal en evidence y permite reintentar. No borrar simplemente el marcador de una operación incompleta.

## Snapshots y recuperación

snapshot copia datos, documentación, scripts, tests, esquemas, evidencia y packs bajo snapshots/<fecha-UTC>, con hashes en SNAPSHOT.json. Excluye snapshots anteriores, bytecode, temporales y enlaces. Nunca copia ISOs ni el proyecto.

Restauración: detener escritores; guardar snapshot actual si no hay journal pendiente (si existe, usar recover); verificar hashes del snapshot elegido; copiar sus archivos listados a las mismas rutas relativas dentro de knowledge. No borrar archivos adicionales automáticamente. Ejecutar validate y regenerar packs: la evidencia original puede haber cambiado. La prueba test_snapshot_is_restorable_and_excludes_prior_snapshots reproduce la restauración en una carpeta fixture.

## Pruebas

```powershell
python -m unittest discover -s C:\DW3\knowledge\tests -p test_*.py -v
python C:\DW3\knowledge\verify_memory.py
```

verify_memory.py bloquea APIs de escaneo y lecturas fuera de knowledge durante consultas y pack. Guarda métricas en evidence/verification.json. Ejecutar scripts no requiere API/modelo; el pack ocupa contexto al entregarlo a un agente.

--root se reserva a C:\DW3 y fixtures bajo knowledge/tests. Para otra sesión, comenzar leyendo PROJECT_STATE.md y AGENTS.md dentro de knowledge explícitamente.
