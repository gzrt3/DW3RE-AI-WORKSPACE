# Decisiones

## DEC-20261004-PROGRESS — ACTIVE
Decision: Mantener barra visible basada en hitos verificados y usar Computer Use
donde esté disponible, según instrucción humana posterior. Conservar historia.
Reason: El usuario solicita visibilidad de avance y uso de Computer Use.
Evidence: knowledge/evidence/setupheap-progress-20261004.md.
Consequences: No convertir conteo de fases en porcentaje del trabajo total;
no acreditar entrega por compilación o pruebas sintéticas; respetar denegaciones.

## DEC-0001 — ACTIVE
Decision: C:\DW3 es la fuente de verdad; toda la memoria se guarda en knowledge.
Reason: Confirmación expresa del usuario de la raíz y el alcance de escritura.
Evidence: knowledge/evidence/user-requirements.md (transcripción resumida de la instrucción).
Consequences: No rutas D:, servicios externos ni copias del proyecto. El destino del producto es solo contexto histórico, no un destino de escritura en esta tarea.

## DEC-0002 — ACTIVE
Decision: JSON UTF-8 versionado como representación canónica, Python estándar como interfaz y Markdown como entrada humana.
Reason: Portabilidad, inspección, versionado y recuperación sin servidor ni dependencia descargada.
Evidence: knowledge/evidence/user-requirements.md.
Consequences: La consulta puede leer un índice grande localmente, pero devuelve únicamente resultados limitados. No es una base de grafos transaccional ni un motor semántico vectorial. Las actualizaciones deben serializarse.

## DEC-0003 — ACTIVE
Decision: Separar evidencia, conocimiento y packs; usar estados explícitos y conservar procedencia.
Reason: Evitar convertir reportes históricos, heurísticas o código disperso en hechos binarios.
Evidence: planner-inventory.md; MILESTONES.md; knowledge/evidence/user-requirements.md.
Consequences: Esquemas/formatos del juego permanecen UNKNOWN o HYPOTHESIS hasta reproducir la evidencia. Las relaciones también tienen estado.

## DEC-0004 — ACTIVE
Decision: Indexar metadatos, calcular hashes únicamente bajo demanda, excluir la propia memoria y .git del índice de fuentes.
Reason: Evitar recursión de snapshots, lecturas masivas de contenido y hashing repetido.
Evidence: knowledge/evidence/user-requirements.md.
Consequences: Tamaño+mtime no detectan modificaciones que preserven ambos; para verificación crítica se debe recalcular SHA-256. El índice declara exclusiones y no certifica autenticidad de dumps.

## DEC-0005 — ACTIVE
Decision: No instalar un AGENTS.md en la raíz: el punto de entrada permanece en knowledge.
Reason: La memoria debe vivir exclusivamente en C:\DW3\knowledge.
Evidence: knowledge/evidence/user-requirements.md.
Consequences: Para sesiones nuevas, proporcionar PROJECT_STATE.md y knowledge/AGENTS.md como entrada. La carga automática desde la raíz no está garantizada y no se afirma que exista.

## DEC-0006 — ACTIVE
Decision: La identidad autoritativa de DW3 Base es el `SLUS_202.77` del dump actual, SHA-256 completo `b5a2fb3c32ce7468160e3845b64babc4ace0d6cb7650f4d940083c6841c1f5d1`; el hash histórico externo `0e1edac...` queda descartado como autoridad.
Reason: Confirmación expresa del usuario, corroborada por igualdad de hash completo entre dump y miembro del ISO DW3 USA.
Evidence: knowledge/PHASE4_BOOTSTRAP_AND_RESOURCE_INDEX.md; knowledge/evidence/provenance-binary-baseline.json.
Consequences: Nuevas herramientas DW3 deben verificar primero el tamaño 2.513.712 y el hash autoritativo anterior. El registro histórico externo se conserva solo para explicar su discrepancia, no como parent binario.

## DEC-0007 — ACTIVE
Decision: El bootstrap Fate Soldiers 3 se implementa clean-room en C++20/CMake usando exclusivamente la especificación binaria validada y entradas originales en solo lectura.
Reason: Aprobación de Fase 4 y prohibición expresa de copiar/adaptar fuentes de `sources/Code`.
Evidence: knowledge/PHASE4_BOOTSTRAP_AND_RESOURCE_INDEX.md.
Consequences: `fate_core` verifica procedencia, ELF32 MIPS, LINKDATA y cabeceras TIM2; la paridad de gameplay queda fuera de este hito.

## DEC-0008 — ACTIVE
Decision: Phase 8 cierra RUNTIME_COMPLETE / DECOMPRESSION_NOT_DEMONSTRATED según el plan aprobado; fuentes solo lectura y ninguna descompresión especulativa.
Reason: Se verificó el runtime nativo y el perfil acotado length16 de RID2, pero no existe evidencia independiente de un códec comprimido en el corpus seleccionado.
Evidence: knowledge/PHASE8_PLAN.md; knowledge/PHASE8_RUNTIME_AND_PAYLOADS.md; knowledge/evidence/phase8_verification.json.
Consequences: Informar PASS/FAIL/SKIP separados; Phase 7 permanece cerrada por decisión del usuario, sin atribuir paridad a su traza omitida. Los hashes precalculados se reutilizan como attestation explícita, con FULL_HASH optativo. Los formatos no demostrados siguen UNKNOWN.

## DEC-0009 — ACTIVE
Decision: Separar la estructura medida de transferencia TM3 de su semántica de paleta/material; mantener Phase11 abierta durante el handoff de investigación.
Reason: 328 payloads y 824 bloques secundarios se explican exactamente con VIF DIRECT/GIF y registros GS; eso no identifica por sí solo el banco elegido, el estado TEX0/CLUT o la pareja de recursos del personaje.
Evidence: knowledge/TM3_CHARACTER_ASSET_INTELLIGENCE.md; knowledge/evidence/tm3_intelligence_sparse_headers.json; knowledge/evidence/tm3_external_source_inventory.json.
Consequences: TM3 no se despacha al parser TIM2; layouts MOV/ATK de Burn-Engine siguen siendo candidatos DW2. No se copian implementaciones comunitarias ni se inicia una fase adicional.


## DEC-0010 — ACTIVE
Decision: Phase 14 combat rules are prototype tuning; do not label them Omega Force or DW3-parity facts.
Reason: The current runtime has no decoded MOT animation playback, named weapon-bone socket, battle traces, or verified damage/armor tables.
Evidence: knowledge/PHASE14_NATIVE_GAME_LOOP_DUAL_ISO.md; knowledge/evidence/phase14_native_game_verification.json.
Consequences: Keep combat parity UNKNOWN until source-backed timing, damage, hitbox, True Musou, officer hyper-armor, and flinch evidence is collected.

## DEC-0011 — ACTIVE
Decision: Mod overrides are read-only runtime inputs, searched before ISO resources; accepted PC asset formats for this increment are OBJ meshes and uncompressed 24/32-bit BMP textures.
Reason: This gives users a reversible loose-file injection path without rewriting retail ISO images or adding external codec dependencies.
Evidence: knowledge/MOD_LOADER_VFS.md; knowledge/evidence/mod_loader_verification_20260929.json.
Consequences: Keep PNG/compressed BMP unsupported until a decoder is added and tested. Native `.bin` overrides must still pass the existing format parser; path traversal and files exceeding read budgets are rejected.
## DEC-0012 — ACTIVE
Decision: Make the next architecture milestone a bounded retail boot path, beginning with ISO SYSTEM.CNF selection, verified ELF identity, PT_LOAD memory mapping, and e_entry validation; defer the execution architecture until a reference trace identifies the required compatibility surface.
Reason: The current native runtime parses ELF metadata for resource indexing but starts its own C++ game loop instead of executing DW3. OpenGOAL and Vandal Hearts show title-specific reconstruction plus platform replacements; the Sly PS2 project shows that matching decompilation is a major project by itself. A full PS2 emulator would be an unproven and much larger first step.
Evidence: knowledge/BOOT_FIRST_DIRECTION_AUDIT.md; knowledge/evidence/boot_first_direction_graph_update.json.
Consequences: Do not claim boot execution, playability, or game parity from ISO mounting, ELF parsing, or segment loading alone. Keep C:\DW3\sources read-only. Use PCSX2 as a reference oracle only while deciding between a minimal compatibility layer and a recompilation strategy.

## DEC-0013 — ACTIVE
Decision: A user-specified external reference file may be read as input-only evidence when the current request explicitly names it; archive the evidence and all generated outputs under C:\DW3\knowledge, and never write to or copy the project tree from its source drive.
Reason: The user explicitly supplied `D:\dw3 makefile (1).txt` for this Makefile audit while C:\DW3 remained the authoritative project root.
Evidence: knowledge/evidence/dw3_japanese_linkdata_makefile_reference.txt; knowledge/JAPANESE_LINKDATA_MAKEFILE_CROSSWALK.md.
Consequences: This is a narrow read-only exception for the named input, not a new workspace/root or permission to create output on D:.

## DEC-0014 — ACTIVE
Decision: Use CODEX_FINAL_HANDOFF.md and TODO.md as the current checkpoint handoff to Gemini/Antigravity/ChatGPT; preserve the 2026-09-29 baseline as historical verification. Generated static recompilation and archive creation are not retail boot, equivalence or game parity.
Reason: The 2026-10-02 workspace contains a changed CMake/host and partitioned generated corpus, disabled warnings-as-errors and no current CTest registration; code inspection identifies unconstructed runtime use and silent unsupported behavior.
Evidence: knowledge/CODEX_FINAL_HANDOFF.md; knowledge/evidence/codex_final_handoff_audit_20261002.json.
Consequences: Keep sources read-only; preserve history and legacy targets; validate build, loader/ABI, reached instructions/services, I/O and first frame/menu through explicit checkpoints before expanding gameplay. A knowledge snapshot does not back up product source.

## DEC-0015 — ACTIVE
Decision: Freeze the current manifest baseline and stop instrumented execution at the first host runtime-lifetime violation, before eeCheckpointDue; keep host link/loader/ABI-runtime NOT_CLOSED and defer menu.
Reason: Eleven ELF-derived instructions agree for the baseline host seed, then generated code requires an unconstructed PS2Runtime whose measured size also exceeds the raw buffer. No reference PS2 kernel handoff was measured; the isolated diagnostic is not the complete host or a PS2 execution trace.
Evidence: knowledge/BOOT_CHAIN_FIRST_DIVERGENCE.md; knowledge/evidence/boot_chain_20261002/baseline.json; knowledge/evidence/boot_chain_20261002/results.json; knowledge/evidence/boot_chain_20261002/sealed2_debug_run/divergence.json.
Consequences: Preserve original main/HLE/entry and history; do not bypass or implement a fake runtime to advance boot. Strict Debug/Release diagnostic tests certify detection only. A later authorized repair/reference capture must verify the same ELF identity and initial guest state before claiming functional equivalence.

## DEC-0016 — ACTIVE
Decision: Apply the user-authorized object-lifetime correction with owning runtime memory/context and validate its real constructor/checkpoint/destructor in isolation; keep full host link and PS2 handoff open.
Reason: The constructor alone leaves EE RAM unallocated; HLE duplicates class methods, and the suggested loop-exit assertion contradicts the verified store/compare/delay-slot order. Actual exit is v0=01FF7010, v1=01FF7000, at=0.
Evidence: knowledge/RUNTIME_LIFETIME_CORRECTION.md; knowledge/evidence/runtime_lifetime_20261002/results.json.
Consequences: Main no longer uses fake storage; historical baseline is preserved. Do not equate object compilation or 3 passing scoped tests with full host linking/retail behavior. Resolve class-method ownership without forced linker selection and obtain PS2 reference before advancing beyond the authorized handoff boundary.

## DEC-0017 — ACTIVE
Decision: Exclude legacy HLE class definitions from the principal target, connect existing real-runtime libraries and replace 29 pending free HLE entry points with diagnostic exceptions. Provide a read-only GDB guest-EE capture command with provenance checks and immutable outputs.
Reason: Removing the entire file without accounting for its free symbols loses needed interfaces; an ordinary host GDB or assumed Qt command syntax cannot supply an EE register snapshot.
Evidence: knowledge/PCSX2_HANDOFF_CAPTURE.md; knowledge/evidence/handoff_capture_20261002/results.json.
Consequences: No forced linker selection or silent success remains in the replacement file. Keep the full host link and actual reference capture pending; preserve missing upper GPR bits and never mark parity VERIFIED from transport tests or a single endpoint.


## 2026-10-04 — Native debugger and semaphore correction
Supported Sky Computer Use operated actual PCSX2 EE debugger. Saved same-boot evidence, not browser display, determines IDs0/1 and pool256/LIFO. Keep full parity open. Rebuild dependent corpus after scheduler header change; one active build. Two missing game syscall override handlers001ad550/001ad518 require original-opcode reconstruction, not constant-return shortcuts. Evidence in native-computer-use-20261004 and project BOOT_CONTINUATIONS addendum.

2026-10-04: usar EeScheduler::run conservando seed/reset actual; manual dispatch no procesa eventos y diagnostic007 queda en BSS00100018. No atribuir timeout a overrides que no alcanzo. Stop estricto para PCs faltantes, nunca transformar parada en paridad.

2026-10-04: accept CreateThread priority0 only after same-boot retail ID2 and kernel priority halfwords0/0. Keep other priority-range and ChangeThreadPriority limits unchanged pending evidence; no invented thread IDs. Kernel38/38 Debug/Release.

2026-10-04: Numeric SIF79/7a route existing map implementation; remove unsupported automatic readiness20000 at reset/ExitCmd. Do not advance polling by forced ready bit. Reference PCSX2 syscall table/hwReset; map/return ABI remains provisional, actual IOP/HLE producer still required. See evidence/sif-register-routing-20261004.json.

2026-10-04T19:43:05.061976+00:00: Standalone host explicitly starts ROM SIFCMD after EE memory/scheduler init. Readiness comes from scheduled InitCmd with owned buffers and a pending real event100 wait; this policy is not retail ROM parity. Evidence sif-bootstrap-20261004.json.
