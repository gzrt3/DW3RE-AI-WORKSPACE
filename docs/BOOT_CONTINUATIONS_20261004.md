# Continuaciones de arranque XL — 2026-10-04

## Actualización vigente después de integración y Computer Use

La build Release completa terminó. `native_boot_release_001` reprodujo la parada
en `0x001a4828` con salida 0 incorrecta. La reparación quedó integrada en main y
CMake; `native_boot_release_002` avanzó hasta `0x001ad6e0` y devuelve error explícito.

Computer Use nativo sí funciona mediante `@oai/sky`: se operó el depurador PCSX2
y se guardaron seis landmarks de una sola sesión en
`artifacts/lockstep_20261004/pcsx2_live_001`. Los semáforos retail devuelven 0 y 1;
sus globals al volver a `0x001ad6f8` son 0/1. El resultado host 1/2 documentado
abajo es histórico y constituye una divergencia, no el valor esperado vigente.

`sema_id_fix_001` conserva el kernel, fuentes anteriores y reparación del pool
de 256 IDs 0..255 con reutilización LIFO. Las 37 pruebas del kernel pasan en
Release y Debug (Debug definitivo: `contracts_run_Debug_002.log`). El primer
enlace Debug ocurrió antes de acabar su biblioteca y conserva 3 fallos obsoletos;
el relink posterior pasa. No construir consumidores mientras cambia su biblioteca.

`boot_continuations_002/opcode_evidence.json` identifica los retornos SetSyscall,
FindAddress y la restauración de SP que faltaban. Se añadieron continuaciones y
aliases de reanudación existentes; `entry_slice_005` terminó: contratos pasan
Debug/Release, registros y 32 MiB RAM iguales entre configuraciones, globals0/1.
Se detiene en `0x001ad660`, presente en catálogo completo pero fuera del slice.
Los handlers propios `0x001ad550` (búsqueda) y `0x001ad518` (copia) no aparecen
en el catálogo completo; el override devuelve -1 cuando no puede despacharlos.
Ésta es la siguiente brecha medida, no una prueba de búsqueda correcta.

Build Release nueva terminó: sesión59660, log
`artifacts/lockstep_20261004/native_build_Release_003.log`. El scheduler está detrás
de un unique_ptr y forward declaration en PS2Runtime, por lo que se reutilizó el
corpus; se recompilaron main/VFS/continuaciones y enlazó el runtime actual.
Probe nuevo en `native_boot_release_003`. No reutilizar el EXE anterior como
evidencia de los cambios actuales.

El helper de PCSX2 terminó su proceso propio al vencer los 900 segundos. Se
observó en GUI `0x001ad700`, pero su captura PINE llegó después del cierre y
falló; no existe snapshot completo de ese PC. No mezclar un nuevo boot con éste.

El VFS se reparó por separado: `vfs_repair_001` pasa 15/15 Debug y Release;
preserva identidades Base/XL y rechaza lecturas inválidas sin modificar destino.
Todavía falta conexión real de CDVD y VFS combinado `/data/`.

## Resultado acotado

La prueba con traducciones originales llega a `0x001a4828`, sin entrada en el
catálogo completo. El ELF identificado y la RAM observada contienen `jr ra`
seguido de `nop`; el generador terminó la función tras el syscall `CreateSema`.
El llamador también carece del tramo `0x001ad4e4..0x001ad504`. Su retorno a
`0x001ad6f8` sí tiene un caso de reanudación en la función original, pero faltaba
su registro como PC despachable.

`src/boot_continuations.cpp` añade esas continuaciones sin reemplazar funciones
anteriores. Comprueba los 12 opcodes implicados antes de registrar cuatro PCs,
rechaza conflictos y conserva el syscall existente. Recupera el segundo
CreateSema, ambos stores, el RA guardado y el ajuste de SP del delay slot.

Con la reparación instalada en el diagnóstico, se alcanza `0x001ad5d8` y los
campos `0x00286288/0x0028628c` contienen los identificadores 1/2. Debug y Release
producen los mismos registros y RAM completa. Ese PC siguiente sí pertenece al
catálogo completo; el diagnóstico se detiene allí por su cobertura declarada.

No existe una traza retail posterior a la primera llamada en esta evidencia.
Esto verifica bytes y ejecución host acotada; no acredita boot, título o paridad.

## Evidencia

- `artifacts/lockstep_20261004/entry_slice_002`: antes, PC no registrado.
- `artifacts/lockstep_20261004/entry_slice_004`: después y contratos Debug/Release.
- `artifacts/lockstep_20261004/boot_continuations_evidence.json`: hashes, palabras
  originales con offsets ELF, registros y resultados de memoria.
- `artifacts/lockstep_20261004/native_boot_probe_tests.log`: 8 pruebas con
  procesos sintéticos para captura, timeout e integridad; no ejecutan el juego.
- `entry_slice_001` conserva un intento interrumpido del diagnóstico. Se corrigió
  el uso de `lookupFunction`, que devuelve un handler y no null si falta el PC.

Repetición: usar siempre salidas nuevas, sin reemplazar evidencias anteriores.

```powershell
python tools/native_entry_slice.py --boot-continuations --output artifacts/lockstep_20261004/entry_slice_NEXT
python tools/verify_boot_continuation_evidence.py --before artifacts/lockstep_20261004/entry_slice_002 --after artifacts/lockstep_20261004/entry_slice_NEXT --output artifacts/lockstep_20261004/boot_continuations_evidence_NEXT.json
```

## Integración pendiente tras la compilación activa

La reconstrucción completa Release iniciada antes de este cambio sigue activa
(sesión 64339, log `artifacts/lockstep_20261004/native_build_Release.log`). No
modificar sus fuentes/targets durante esa compilación ni iniciar otra copia.
Los nuevos archivos todavía no se enlazan a `fate_game`.

Después de terminar:

1. Preservar el resultado de la build y ejecutar `tools/native_boot_probe.py`
   contra ese binario, con salida exclusiva y timeout de 30 segundos. Confirmar
   su primera barrera real; no interpretar exit 0 como boot completo.
2. Añadir `src/boot_continuations.cpp` a fuentes de `fate_game`; incluir su header
   en main y llamar `fate::recomp::register_boot_continuations(*runtime)` después
   de cargar el ELF e inicializar el dispatcher. Mantener el try/catch de error.
   Registrarlo también en el build de comprobación del main si necesita enlace.
3. Convertir el caso de PC no mapeado en salida de error explícita (ahora main
   hace break y retorna 0). Recompilar host y enlazar reutilizando recomp core.
4. Repetir el probe y extender el slice a la próxima barrera según la evidencia.
   No importar estado retail para forzar coincidencia.

## Otras brechas comprobadas por lectura

- Main inicializa memoria/subsistemas pero no llama initialize/run del runtime
  ni crea SDLWindow. La presentación existente está en PS2Runtime::run; además
  ese método cambia estado de entrada, inicializa kernel y crea el hilo EE.
  Integrarlo exige verificar esos efectos y aplicar FTZ/DAZ al hilo que ejecuta
  EE. No basta con abrir una ventana para afirmar pantalla de título.
- Main usa VFSHook con un solo dump XL. DualIsoVfs histórico no está enlazado.
  VFSHook sustituye LINKDATA por LINKDAT2 y acepta lecturas cortas; esto no es
  una unión válida DW3+XL. Reutilizar identificación por versión y validar rangos
  al conectar /data/, en lugar de certificar la unión por nombres de archivo.

GAME_PARITY=NOT_COMPLETE. BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Siguiente reparación activa
Native probe003 terminó por timeout30s después de instalar ambos overrides, consistente con su falta de handlers. Se recuperaron los30 opcodes de001ad518..001ad58c en boot_syscall_handlers.cpp y se registraron con comprobación íntegra de opcodes. Tests de copia parcial y búsqueda incluyendo límite superior/delay movz añadidos. Verificación activa entry_slice_006 (no repetir). El registro16 entradas y CMake ya incluyen fuente nueva, pendiente de pruebas y relink.

Scheduler integración pendiente: overrides registrados válidos usan invokeCurrent y arrojan EeDispatcherTransfer, que su header exige capturar solo en EeScheduler::run. Main actual todavía despacha manualmente, y slice006 puede detenerse con transferencia de scheduler. Si aparece, integrar scheduler de ejecución conservando reset/entry actuales y estados de prueba; no transformar la transferencia en éxito o excepción desconocida.

Slice006: Debug contract PASS; host observer timed out60s without stop snapshot. Preserve interrupted.json, do not label invocation transfer proven. Release standalone contract build active; log contract_build_Release.log. Next investigate actual timeout with bounded diagnostics and scheduler integration before full relink. No slice rerun unchanged.

Release standalone contract de slice006 PASS (contract_Release.log). Ningún build continúa activo. Debug host timeout60s sigue pendiente; código nuevo todavía no enlazado al EXE. Próxima acción: diagnóstico con marcas de inicialización y dispatch, después scheduler integration con evidencia.


## Scheduler integration verified — 2026-10-04 14:17 UTC

Current evidence supersedes the earlier hypotheses about slice006. The new
instrumented manual diagnostic entry_slice_007 completed all initialization
stages, then repeated PC00100018 during BSS clearing and timed out60s. It did
not reach the newly registered syscall handlers. No invocation-transfer cause
is claimed for that timeout. Direct dispatch does not process scheduler events.

Main now executes EeScheduler::run with its existing ELF/register seed/reset
and scoped floating-point environment, plus strict missing-function Stop.
entry_slice_008 passes Debug/Release continuation contracts and stops001adbb0
(present in full catalog); complete RAM and register snapshot hashes agree.
The search override001ad550 executes through scheduler invocation completion.

Release build004 passed; native_boot_release_004 now exits explicit error at
001adb50 in about2.5s, preserving input hashes MATCH. This is the return of
the original syscall74 wrapper. next_wrapper_opcodes.json pins JR RA/NOP from
the original identified ELF at offsetsAE350/AE354. Repair this return next,
test all register lanes and delay state, then relink/probe with fresh output.
No title or first battle demonstrated; GAME_PARITY=NOT_COMPLETE.

Evidence: artifacts/lockstep_20261004/scheduler_integration_001.json,
entry_slice_007/run_Debug.log, entry_slice_008/summary.json,
native_build_Release_004.log, native_boot_release_004/result.json.
Native Computer Use enumerated real Windows apps; PCSX2 was not running in
this segment. No new retail capture or graphical gameplay verification.
No active build/diagnostic remains after these commands complete.


## Boot table continuation repair — 2026-10-04

Wrapper001adb50 restored from identified ELF JR RA/NOP; synthetic register/delay
contracts pass Debug/Release. Release build005/probe005 advances to001adbf8,
which is an existing switch/goto continuation of FUN001adbb0 missing from the
catalog. Registered nine original continuations, two wrapper returns001adb60/
001adba8 and stack-pop epilogue001adc7c. All29 candidate entries checked before
registration; original code retained. New verifier pins63 decoded instruction
identities across five original sources (not semantic parity certification).
Expanded slice009 continuation contracts pass Debug/Release. Full Release
build006/probe006 executes table setup and word-copy invocations, then stops
explicitly at missing syscall64 return001a4aa8. Both probes preserve input
hashes MATCH. No title or first battle demonstrated; GAME_PARITY=NOT_COMPLETE.

Next: recover001a4aa8 from pinned original bytes, test return and repeat fresh
native probe. Extend independent retail checkpoint beyond semaphore initializer
before certifying this later runtime behavior. Evidence: boot_table_repair_001,
table_setup_opcodes/table_source_identity, native_build_Release_005/006 and
native_boot_release_005/006. No cloud budget used; original assets unchanged.


## Truncated syscall wrappers recovered — 2026-10-04

tools/recover_syscall_returns.py inspects only catalogued translations against
the identified original ELF.63 exact four-word addiu-v1/syscall0/JR-RA/NOP
patterns found with only two instructions in translated source and no return
entry in full catalog. Manifest/source hashes retained in syscall_returns_001.
Generated immutable opcode list copied to include/fate/syscall_return_words.hpp;
all four words and entry conflicts checked before installing any continuation.
Six historical returns retained;57 additional JR/NOP returns registered.
All63 targets, branch/delay state and complete GPR128 banks pass Debug/Release.
Changed delay instruction and occupied entry reject installation before changes.

Release build007/probe007 completes table init and reaches001ad708. Three
original initializer switch continuations001ad708/710/718 pinned and installed.
Release build008/probe008 advances into FUN001a55f8, creates sema ID2, then
stops explicit error at missing resume001a5628. Input hashes MATCH for both.
No title/battle/parity demonstrated. Original assets/history preserved.

Next: register byte-verified internal resumes of FUN001a55f8 beginning001a5628,
inspect truncated epilogue001a56c4 and re-probe. Need independent retail trace
after semaphore initializer to certify later behavior; host progress is only
diagnostic. No owned build/diagnostic active. GAME_PARITY=NOT_COMPLETE.
Evidence: syscall_returns_001/verification.json, manifest.json, contracts;
native_build_Release_007/008 and native_boot_release_007/008/result.json.


## Thread startup translation recovery — 2026-10-04

Pinned56 decoded opcodes in FUN001a55f8 and original epilogue entry001a56b8.
Five missing switch resumes and JR-RA/addiu-SP epilogue001a56c4 registered
without replacing the existing entries. Slice010 contracts pass Debug/Release.
Full Release build009/probe009 confirms next missing original wrapper001a4620.

Recovered complete four-opcode syscall wrappers001a4620(CreateThread),
001a4640(StartThread),001a46b0(ChangeThreadPriority) from identified ELF;
all12 original words and six entry conflicts checked before installation.
src/boot_thread_syscalls.cpp preserves scheduler transfer/resume at JR address.
Slice011 Debug/Release contracts include null-parameter kernel rejection and
thread epilogue stack/delay/GPR128. Full Release build010/probe010 reaches
missing FUN001ad790 continuation001ad7a4; input hashes MATCH.

Important: boot did not successfully create/start the new thread. Its actual
parameters set priority0 at offset14; current scheduler rejects priorities<1,
and host takes original DeleteSema/error route. Capture independent retail
CreateThread parameters/result at001a4620/001a566c before deciding whether
priority handling or earlier state needs repair. Do not invent a thread ID or
change priority to force boot. No title/battle or later retail parity evidence.

Next: retail checkpoint to diagnose creation; independently pin/register
FUN001ad790 resumes starting001ad7a4. No owned build/diagnostic active after
slice011 completes. Evidence: thread_startup_verification_001.json,
thread_startup_source_identity_001.json, thread_wrapper_opcodes_001.json,
entry_slice_010/011 contracts and native_build/probe_Release_009/010.
GAME_PARITY=NOT_COMPLETE; original assets preserved; no cloud calls.


## Retail thread priority correction — 2026-10-04 14:52 UTC

Computer Use operated the actual EE debugger in isolated pcsx2_live_002.
Same-boot paused snapshots: entry00100008, CreateThread001a4620 and return001a566c.
Original P2S, full32MB RAM, GPR128 and launch/file hashes preserved. Descriptor
at01fffcd0: 0008ff90,001a5520,00370ac0,400,002d8170,0,0,0,0. Retail returnsID2.
Kernel table14d80 points80003c50; handler reads priority with LHU offset14,
stores both with SH; record1a518 (stride4c, ID2) has priorities0/0. Thus the
native priority0 rejection is a measured divergence, not an earlier-state guess.

EeScheduler::createThread now accepts0; other priority range limits and
ChangeThreadPriority unchanged. Kernel38/38 Debug/Release PASS, including the
exact captured descriptor, ID2, priority0 and dormant record. Other kernel
side effects/priority ranges remain unverified. No invented ID/guest writes.

Four original FUN001ad790 resumes and JR/SP30 epilogue001ad7f0 recovered,
65 source instruction identities checked (includes FUN001ad7f8), six explicit
words pinned. Slice013 contracts Debug/Release PASS; slice stops001adb48,
already in full catalog; complete RAM/register hashes agree. Slice012 preserved
failed compile from local variable shadowing; fixed without lowering /WX.

Full Release build011 PASS. Probe011 executes CreateThread/StartThread and
FUN001a5520, then stops explicit error at missing resume001ad810. Inputs MATCH.
This is diagnostic progression, not complete lockstep parity/title/battle.
Evidence: retail_thread_priority_record_001.json, interrupt_setup_verification_002,
thread_priority_fix_001/verification.json and host_verification.json,
entry_slice_013, native_build_Release_011.log, native_boot_release_011/result.json.

Next: pin/register FUN001ad7f8 switch resumes beginning001ad810 and epilogue
001ad89c (JR RA, addiuSP40), test/relink/probe. Then compare retail COP0 config
read/write results in FUN001ad790; current returned0 is not certified. Need
continuations for the new worker path if it next stops. No title/battle/full
content/save/parity verification. GAME_PARITY=NOT_COMPLETE. No cloud calls.
No native build/diagnostic active; isolated retail launch stopped via owned
session90258 Ctrl+C after capture. Preserve capture/config and original assets.

Capture cleanup correction: Ctrl+C of exec session90258 did not stop its Python/PCSX2 processes. Verified PID13288 executable and isolated pcsx2_live_002 command line, then stopped only that owned process. MSBuild23540 is nodeReuse idle helper, not active build. All saved evidence preserved.


## OSD transfer and interrupt patch continuations — 2026-10-04 15:00 UTC

Previous goal turn was PROGRESS: retail CreateThread observation changed kernel
implementation and verified next action. Current segment independently recovered
nine existing FUN001ad7f8 switch resumes and JR/SP40 epilogue001ad89c. Original
ELF41 opcode identities and11 explicit registration words pinned. Contracts
Debug/Release PASS in entry_slice_014 include zero/nonzero result paths, delay
slot arguments, saved low64 lanes with upper64 preservation and JR/SP40 return.
Slice remains diagnostic and stops001adb48 (in full catalog), identical hashes.

Saved retail kernel OSD syscall4a/4b routines8000d310/8000d260 derived from full
RAM capture pcsx2_live_002 create_thread_return. Masks1,6,8,10,1fe0,e000 plus
final SH transfer every bit. Neither routine sanitizes screen/version fields;
v0 is transferred unsigned high16, v1 retains destination high16 before finalSH;
a1/a2/a3/t0/t1/t2 have explicit clobbers. System.cpp now matches this transfer
and bounded/aligned guest access. Kernel39/39 Debug/Release PASS, including
full-bit roundtrip, return/clobber lanes and prior config2 regression.
First Debug test compile failed for reference passed instead of pointer; fixed
without lowering warnings; failed log preserved. Initial native OSD profile
still defaults to version1, while captured kernel raw223c0 is0. Do not certify
branch route until live OSD calls/default provenance are compared.

Full Release build012 PASS. Probe012 executes registered001ad810 and001ad89c,
then001ad718 tail into001acd20; stops explicitly at missing resume001acd50.
Inputs MATCH. Title/battle/main-loop/parity remain unverified, GAME_PARITY=NOT_COMPLETE.
No cloud calls or new GUI capture in this segment. No owned build/diagnostic active.

Next: recover FUN001acd20 switch resumes001acd50/68/70/78/84/90/a0/b0 and
truncated epilogue from identified original bytes; contract/relink/probe. In
parallel dependency sense, extend live retail at001ad790/001ad7a4/c8/d0/d8
and001ad810, same boot only, to align OSD initial raw/profile and route. Do not
force raw0 merely to exercise more code. Saved kernel SetSyscall800006c0
leavesv0 unchanged and clobbersa0/v1; current runtime forcesv0=0. New bounded
derivation set_syscall_kernel_pending_001.json preserves this unrepaired issue.

Evidence: interrupt_patch_opcodes/source_identity/verificaton_001.json,
osd_kernel_semantics_001.json, osd_repair_001/verification.json and
host_verification.json, entry_slice_014, native_build_Release_012.log and
native_boot_release_012/result.json. Originals/history retained.


## Syscall install loop recovered — 2026-10-04 15:06 UTC

Current goal turn PROGRESS: eight existing FUN001acd20 resumes registered;
original missing tail001acdb4 is BNEL, not an epilogue. Additive tail preserves
taken LW/annul, JAL001acd00 with s2 increment, final index3 call, low64 saved
register restoration, result store285f98 and JR/SP40. New entries001acd98,
001acdb4,001acdc4; explicit entry list70 plus63 historical wrappers.
22 pinned words matched identified ELF;37 original source instruction identities
verified. Original translations/assets remain unchanged; before/diffs saved.

entry_slice_015 contracts Debug/Release PASS: both branch paths, annul invalid
load, loop increment/limit, call delay arguments, result store, upper64 lane
preservation and stack/JR. Diagnostic stops001adb48 (present in full catalog);
Debug/Release memory/register hashes identical. No retail parity claim.

Full Release build013 PASS; probe013 executes loop and returns to startup,
then explicitly fails missing0010008c; inputs MATCH, no timeout. Kernel entry
lookup result ffffffff still needs reference comparison; initial OSD profile
uncertainty and SetSyscall74 scalar clobbers remain open. No title/battle.
GAME_PARITY=NOT_COMPLETE. No cloud work/new PCSX2 boot. Computer Use refreshed
actual windows and requested Task Manager state; no gameplay capture obtained.
No owned build/probe remains active.

Evidence: syscall_install_opcodes_001.json, syscall_install_source_identity_001.json,
syscall_install_repair_001/{source_verification,verification,host_verification}.json,
entry_slice_015, native_build_Release_013.log, native_boot_release_013/result.json.

Next: inspect original entry100008 truncation and recover0010008c startup
continuation from verified ELF, contract/relink/probe. Extend retail OSD
checkpoints001ad790/7a4/7c8/7d0/7d8/810 without memory/register writes. Investigate
GetEntryAddress/SetSyscall reference semantics before certifying kernel tables.
Title/native graphics, combined data VFS, first battle/full content/saves pending.


## Main startup continuation — 2026-10-04 15:14 UTC

Previous goal turn PROGRESS: syscall install loop recovered and full host reached
0010008c. Current goal turn PROGRESS: original entry switch resume0010008c
registered; additive startup tail00100094 and001000ac recovered. Ten pinned
words matched identified ELF and34 original source opcode identities verified.
EI follows existing translated policy (status|10000), not a new certification
of hardware interrupt behavior. LUI/ADDIU/LW argc and argv, JAL game157460,
exit J1adad0 with full low64 a0=v0 delay preserved. Original sources unchanged.

Slice016 contracts Debug/Release PASS: call argument delay, argc sign extension,
argv pointer, low64 writes/upper64 preservation, status OR and exit tail RA.
Reduced diagnostic stops001adb48 (present in full catalog), identical memory
and register hashes. It does not execute full boot. Full Release build014 PASS;
probe014 executes cache flush, startup tail and game157460 prologue; fails
explicitly at missing00157468, inputs MATCH, no timeout. No title/battle/parity.

Next recovered evidence: game_entry_pending_001 pins original157460..15749c
through first call. SQ saves s0..s6 GPR128, SD ra; clears working registers.
First callee198370 missing catalog, but original nine-instruction tail prepares
a0=a1=002ced80,a2=a3=002d0140 and J1966a0 (catalogued) with a3 delay.
game_init_arguments_pending_001 retains those words; game_entry_catalog_audit_001
checks six initial callees. 1c0430 also absent. Do not guess function boundaries
or rebuild full corpus to hide missing blocks. Recover bounded prologue and
constructor-list argument tail, test register128/call effects then relink/probe.

Initial OSD/default route, SetSyscall74 return/clobbers and GetEntryAddress
results still require retail comparison. Full native rendering, combined data
VFS/tables, first battle/content/saves/packaging remain unverified.
No cloud calls, no new retail capture; no owned build/probe active.
Evidence: startup_tail_opcodes_001/startup_source_identity_001.json,
startup_tail_repair_001/{source_verification,verification,host_verification}.json,
entry_slice_016, native_build_Release_014.log and native_boot_release_014/result.json.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Game prologue and initializer argument tail — 2026-10-04

Previous goal turn PROGRESS: startup tail tested/relinked; host reached157468.
Current goal turn PROGRESS: additive game prologue157468..15749c and
initializer argument tail198370..198390 recovered from23 verified original
words. Seven SQ stores preserve full128-bit saved registers; clears low64
of s6/s5/s4/s3/s2/s0 while leaving s1 unchanged, original call delay clears s0.
Caller SP and saved RA slot untouched. JAL198370 setsRA1574a0; tail prepares
a0=a1=002ced80, a2=a3=002d0140 and J1966a0 without changingRA.
Explicit registration list75 plus63 recovered syscall wrappers. No originals
modified; before/diffs and SHA-256 evidence retained.

entry_slice_017 contracts Debug/Release PASS: all seven SQ stores full128,
upper64 preservation, low64 clear selection, frame bounds, arguments/RA/delay.
Reduced diagnostic stops001adb48 (in full catalog), hashes identical. Full
Release build015 PASS; probe015 executes recovered blocks and original
equal-range constructor branch, stops explicitly at missing001966ec. Inputs
MATCH, no timeout, no title/battle or retail state equivalence.

Next: original constructor tail1966ec LQ s1,10(sp);1966f0 LQ s0,0(sp);
1966f4 JR RA;1966f8 ADDIU SP30. Existing translation restores RA at1966e8.
Four pinned words retained in constructor_return_pending_001 (following words
are separate evidence, not part of the proposed tail).18 original constructor
source opcode identities verified. Register tail and test full128 LQ + latched
JR/SP; include original empty/nonempty list behavior then relink/probe.
Return1574a0 starts five sequential JAL/NOP calls; bounded pending bytes in
game_subsystem_calls_pending_001, not implemented. Do not stub real callees.

Progress text had mixed UTF8 mojibake; repaired labels from known intended
Spanish wording, preserved before/progress.json. No acceptance state changed.
Initial OSD, SetSyscall74 and GetEntryAddress retail semantics remain open.
Native title/graphics, combined VFS data/game tables, battle/content/saves and
standalone acceptance remain pending. GAME_PARITY=NOT_COMPLETE.
No cloud work/new retail capture; no owned build/probe active.
Evidence: game_prologue_repair_001/{source_verification,registered_word_verification,
verification,host_verification}.json, entry_slice_017, native_build_Release_015.log,
native_boot_release_015/result.json, constructor_source_identity_001.json.


## Constructor restore and game subsystem calls — 2026-10-04

Previous goal turn PROGRESS: prologue/arguments verified; full host stops1966ec.
Current goal turn PROGRESS: recovered LQ128 s1/s0, JR RA/SP30 delay tail1966ec
and five original JAL/NOP calls1574a0/a8/b0/b8/c0. Explicit entry list81 plus63
syscall wrapper returns.14 original words verified; three subsystem source
files193 opcode identities verified. Original translations/assets untouched.

First Debug compile failed: READ128 needs named runtime parameter. Corrected
without reducing warning policy; original failed log preserved. entry_slice_018
contracts Debug/Release PASS in *_002 logs: original empty range restore full128,
nonempty range yields at actual missing JALR target; five call targets and
RA/NOP register effects. Added original1966a0 to slice, unchanged RAM/register
observations still stop001adb48 (in full catalog). Repaired source provenance
in constructor_repair_001/source_after_compile_fix.json supersedes initial
generated slice provenance for boot_continuations.cpp; historical logs retained.

Full Release016 build PASS; probe016 traverses1966ec->1574a0->1582e0->17fea0
->1bffe0->23f570 then explicit missing0023f580. Inputs MATCH, no timeout.
No title/battle/retail parity. GAME_PARITY=NOT_COMPLETE.

Next: original23f580 JR RA, delay23f584 LW v0,0(v0). Tail must latch RA and
perform signed32 load, preserving upper64; do not return table address instead
of handler. Saved constructor_repair_001/table_lookup_tail_pending.json.
Then recover1bffe0 resumes1bfffc/1c0008/1c0038 and epilogue from verified ELF
as execution demands; existing initialization sources validated193 identities.
Future1582e0 switch resumes audited (23), not registered blindly.
Initial OSD, SetSyscall74 and GetEntryAddress retail uncertainty persists.
Native graphics/title, combined data VFS/tables, battle/content/saves and
standalone acceptance remain pending. No cloud/new retail capture or active
owned build/probe. Evidence: constructor_repair_001/{source_verification,
registered_word_verification,verification,host_verification}.json, entry_slice_018
*_002 logs, native_build_Release_016.log, native_boot_release_016/result.json.


## Table lookup return and heap caller resumes — 2026-10-04

Previous goal turn PROGRESS: full host016 reached23f580. Current PROGRESS:
original JR RA/LW v0 delay recovered; signed32 loaded value preserves upper64
and RA latched before load. Three existing1bffe0 resumes1bfffc/1c0008/1c0038
registered; explicit list85 plus63 syscall returns. Original sources unchanged.
Five registered words verified,28 original source identities checked.
entry_slice_019 contracts Debug/Release PASS: signed load values0/positive/
negative/ffffffff, GPR128, second lookup result store/call, final call delay.
Original1bffe0 added to slice. Reduced stop remains001adb48 (full catalog),
same RAM/register hashes. Full Release build017 PASS; probe017 traverses two
table lookups,1c0008->239928->23a770->WaitSema then missing23a788. Inputs MATCH.

Observed host allocation request s1=ffffeff0 must be investigated, not clamped
or replaced with success. Original arithmetic and table entries may explain
this path; independent retail checkpoint required before certifying it.
Next inspect FUN23a770 resume23a788 and original tail, restore/test semaphore
lock continuation; compare original table2d0140 index1/2 and request formula.
Full heap-building1c0040..1c00d8 bytes retained in table_lookup_repair_001/
heap_tail_pending.json; truncation is not epilogue. Allocator239964 return
bytes saved in allocation_return_pending.json. Avoid guessed memory stores.

No title/battle/full content/save/standalone parity. Initial OSD, SetSyscall74
and GetEntryAddress semantics remain open. No cloud calls/new retail capture
or active owned build/probe. Evidence: table_lookup_repair_001/{opcodes,
verification,host_verification}.json, table_lookup_sources_identity_001.json,
entry_slice_019, native_build_Release_017.log, native_boot_release_017/result.json.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Semaphore lock continuations and original heap request - 2026-10-04

Previous goal turn PROGRESS: full Release017 stops23a788. Current PROGRESS:
registered original23a770 switch resumes23a788/23a7c0 and additive JR/SP20
return23a7e4. Explicit list88 plus63 syscall returns. Four registered words
verified;31 lock words recovered,67 original source identities checked.
Original translations/assets unchanged; before/diffs/hashes preserved.
entry_slice_020 Debug/Release contracts PASS: reentrant counter including wrap,
signed32 result/upper lanes, owner mismatch waits at actual target with LW
delay, resumes ownership update, LD low64 restores and latched JR/SP delay.
Original hard-coded request formula separately checked against ELF and tested:
a0=01ff7000, v1=02001000, request=ffffeff0 (-4112). Original table at2d0140:
00100000,005a6000,005d3800. Table values are stored separately; do not enter
this formula. No clamp or forced success. Reference behavior/code modifications
and allocator response remain unverified. See heap_request_audit.json.
Reduced slice stops001adb48, in full catalog; Debug/Release RAM/register hashes
identical. Full Release018 build PASS; probe018 traverses23a788->WaitSema1a4860
->23a7c0->23a7e4 then explicit missing23994c. Inputs MATCH, no timeout.

Next: recover/register FUN239928 resumes23994c/239958 and original return239964
from allocation_return_pending.json. Test actual call arguments, original s1
result/LD/JR/SP; then follow real allocator239c20, no fabricated response.
Heap building1c0040 remains pending real code, not epilogue. Reference OSD,
SetSyscall74/GetEntryAddress, negative request and full boot parity remain open.
No title/battle/combined full data/content/saves/standalone acceptance.
No cloud calls/new retail captures or active owned build/probe.
Evidence: semaphore_lock_repair_001/{opcodes,source_verification,
registered_word_verification,verification,host_verification,heap_request_audit}.json,
entry_slice_020, native_build_Release_018.log, native_boot_release_018/result.json.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Allocation wrapper resumes/return - 2026-10-04

Previous goal turn PROGRESS: full Release018 stops23994c. Current PROGRESS:
registered original FUN239928 resumes23994c/239958 and recovered239964 tail:
v0=s1 low64 before LD s0/s1/RA restores, latched JR and SP20 delay.
Explicit list91 plus63 syscall returns; eight registered words checked against
identified original ELF,462 original opcode identities verified. Originals unchanged.
entry_slice_021 Debug/Release contracts PASS: signed LW allocator state pointer,
full low64 negative request a1, actual allocator/unlock targets/RA/delay,
result captured to s1 before unlock, return0/ffffffffffffffff/full64, upper lanes,
stack unchanged and unrelated GPR128 preserved. Reduced diagnostic still stops
001adb48 (full catalog), identical Debug/Release RAM/register hashes.
Full Release019 build PASS; probe019 enters239c20, aligns original request to
fffff000 and executes original reentrant23a770 lock, then stops explicit missing
239c64. Inputs MATCH, no timeout; no forced allocation or fabricated success.

Next: register/test original239c20 resume239c64, follow allocator real branches
for observed negative size. Tail23a324..23a344 and unlock JR/SP23a834..23a838
pinned in allocation_wrapper_repair_001 pending JSON; following23a348 begins
another routine, do not merge into epilogue. Preserve original behavior and
investigate against retail; do not clamp or patch size literals just to advance.
Heap building1c0040, initial OSD, SetSyscall74/GetEntryAddress parity remain open.
No title/battle/combined full data/content/saves/standalone acceptance.
No cloud calls/new retail captures or active owned build/probe.
Evidence: allocation_wrapper_repair_001/{source_verification,
registered_word_verification,verification,host_verification}.json,
entry_slice_021, native_build_Release_019.log, native_boot_release_019/result.json.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Allocator resume and native return tails - 2026-10-04

Previous goal turn PROGRESS: full Release019 stops239c64. Current PROGRESS:
registered original allocator239c64 resume, recovered23a324 payload pointer/
LD s0..s4/RA/JR/SP30 tail and nested-unlock23a834 JR/SP10 tail. Explicit94
entries plus63 syscall returns. Twelve registered words verified;464 original
source identities checked. Original translations/assets unchanged.
Initial diagnostic022 link failed LNK2019 missing original SignalSema wrapper;
added unchanged FUN1a4840 to slice dependency, preserved failure. Diagnostic023
Debug/Release contracts PASS: actual small-bin free-list unlink and in-use bit,
payload pointer signed32 wrap, all saved low64/upper64, nested unlock counter/
owner/LD RA/JR delay. Reduced observation still stops001adb48 (full catalog),
identical Debug/Release RAM/register hashes.
Full Release020 build PASS; probe020 advances239c64->2399c8->23c3f8->1a4f20
->SetupHeap1a4800/1a4808, then explicit missing1a4f78. Inputs MATCH, no timeout.
This is allocator growth, not successful allocation: second SetupHeap call
has a0=a1=fffff010 and native v0=01ff8000. Do not certify/rewrite this as success;
reference behavior and current heap policy need investigation. Negative request
and alignedfffff000 preserved. Real allocator return tails tested synthetically
but not reached by this boot path yet.

Next: inspect/register FUN1a4f20 resume1a4f78 and original JR/SP40 tail1a4fc4;
heap_growth_resume_pending.json pinned original words. Verify second SetupHeap
request behavior against runtime/reference before declaring growth correct.
Next wrapper23c420/23c428 and2399c8 resumes require original code, no stubs.
Heap building1c0040, OSD, SetSyscall74/GetEntryAddress parity remain open.
No title/battle/full combined content/saves/standalone acceptance or cloud calls.
No active owned build/probe or new retail capture. Evidence: allocator_resume_repair_001/
{source_verification,registered_word_verification,verification,host_verification}.json,
entry_slice_022 failure preserved, entry_slice_023, native_build_Release_020.log,
native_boot_release_020/result.json. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Heap-growth wrapper resumes/return - 2026-10-04

Previous goal turn PROGRESS: full Release020 stops1a4f78. Current PROGRESS:
registered original FUN1a4f20 resumes1a4f48/1a4f78/1a4f8c and JR/SP40 return
1a4fc4. Explicit98 entries plus63 syscall returns. Five registered words verified;
39 original source identities checked. Original translations/assets unchanged.
Existing SetupHeap policy checked against captured kernel words: every signed
negative a1 returns current thread initial stack. No policy modification.
The original wrapper compares limit with desired break and permits shrinking;
this return is not allocator success. Second-call retail state remains unverified.
entry_slice_024 Debug/Release contracts PASS: shrink stores new break and returns
old, prior interrupt bit restored, LD low64/upper64 preserved, JR/SP40; limit
failure invokes actual errno provider, errno12/failure return, DI loop resume.
Reduced slice stops001adb48 (full catalog), same RAM/register hashes.
Full Release021 build PASS; probe021 traverses1a4f78->1a4fc4 then missing23c420.
Inputs MATCH, no timeout. Observed v0=01ff7000 old break and Status10001 restored.

Next: register FUN23c3f8 resume23c420 and recover original body truncated23c428.
Pinned sbrk_wrapper_pending.json includes following words; determine real end
and branch behavior, do not mistake truncation for epilogue. Original2399c8
resumes and return still pending. Negative allocation reference remains open,
no clamp/forced allocation. Heap building1c0040, OSD, SetSyscall74/GetEntryAddress
and EI parity remain open. No title/battle/full combined data/content/saves or
standalone acceptance. No cloud calls/new retail captures or active build/probe.
Evidence: heap_growth_repair_001/{source_verification,registered_word_verification,
setupheap_policy_audit,verification,host_verification}.json, entry_slice_024,
native_build_Release_021.log, native_boot_release_021/result.json.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Sbrk wrapper resume and conditional errno tail - 2026-10-04

Previous goal turn PROGRESS: full Release021 stops23c420. Current PROGRESS:
registered original FUN23c3f8 resume23c420 and recovered23c428..23c44c tail.
BNEL success executes LD s0 delay and skips errno read. Failure annuls that
restore to retain errno destination; second BNEL stores only nonzero signedLW
errno then restores s0/s1/RA low64, JR/SP20. Explicit100 entries plus63 syscall
returns. Twelve registered words verified,12 original source identities checked.
Original translations/assets unchanged; before/diffs and exclusive reports kept.
entry_slice_025 Debug/Release contracts PASS:0/positive/full64 result preserved,
success skips invalid errno source/destination, failure copies12/negative/ffffffff,
zero errno annuls invalid destination write, upper64 preserved and JR/SP delay.
Reduced stop001adb48 (full catalog), same Debug/Release RAM/register hashes.
Full Release022 build PASS; probe022 returns23c420->23c428->239a6c, explicit
missing239a6c. Inputs MATCH, no timeout, v0=a0=01ff7000 retained old break.

Next: original FUN2399c8 resume239a6c; audit existing switch resumes239b24/239bbc,
recover original JR/SP60 return239c18. Test allocator growth branch operations
against identified opcodes and real metadata, no fabricated allocation. Next
negative size/reference uncertainty remains, no clamp/forced success. Heap
building1c0040, OSD, SetSyscall74/GetEntryAddress and EI parity open. No title,
battle/full combined data/content/saves/standalone acceptance or cloud calls.
No active owned build/probe/new retail capture. Evidence: sbrk_wrapper_repair_001/
{source_verification,registered_word_verification,verification,host_verification}.json,
entry_slice_025, native_build_Release_022.log, native_boot_release_022/result.json.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Allocator growth resumes and catalog conflict repair - 2026-10-04

Previous goal turn PROGRESS: full Release022 stops239a6c. Current PROGRESS:
original FUN2399c8 resumes239a6c/239b24 and additive JR/SP60 return239c18.
Initial proposal also registered239bbc, conflicting with existing catalog entry;
full build023 PASS but probe023 refused registration. Preserved failed report.
Removed duplicate, verified original entry239bbc and entry239bf0 (25 opcode
identities) and added both unchanged to diagnostic. Explicit list103 plus63
syscall returns. Five pinned words verified,148 growth source identities checked.
Original sources/assets unchanged. Initial entry_slice_026 tests passed but
missed full catalog conflict; corrected entry_slice_027 Debug/Release PASS:
failed call branches/delay effects, ten LD low64/upper64 restores, JR/SP60,
actual catalogued conditional SD maxima and original restore entry. Reduced
observation unchanged001adb48/full catalog, same Debug/Release RAM/reg hashes.
Full Release024 build PASS; probe024 traverses239a6c->second23c3f8/1a4f20
->239b24->239c18 and returns to real allocator, missing23a1d8. Inputs MATCH,
no timeout. Negative request still preserved, independent retail parity pending.

Next: inspect FUN239c20 resume23a1d8, original metadata and branch paths, register
only addresses absent full dispatcher. Audit all planned addresses against full
catalog before testing slices to avoid repeat conflict. Other allocator resumes
239d50/239f78/23a010/23a040/23a050/23a060/23a0e0/23a138/23a240 remain pending
as execution demands. Heap building1c0040, OSD, SetSyscall74/GetEntryAddress and
EI/reference negative allocation remain open. No title/battle/full combined
content/saves/standalone acceptance. No cloud calls/new retail captures/active
owned build/probe. Evidence: allocator_growth_repair_001/{source_verification,
catalog_entry_verification,registered_word_verification,verification_after_catalog_fix,
host_verification}.json, entry_slice_026/027, native_build_Release_023/024.log,
native_boot_release_023/024/result.json. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Allocator post-growth resume and failure restore - 2026-10-04

Previous goal turn PROGRESS: full Release024 stops23a1d8. Current PROGRESS:
registered original239c20 resumes23a1d8/23a240 and restore-only23a328 entry.
Existing recovered allocator_return now forms s0+8 only at23a324; failure
entry23a328 preserves v0=0. Explicit106 entries plus63 syscall returns.
Four words verified; full catalog preflight confirms new addresses absent.
Original sources/assets unchanged. entry_slice_028 Debug/Release contracts PASS:
insufficient top chunk calls actual unlock with correct argument, signed64
negative difference, metadata unchanged;23a240 branch delay zero; restore-only
entry preserves failure0 and all saved low64/upper64/JR/SP. Existing success
return pointer tests still pass. Reduced observation001adb48/full catalog,
identical Debug/Release hashes.
Full Release025 build PASS; probe025 advances23a1d8->unlock->23a324(success
return, not zero failure)->239958->unlock->239964->1c0038->239980 then lock,
missing2399a4. Inputs MATCH, no timeout. Native result pointer1ff7010 observed;
negative allocation request still needs retail/state parity investigation.
Do not infer that synthetic insufficient-chunk path was observed in full boot.

Next: inspect FUN239980 resume2399a4 and original tail; audit absent catalog,
recover arguments/call/return from identified ELF. Heap-building1c0040 still
pending, real metadata stores required. Retail negative allocation, OSD,
SetSyscall74/GetEntryAddress/EI parity open. No title/battle/full combined
content/saves/standalone acceptance. No cloud/new retail capture/active build.
Evidence: allocator_failure_repair_001/{catalog_preflight,
registered_word_verification,verification,host_verification}.json,
entry_slice_028, native_build_Release_025.log, native_boot_release_025/result.json.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Free wrapper resumes reach original allocator free - 2026-10-04

Previous verified full Release025 stopped2399a4. Registered existing original
FUN239980 resumes2399a4/2399b0, no new tail nor edits to original translations.
Explicit108 entries plus63 syscall returns. Both entry words pinned; full catalog
absence verified. Original wrapper18 opcode identities verified; next allocator
238b00 audit186 opcode identities verified. Before copies and diffs preserved.
entry_slice_029 Debug/Release contracts PASS: signedLW state, full64 pointer,
JAL/RA/delay lane preservation; original LDs/J/SP20 and actual nested unlock
count2->1, restored callerRA then unlock return1c0040. Reduced observation still
001adb48 present full catalog, identical Debug/Release RAM/register hashes.
Full Release026 build PASS; bounded probe026 advances2399a4->238b00->nested lock
and explicitly stops missing238b24, input hashes MATCH, no timeout. Actual free
wrapper restore2399b0 has not run in full boot. Negative pointer1ff7010 remains;
no clamp, forced success, stubs or retail-parity claim.
Computer Use listed current windows; Task Manager requested capture showed a
different application, rejected as evidence; no GUI input or retail capture.

Next: inspect/register original238b24 resume after identified words/catalog
preflight, test actual metadata coalescing and restore/unlock paths. Other switch
resumes238bb0/238d90 only as execution demands; source null tail truncates at
238dec and must recover original JR/SP if required. Heap-building1c0040 remains
real stores pending; negative allocation retail, OSD, SetSyscall74/GetEntryAddress
and EI parity open. No title/battle/full combined content/saves/standalone
acceptance. No active build/probe/cloud. Evidence: free_wrapper_repair_001/
{source_verification,registered_word_verification,catalog_preflight,verification,
host_verification,allocator_source_audit,next_allocator_audit,
computer_use_observation}.json, entry_slice_029, native_build_Release_026.log,
native_boot_release_026/result.json. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Original free allocator resume reaches heap trim - 2026-10-04

Prior turn PROGRESS: Release026 stopped238b24. Current PROGRESS: registered
original FUN238b00 resume238b24 only (explicit109 plus63 syscall returns).
Preflight rejected proposed238bb0 alias: existing entry238bb0 reused unchanged,
6 identities checked; source238b00 has186 pinned identities. Rejection occurred
before edits; accidentally started unchanged diagnostic030 was stopped by verified
owned process tree, report preserved. Source originals unchanged; before/diffs
saved. entry_slice_031 Debug PASS; initial Release180s build timed out at link,
verified no remaining build process, incremental resume300s PASS, Release
contracts PASS. Top coalescing flags/size, threshold trim target/sign-extended
argument, original catalog LD/J/SP20 restore with actual nested unlock2->1 all
pass. Simulated return to238bb0 tests only tail, not trim semantics. Reduced
observer001adb48/full catalog, identical Debug/Release RAM/register hashes.
Full Release027 PASS; probe027 follows238b24->238df8->nested lock and explicitly
stops238e28, inputs MATCH, no timeout. Actual trim argument0 and a2fffff001,
not the synthetic fixture's positive chunk. Negative allocator retail uncertainty
remains; no clamp/forced success/stub. Actual free tail not yet reached.
Pinned original null return238dec JR/238df0 SP20 stored pending, not implemented.

Next: original FUN238df8 resume238e28, inspect size/rounding/trim branches against
identified ELF, catalog preflight and contract tests. Remaining resumes238e74,
238ea0,238ec0,238f08 and restore beyond source truncation only as required.
Heap-building1c0040 real metadata stores still pending; OSD/SetSyscall74,
GetEntryAddress/EI and negative request retail parity remain open. No title,
battle/full combined content/save/standalone acceptance. No active build/probe,
cloud/new retail captures. Evidence free_allocator_repair_001/{catalog_preflight,
registered_word_verification,source_verification,catalog_entry_verification,
verification,host_verification,preflight_rejection,null_return_pending,
verification_scope}.json, entry_slice_030/031, native_build_Release_027.log,
native_boot_release_027/result.json. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Heap trim resumes, rounding and restore tail - 2026-10-04

Prior goal turn PROGRESS: Release027 stops238e28. Added original FUN238df8
resumes238e28/238e74/238f08 and identified return238f40/238f44..238f60.
Success238f40 sets1; failure238f44 preserves0; five LDs/RA/JR/SP30 restore.
Explicit114 plus63 syscall returns;12 words pinned/catalog absent;80 original
source identities verified. Original translations/assets unchanged.
Diagnostic032 compile failed missing runtime parameter name for READ64 and
original constant C4310. Named runtime; diagnostic source-only wd4310 now mirrors
existing main CMake policy. Failed evidence preserved. Diagnostic033 initial
Debug contract failed expecting unlocked state while original23a7f0 unregistered
in reduced table. Corrected fixture checks transfer then calls original unlock;
no runtime patch/stub. Fixed Debug and Release contracts PASS: unsigned size/page
rounding60/2010/fffff000, query args, mismatch unlock, matching signed decrement,
failure0/success1, five LD/RA lane preservation and JR/SP delay. Reduced observer
001adb48/full catalog, identical Debug/Release RAM/register hashes.
Full Release028 PASS; probe028 reaches238e28->sbrk query->238e74->second sbrk,
explicit missing238ea0. Inputs MATCH, no timeout. Actual s0fffff000 low32 NEGU
becomespositive1000, old break1ff7000 returned. Synthetic positive fixtures do
not prove actual negative-path retail parity. Original behavior preserved.

Next: original resume238ea0 success branch and remaining238ec0 failure query;
pin/catalog preflight/test metadata and actual nested unlock. Source pending
trim_pending_audit.json preserved. Heap-building1c0040 real stores remain;
negative request retail/OSD/SetSyscall74/GetEntryAddress/EI parity open.
No title/battle/full combined content/saves/standalone acceptance. No active
build/probe/cloud/new captures. Evidence heap_trim_repair_001/{catalog_preflight,
registered_word_verification,source_verification,diagnostic_build_repair,
trim_pending_audit,verification,host_verification}.json, entry_slice_032/033,
native_build_Release_028.log,native_boot_release_028/result.json.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Heap trim result resumes return to heap initialization - 2026-10-04

Prior goal turn PROGRESS: Release028 stops238ea0. Registered original FUN238df8
resumes238ea0/238ec0, explicit116 plus63 syscall returns. Both opcode entries
verified/catalog absent;80 source identities verified; originals unchanged.
entry_slice_034 Debug/Release contracts PASS: successful top size/flag and
accounting subtract before unlock; failed decrement queries real sbrk with zero
argument and no premature metadata mutation; query delta8 preserves metadata,
delta40 stores delta|1 and break-minus-base accounting; actual nested unlock3->2.
These are synthetic isolated branches, not captured retail execution. Reduced
observer001adb48/full catalog, identical Debug/Release RAM/register hashes.
Full Release029 build PASS; probe029 actual success238ea0->unlock->238f40
->catalog238bb0->wrapper2399b0->SignalSema->1c0040, explicitly missing1c0040.
Inputs MATCH, no timeout. Actual free restore now reached, unlike previous tests.
Runtime negative allocation and full retail parity remain open; no guessed fix.

Next: implement identified original heap-building1c0040..1c00d8 from pinned
heap_tail_pending.json. Real metadata stores/global464a90/94/98/9c and size
464aa8/aac; not epilogue or stub. Test alignment, LW signed values, arithmetic,
stores/RA/JR/SP10, then full boot. Negative request retail/OSD/SetSyscall74,
GetEntryAddress/EI parity remain open. No title/battle/full combined content,
saves/standalone acceptance. No active build/probe/cloud/new captures.
Evidence heap_trim_result_repair_001/{catalog_preflight,
registered_word_verification,source_verification,verification,host_verification,
scope}.json,entry_slice_034,native_build_Release_029.log,
native_boot_release_029/result.json. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Original heap metadata builder returns to subsystem initializer - 2026-10-04

Prior goal turn PROGRESS: Release029 stops1c0040. Added39 original instructions
1c0040..1c00d8, all ELF words pinned, new address absent catalog. Explicit117
plus63 syscall returns. Original translations/assets unchanged. Real stores
base464a90, header464a94/98/9c, raw size464aa8 and capacity464aac; header0/4/8
zero,0xc capacity; original RA/JR/SP10. Initial contract incorrectly expected
464a9c span and v0base-header, independent operand review corrected fixture to
header address and raw size; implementation unchanged. Failed Debug evidence
preserved. entry_slice_035 fixed Debug/Release PASS: aligned680000 and unaligned
680123 bases, raw/capacity/header fields, neighbor sentinel preservation, low64
arithmetic, upper lanes, savedRA and JR/SP delay. Reduced observer001adb48/full
catalog and identical Debug/Release RAM/register hashes.
Full Release030 build PASS; probe030 executes builder then returns to17feb0,
explicit missing17feb0. Inputs MATCH, no timeout. Actual header01ff6ff0,
capacity01a50ff0, rawsize01a51000 from base5a6000 observed. Do not promote
negative allocator or kernel/retail parity from this host advance.

Next: original FUN17fea0 switch resume17feb0 (caller of heap initializer), inspect
function entries and real subsystem calls. Reuse already-catalogued entries
17feb8/17fed8/etc and register only absent addresses; pin/test return/call delay.
Negative request retail/OSD/SetSyscall74/GetEntryAddress/EI parity remain open.
No title/battle/full combined content/saves/standalone acceptance. No active
build/probe/cloud/new captures. Evidence heap_building_repair_001/
{catalog_preflight,registered_word_verification,semantic_review,verification,
host_verification}.json,entry_slice_035,native_build_Release_030.log,
native_boot_release_030/result.json. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Subsystem initializer resume reaches interrupt-state return - 2026-10-04

Prior turn PROGRESS: Release030 stops17feb0. Registered original FUN17fea0
resume17feb0, explicit118 plus63 syscall returns. JAL and zero-argument delay
words verified/catalog absent;131 original source identities verified. Original
sources/assets unchanged. entry_slice_036 Debug/Release contracts PASS: original
call1a7068, RA17feb8, zero low64 a0 preserving upper lanes, unchangedSP (no repeat
prologue), branch/delay state. Reduced observer001adb48/full catalog with same
Debug/Release RAM/register hashes. Full Release031 build PASS; probe031 runs
17feb0->1a7068->1ad460 and explicitly stops1a7080, inputs MATCH, no timeout.
Actual a0=v0=1 and v1=10000 after interrupt-state helper; retail EI/DI parity
remains open. This is host advancement, no title/battle/parity claim.

Next: source FUN1a7068 truncates after call, so decode original1a7080 continuation
using subsystem_pending_words.json and identified ELF; recover real operations,
call/return/metadata only from evidence. Catalog preflight before registration;
original17feb8 entry reused when reached. Negative allocation retail, OSD,
SetSyscall74/GetEntryAddress/EI parity remain open. No title/battle/full combined
content/saves/standalone acceptance. No active build/probe/cloud/new captures.
Evidence subsystem_init_repair_001/{catalog_preflight,registered_word_verification,
source_verification,verification,host_verification,subsystem_pending_words}.json,
entry_slice_036,native_build_Release_031.log,native_boot_release_031/result.json.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Subsystem init flag continuation reaches interrupt helper tail - 2026-10-04

Prior goal turn PROGRESS: Release031 stops1a7080. Recovered original14 words
1a7080..1a70b4 and registered1a7080/1a70b0. Explicit120 plus63 syscall returns.
First flag0 writes1 at285b70 in JAL delay then calls1ad4a8, next1a6998. Nonzero
flag restores RA/s2/s1/s0 low64 and tail-jumps1ad4a8 with SP40 delay. Words pinned,
catalog absence checked; originals unchanged. entry_slice_037 Debug/Release PASS:
first flag store/RA/delay, next original call, signedLW negative nonzero flag,
no flag rewrite, LD saved lanes and tail stack. Reduced observer001adb48/full
catalog, identical Debug/Release RAM/register hashes. Full Release032 PASS;
probe032 runs first-init1a7080->1ad4a8, explicitly stops1ad4b4, inputs MATCH,
no timeout. Next1a70b0 call tested synthetically only, not reached full boot.

Next: decode original helper continuation1ad4b4 from interrupt_restore_pending,
source1ad4a8 ends after Status mask. Preserve EI/reference uncertainty; no forced
interrupt state or skip. Then original1a70b0/1a6998 boot. Negative allocation
retail/OSD/SetSyscall74/GetEntryAddress/EI parity remain open. No title/battle,
full combined content/saves/standalone acceptance. No active build/probe/cloud.
Evidence subsystem_flag_repair_001/{catalog_preflight,registered_word_verification,
verification,host_verification,interrupt_restore_pending}.json,entry_slice_037,
native_build_Release_032.log,native_boot_release_032/result.json.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Interrupt helper original tail reaches subsystem table initialization - 2026-10-04

Prior turn PROGRESS: Release032 stops1ad4b4. Recovered3 original words
1ad4b4 EI,1ad4b8 JR ra,1ad4bc SLTU v0,zero,v0 delay. Registered1ad4b4,
explicit121 plus63 syscall returns; ELF words and catalog absence verified.
Uses existing runtime Status bit10000 convention; independent retail EI timing
and status parity remain open. Preserves RA/SP/high64, sampled low32 JR target,
unsigned low64 boolean in delay. Originals unchanged. entry_slice_038 Debug and
Release contracts PASS; reduced observer001adb48/full catalog, identical RAM
and register hashes. Full Release033 PASS; probe033 actual1ad4b4->1a70b0
->1a6998->1ad460 then explicit missing1a69b8, inputs MATCH, no timeout.

Next: implement original1a69b8 subsystem continuation from pinned
subsystem_next_pending.json and subsystem_next_review.json. ELF identity and
program-header offsets verified. First/repeated flag285b68 branches: repeated
LD frame + tail1ad4a8/SP60; first initializes uncached subsystem table pointers.
Decode further words before translating first path; no invented tables/stubs.
Negative allocation retail/OSD/SetSyscall74/GetEntryAddress/EI parity remain open.
No title/battle/full content/saves/standalone acceptance. No active build/probe
or cloud/new retail captures. Computer Use Task Manager screenshot again showed
other app, rejected as evidence; read-only calls, no inputs. Repaired corrupted
progress labels with prior file preserved; completion flags unchanged.
Evidence interrupt_helper_repair_001/{catalog_preflight,
registered_word_verification,verification,host_verification,
subsystem_next_pending,subsystem_next_review,computer_use_observation}.json,
entry_slice_038,native_build_Release_033.log,native_boot_release_033/result.json.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Original subsystem tables initialized before next system call - 2026-10-04

Prior goal turn PROGRESS: Release033 stops1a69b8. Added69 original words
1a69b8..1a6ac8, registered1a69b8 (explicit122 plus63 syscall returns). ELF
identity and program-header offsets verified, all runtime/fixture pins match.
First flag285b68=0 sets1 and initializes uncached aliases20371740/203717c0,
metadata371818, two32-iteration zeroing loops, callbacks1a6940/1a6920 and
original JAL1ad4a8 with store delay. Repeated nonzero flag restores saved low64
and tail1ad4a8 with SP60 delay. Original translations/assets unchanged.
entry_slice_039 Debug/Release PASS: full loops, boundary sentinels, pointers,
callbacks, flag signedLW, saved frame, high lanes, branch/delay and call target.
Reduced observer001adb48/full catalog hashes identical. Full Release034 PASS;
probe034 actual1a69b8 tables->1ad4a8->1ad4b4, explicit missing1a6acc, inputs
MATCH/no timeout. Actual callback fields and aliases match expected values.

Next: original1a6acc JAL1a4aa0 with a0zero delay, then1a6ad4 register/hardware
operations from subsystem_after_tables_pending.json.1a4aa0 already catalogued,
syscall100 semantics must be inspected before parity claims. Register only absent
continuations and test original control flow. Negative allocation retail/OSD/
SetSyscall74/GetEntryAddress/EI and full subsystem parity remain open. No title,
battle/full content/saves/packaging acceptance; GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. No active build/probe/cloud or new captures.
Evidence subsystem_tables_repair_001/{catalog_preflight,
registered_word_verification,pin_consistency,semantic_review,verification,
host_verification,subsystem_after_tables_pending}.json,entry_slice_039,
native_build_Release_034.log,native_boot_release_034/result.json.


## Subsystem cache and DMA continuation reaches handler return - 2026-10-04

Prior goal turn PROGRESS: Release034 stops1a6acc. Added23 original words
1a6acc..1a6b24, registered1a6acc/1a6ad4/1a6b14 (explicit125 plus63 returns).
ELF identity/program-header offsets and runtime/fixture pins verified. Original
FlushCache call100, D_STAT low5 conditional W1C, DMA5 CHCR busy branch,
sceSifSetDChain120 idle call and AddDmacHandler18 args5/1a6e90/zero delay.
Original translations/assets and runtime unchanged. Initial Debug contract
FAILED because readIORegister clears CHCR STR on read, making busy unreachable.
Failure/source preserved. Corrected contract records this existing limitation
explicitly; does not certify busy or pending-status branch. entry_slice_040
Debug/Release corrected contracts PASS, reduced observer001adb48/full catalog
hashes identical. Full Release035 PASS; probe035 actualFlushCache->idle chain
->AddDmacHandler return1, then missing1a6b28. Inputs MATCH/no timeout.

New concrete runtime gaps: SIF.cpp sceSifSetDChain returns0 without hardware
programming; ps2_memory.cpp readIORegister2364..66 clears STR on every CHCR read.
These are inherited behavior, not accepted parity or fixed here. Need original
kernel/headless/reference or documented device lifecycle before runtime repair.
Do not change branch or return values to hide gaps. Busy/status branches open.

Next original handler return1a6b28 stores returned handler ID371814 in delay
of EnableDmac5, then SIF register calls; pinned subsystem_handler_pending.json.
Recover original continuation and inspect kernel contracts. Negative allocation
retail/OSD/SetSyscall74/GetEntryAddress/EI/cache/SIF/DMA parity remain open.
No title/battle/full content/saves/packaging; GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. No active build/probe/cloud/new captures.
Evidence subsystem_dma_repair_001/{catalog_preflight,
registered_word_verification,runtime_scope_audit_after_failure,verification,
host_verification,subsystem_handler_pending}.json,entry_slice_040 initial
contract_Debug.log and corrected *_002 logs, native_build_Release_035.log,
native_boot_release_035/result.json.


## Passive DMA reads and guest32 backend access repaired - 2026-10-04

Previous goal turn PROGRESS: Release035 stops1a6b28; documented CHCR read-clear
and missing SIF chain hardware. Reviewed local PCSX2 reference HwRead.cpp
(passive psHu32 read), Sif0.cpp EEsif0Interrupt (completion clears STR), Dmac.cpp
(explicit STR0 stop). These are emulator reference sources, not retail captures.
Removed readIORegister automatic STR clear; native completion paths retained.
Initial entry_slice_041 Debug FAILED guest Load32 test: discovered PS2Runtime
Load32 returned0 beyond32MB and Store32 silently ignored hardware. Preserved
failure. Routed Load32/Store32 through existing PS2Memory read32/write32, keeping
exception signaling, tracing, handler drain and ordinary fast RAM macro path.
Other access widths remain unaudited; this is not full memory/kernel parity.

Runtime Debug/Release rebuilt twice; corrected entry_slice_041 contracts PASS
both configurations: repeated passive CHCR read, memory/guest Load32, no false
completion, original busy branch now reachable, explicit stop, guest MMIO store
mask-toggle/CHCR, uncached/KSEG RAM aliases. Corrected observer stop001adb48
(full catalog registered); no retail/gameplay inference. Full Release036 PASS;
probe036 explicit missing1a6b28, inputs MATCH/no timeout. Boot frontier retained.
Original ELF/assets/src/recomp untouched. No forced DMA/SIF success introduced.

Next: original1a6b28 handler-return/EnableDmac/SIF continuation from
subsystem_dma_repair_001/subsystem_handler_pending.json. SIF SetDChain still
returns0 without programming; pending DMA status branch and full transfer timing
not certified. Follow-up audit other Load/Store widths: current implementations
still ignore special addresses; evidence-backed backend connection is required
for title/render/audio. Negative allocation/OSD/SetSyscall74/GetEntryAddress/EI/
cache/retail parity open. No title/battle/full content/saves/standalone acceptance.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. No active build,
probe/cloud/new captures. Evidence dma_chcr_read_repair_001/{reference_review,
access_bridge_review,verification,host_verification}.json and diffs,
entry_slice_041 initial contract_Debug.log and corrected *_002/*_003 logs,
native_build_Release_036.log,native_boot_release_036/result.json.


## Original handler return enters DMA enable wrapper - 2026-10-04

Prior goal turn PROGRESS: Release036 stops1a6b28. Added25 original words
1a6b28..1a6b88, registered1a6b28/1a6b38/1a6b44 (explicit128 plus63 returns).
Catalog preflight found existing1a6b8c/1a6b90 polling entries; reused, not
replaced. ELF identity/program offsets and original entry1a6b18 source reviewed.
HandlerID371814 SW in EnableDmac delay; signedSIF register80000000 query;
zero pointer stored in delay then existing polling; nonzero pointer descriptor,
LD saved low64/frame and tail1a6e10/SP60 delay. No SIF-ready flag introduced.
entry_slice_042 Debug/Release PASS: handlerID truncation/store, arguments/delay,
zero/nonzero synthetic pointer, descriptor/frame/lanes/tail. Reduced observer
001adb48/full catalog hashes identical. Full Release037 PASS; probe037 actual
1a6b28->1a5438->1ad460->1a4580 syscall22 then missing1a5470, inputs MATCH,
no timeout. SIF query not yet reached full boot; branches remain synthetic only.

Next: EnableDmac wrapper1a5438 already has resume labels1a5468/1a5470/1a5488,
but missing dispatcher aliases; inspect and register only absent PCs, recover
original JR/SP30 at1a5498. enable_dma_pending.json pins next original words.
Kernel EnableDmac returns prior enable0 observed, no forced return. SIF chain,
other memory widths, pending DMA status, cache/EI/negative allocator/OSD and
independent retail parity open. No title/battle/all content/saves/standalone.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. No active
build/probe/cloud/new captures. Evidence subsystem_handler_repair_001/
{catalog_preflight,registered_word_verification,semantic_review,verification,
host_verification,enable_dma_pending}.json,entry_slice_042,
native_build_Release_037.log,native_boot_release_037/result.json.


## EnableDmac return and numeric SIF register routing - 2026-10-04

Previous verified frontier Release0371a5470. Original EnableDmac resumes
1a5470/1a5488 and JR1a5498 added, existing1a5468/1a548c reused;12 original
words pinned. entry_slice_043 contracts Debug/Release PASS; reduced observer
001adb48/full catalog with identical hashes. Full Release038 PASS; actual
EnableDmac returns through original interrupt restore, reaches SIF queries
80000000/4 then missing1a6b98. Inputs MATCH/no timeout. Observed syscall7a
unknown despite existing implementation, not an accepted SIF return.

Connected positive79 SetReg /7a GetReg to existing implementation, confirmed
local PCSX2 syscall name table. Removed inherited unconditional readiness20000
on reset/ExitCmd: no initialized IOP service evidence; PCSX2 hwReset zeroes
hardware, does not assert readiness. Register-map semantics and return ABI are
still provisional, not certified hardware/retail parity. No negative aliases.
Broad SIF suite Debug failed before register tests: executor-thread assertion
in first DMA test, timed out; preserved log and timeout report. Three scoped
contracts PASS Debug/Release: actual handleSyscall v1/encoded routing, unknown
read, set/get/previous value, existing ABI, reset/exit and passive polling.
Full Release039 PASS; probe039 two genuine SIF dispatches return0, missing
1a6b98 remains, inputs MATCH/no timeout. No forced readiness or successful boot.

Next: pin/catalog-preflight original entry1a6b90 resumes1a6b98/1a6bac/1a6bbc/
1a6bcc; first original loop AND20000/BEQback/a0=2 delay must wait until a real
IOP/HLE initialization event publishes readiness. Investigate service lifecycle
from local references/dumps before implementation. SIF SetDChain programming,
other memory widths, negative allocation/OSD/EI/SYNC/cache/retail parity open.
No title, battle, full content, saves or packaging. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. No active build/probe/cloud/new capture.
Evidence enable_dmac_return_repair_001/{verification,host_verification}.json,
entry_slice_043,native_build_Release_038.log,native_boot_release_038/result.json;
sif_register_routing_001/{reference_review,verification,host_verification}.json,
contracts_final_Debug/Release.log, original failed contracts_Debug.log and
interrupted report,diffs,native_build_Release_039.log,probe039/result.json.


## Original SIF polling resumes restored - 2026-10-04

Previous goal turn PROGRESS: Release039 missing1a6b98. Catalog preflight reuses
existing entry1a6b90; adds four absent PCs1a6b98/1a6bac/1a6bbc/1a6bcc (explicit
135 plus63 syscall returns).32 original words1a6b98..1a6c14 verified via ELF
program headers and original translation comments; runtime/fixtures consistent.
Original ANDlow64/BEQ backedge/a0=2 delay, ready-path query2/descriptor delay,
SetReg80000000/1, saved LDlow64/high lanes, descriptor stores and original
J1a6e10/SP60 delay preserved. No readiness injection; src/recomp untouched.
entry_slice_044 Debug/Release contracts PASS, reduced observer001adb48 (full
catalog exists), identical snapshot hashes. Full Release040 PASS. Actual probe
040 now repeats query4 returns0/RA1a6b98, no missing-target in capture;10-second
TIMEOUT with owned process stopped and inputs MATCH. This is an observed wait,
not boot PASS; no title/battle or retail equivalence.

Bounded IOP lifecycle audit: reset clears module manager/emulator; sifman4/5
sets local m_sifInitialized, does not publish EE register map. IOP memory uses
private hardware map; current host sendSifCommand routes registered callbacks;
invokeGuestFunction returnsfalse. Original handshake/firmware state needs
reference before a readiness-producing HLE service can be integrated.
Next inspect independent SIF initialization protocol (registers2/4 and IOP
startup) and implement actual initialized service event, preserving wait until
ready. Also audit fault-PC attribution per memory instruction in new resume;
no speculative ready bit or forced pointer. SIF SetDChain/other memory widths,
negative allocator/OSD/EI/SYNC/cache parity and all final game criteria open.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. No active
build/probe/cloud/new captures. Evidence sif_polling_resume_001/{catalog_preflight,
registered_word_verification,semantic_review,verification,host_verification,
iop_lifecycle_audit}.json,entry_slice_044,native_build_Release_040.log,
native_boot_release_040/result.json. verification_pending.json is historical.


## Physical SIF query backend corrected - 2026-10-04

Previous goal turn PROGRESS: Release040 original SIF wait. Acquired pinned
ps2sdk reference in sif_protocol_reference_001: EE wait4 CMDINIT20000 then
physicalSUBADDR2; softwareSUBADDR80000000 distinct MAINADDR80000001 and
RPCINIT80000002. IOP sifcmd startup installs buffers/handlers, publishes receive
SUBADDR, then InitCmd signalsCMDINIT and waits peer initialization packet.
Reference sources are not captured retail firmware. Initial EE/IOP same
basename download corrected to separateiop_sifcmd.c and restored EE bytes with
original SHA; pinned manifest identifies content.

Found another inherited false-readiness source: PS2Memory F230 always60000,
other SIF reads discard register backing. Removed F230 constant and enabled
backed physical communication reads, retaining unaudited F240 constant. Added
EE F220 OR / F230 clear writes against local PCSX2 source. GetReg1..4 now reads
physical MMIO backend, software map retained. Corrected software register names.
Initial test compile failed incorrect Load32 argument signature; failure log
preserved, corrected API rerun. Four scoped contracts PASS Debug/Release:
reset no readiness, physical addresses distinct from software, passive repeated
reads, MSFLAG set accumulation, SMFLAG clear cannot create bits, uncached guest
Load32 agreement. Runtime rebuilt Debug/Release, full Release041 PASS. Actual
probe041 same query4zero wait until10s TIMEOUT, inputs MATCH/no missing target.
No ready bit injected, no title/battle/retail claim. Original assets unchanged.

Next actual IOP->EE publication and SIFCMD initialization lifecycle: current
IOP memory map isolated, sifman initialized boolean local, sifcmd imports4..11
returnzero without real initialization. Need connect real service-owned receive
buffer, handlers and initialization handshake before signallingCMDINIT; do not
merely publish20000. Physical SetReg still inherited map, not certified; EE
ExitCmd incorrectly resets kernel software registers per reference, follow-up
required. F240 constant, fault-PC attribution, SIF chain DMA, remaining memory
widths/retail/kernel and all final game criteria open. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. No active build/probe/cloud/new captures.
Evidence sif_physical_register_repair_001/{reference_review,verification,
host_verification}.json,diffs/contracts_Debug/Release.log; pinned protocol
reference manifest, native_build_Release_041.log,native_boot_release_041/result.json.


## SIF command close preserves kernel state - 2026-10-04

Previous goal turn PROGRESS: physical SIF backend repaired, Release041 waits.
Pinned EE SDK ExitCmd only disables/removes owned DMAC receiver, preserves
software regs/sregs/buffers/handler tables. Removed inherited global reset in
HLE ExitCmd; only clears local command-initialized state. Actual resetSifState
still clears all state. Five scoped contracts PASS Debug/Release including
software SUBADDR/MAINADDR/RPCINIT, sreg, command buffer conservation, repeated
close and actual reset. Updated inherited suite assertion to preserve RPCINIT.
Full Release042 PASS. No boot probe repeated: startup wait does not reach
ExitCmd, last actual observation remains Release04110sTIMEOUT/input MATCH.
This is a state-conservation repair, not complete receiver teardown/init parity.

Concrete next prerequisite verified: IOP sifman export ordinals21..27 query/set
MSFLAG/SMFLAG/MAINADDR/SUBADDR; current import dispatcher defaults them to zero,
no shared EE publication. IOP sifcmd4..11 also returnszero without handlers.
Next implement shared SIF host register interface, verify asymmetric EE/IOP
set/clear semantics from local PCSX2, route sifman21..27 with real guest import
execution tests/reset. Then service-owned receive buffer/handlers and INIT_CMD
handshake beforeCMDINIT signal. No ready bit bypass. Owned DMAC handler teardown,
physicalSetReg,F240,fault-PC,SIF chain widths/retail and all final criteria open.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. No active build,
probe/cloud/new captures. Evidence sif_exit_state_repair_001/{reference_review,
verification,host_verification,sifman_publication_gap}.json,diffs,contracts_Debug/
Release.log,native_build_Release_042.log. Original references/assets preserved.


## Shared IOP/EE SIF register bridge - 2026-10-04

Previous goal turn PROGRESS: ExitCmd state preservation. Implemented IopHost
physical-register read/write interface; unsupported hosts reportfalse, native
adapter uses actual PS2Memory backing. IOP MAINADDR1 read-only, SUBADDR2
assignment, MSFLAG3 clear, SMFLAG4 set per local PCSX2 IopMem.cpp410..426;
EE read path sees same backing and existing inverse write rules. Connected
sifman21..27 real import dispatcher; no reset/startup ready flag injection.
Six scoped contracts PASS Debug/Release including IopRpcBridge with synthetic
CPU register inputs and real native adapter: posted addresses, directional
flag accumulation/acknowledgement, passive polling and invalid index rejection.
This is not full IRX instruction execution. Auxiliary unavailable-host test
failed by deriving final adapter, removed; failure preserved, unavailable-host
behavior source-reviewed only. Runtime Debug/Release builds PASS.

Full Release043 build active: public memory/header changes trigger complete
recompiled corpus. Session87665, exec87665 process25036MSBuild /23360cl at last
observation; bounded180s wrapper may timeout before complete. Inspect same
session/process/log before resume, never infer completion/restart on timeout.
No boot probe yet, last actual041SIF wait remains authority. Original sources
and assets preserved. Next finish fullbuild, then bounded probe; next runtime
work direct IOP MMIO bridge/reset lifecycle and actual SIFCMD buffer/handler
service with INIT_CMD handshake, using shared interface before signalling ready.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence
sif_shared_registers_001/{reference_review,verification}.json and diffs,
contracts_Debug/Release.log; native_build_Release_043.log active, not PASS.


## Continuation: compiler timeout and pending IOP MMIO - 2026-10-04

Release043 is TIMEOUT, not an active successful supervisor: 180s helper
killed cmake/MSBuild but left original cl.exe PID23360 (start11:57:38 local),
CPU still advancing at this continuation. No overlapping build started.
Fixed native_entry_slice.command to taskkill only its owned Windows tree
while parent exists, then reap parent, preserving interruption evidence.
Two synthetic supervisor tests PASS: logs/nonzero and timeout descendant
termination with unrelated process preserved. Not game boot evidence.

Prior private IOP aligned32 MMIO bridge and SW/LW fixture preserved under
sif_iop_mmio_001; implementation NOT TESTED yet, no runtime rebuild claimed.
Other widths/reset/control mirror semantics remain open. Last actual probe
Release041 remains SIF4zero wait; no title/battle or new retail capture.

Next: verify PID23360 terminal and no active writer, rebuild ps2_runtime
Debug then Release; run seven scoped SIF contracts in both configurations.
Resume full fate_game Release incrementally with a long enough tool session
(no 180s corpus wrapper), preserve separate log and successful link before
bounded probe. Then implement service-owned SIFCMD buffers/handlers and
INIT_CMD handshake; do not inject readiness. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence build_timeout_tree_001/
verification.json and tests.log; sif_iop_mmio_001/pending_verification.json.


## IOP guest aligned32 SIF memory bridge verified - 2026-10-04

Previous turn PROGRESS: supervisor tree timeout fix2tests. Verified original
orphancl23360 identity, parent supervisor absent, stopped only this owned
compiler and preserved objects; no active compiler before runtime rebuild.
Runtime Debug/Release builds PASS. Seven scoped SIF contracts PASS in each:
actual IopCpuCore SW/LW/NOP load-delay sequence uses shared native adapter,
uncached SUBADDR posting/readback, SM publication/EE acknowledgement,
MS selective acknowledgement, MAIN read-only. No full IRX startup/retail claim.
Narrow widths, mirror/control addresses/reset and unavailable-host test open.

Full Release043 incremental resume001 now active direct tool session53690,
cmake18680/MSBuild24488 observed; no 180s wrapper. Do not rebuild runtime or
start another corpus build until this session/process is terminal. No link
success or probe yet; last actual041 wait remains.

Pinned SDK sifinit source added with commit/hash provenance: its _start calls
SifInit only. SIFCMD _start owns receive80/sys40 buffers, handler32 table,
softregs32, DMA_SIF1 interrupt, publishes SUBADDR. InitCmd publishesCMDINIT
then waits event100; INIT_CMD opt0 signals event100 and clears MS CMDINIT,
records EE destination. Current ROM module manager lists sifcmd but does not
run those actions; import4..11 returnszero. Implement service lifecycle and
packet receiver before any ready bit. Constructor precedes memory initialize
so no physical publication from constructor. Preserve actual original wait.

Next finish same full build, bounded probe after successful link; implement
actual SIFCMD bootstrap/handler tables/handshake using real IOP RAM ownership
and transport notifications. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence sif_iop_mmio_001/verification.json,
contracts_Debug/Release.log,runtime_Debug/Release.log; full resume log;
sif_protocol_reference_001/iop_sifinit.c and provenance.json.


## IOP SIFCMD handler tables - 2026-10-04

Previous goal turn PROGRESS: aligned32 guest MMIO seven contracts PASS.
Added real IOP SIFCMD imports6..11 state:32 softregs; registered user stride8
and system stride12 guest tables; Add/Remove changes handler/harg only,
reserved08 preserved. Invalid ranges/count/index returnunhandled before
mutation, no silent successful table write. Void HLE entries preservev0
rather than forcezero; not original compiled clobber equivalence claim.

Direct private-source isolated MSVC/W4/WX contracts PASS Debug/Release:
21 assertions each for full32 softreg31, invalid32, both table layouts,
reserved field, invalid replacement retention, removal, disable, reset.
Synthetic no-services IopHost, actual IopRpcBridge/IopMemory/IopKernel.
Integrated eighth native-adapter contract added but NOT RUN; runtime
libraries unchanged while fullbuild owns their immutable inputs.

FullRelease043 resume001 session53690 remains live; cmake18680/
MSBuild24488/cl10124 CPU advancing, log unity83 at last observation.
Isolated build has separate PDB/object/output directories and no shared
library target. Preserve same live full build; no successful link/probe.
Last actual Release041 wait remains; no title/battle/retail parity.

Next after fullbuild terminal: rebuild runtime Debug/Release serially,
run eight integrated SIF contracts in fresh logs, incremental relink and
probe. Next service step own receive80/sys40 buffers and handler/IRQ
lifecycle, receive after-copy SetDma addressed to actual IOP receiver,
process INIT_CMD opt0/1 events before readiness. Do not publish fake
guest callback addresses or CMDINIT from mere module-name registration.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.
Evidence sif_cmd_tables_001/verification.json,source diffs,isolated build
and contract Debug/Release logs; runtime integration pending.


## IOP SIFCMD packet receiver primitive - 2026-10-04

Previous goal turn PROGRESS: handler tables isolated21 assertions PASS.
Added receiveCommandPacket primitive against SDK _sceSifCmdIntrHdlr:
validate header/size8/rounded copy, clearpsize preserving payload24, copy
into distinct owned IOP temporary memory, select actual user/system table,
invoke real IopGuestExecutor with handler/argument and registrationGP.
Temporary snapshot survives DMA receiver overwrite and is reclaimed on
normal/throwing callbacks. Fixed temporary allocation avoids heap-cursor
leak and skips RAM owned outside allocation registry (module images).
Malformed packet unchanged; zero or unregistered command no callback.

Direct private-source contracts39 assertions PASS Debug/Release, final002
logs; initial38 runs preserved. Synthetic executor checks snapshot data,
psize/metadata/GP, receiver overwrite, repeat/malformed/rounded-size cases,
reclamation/heap conservation/owned RAM. Not real guest handler execution.
Heap snapshot differs from SDK stack address; pointer-identity and retail
GP parity pending. SIF1 callback/chain rearm, receiver lifecycle, actual
transport and INIT_CMD handshake NOT connected; no readiness injection.

FullRelease043 resume001 still live session53690; cmake18680/MSBuild24488/
cl10124 seen, log unity66. No runtime library rebuild, link/probe success.
Next finish same full build; then serial runtime Debug/Release and eight
integrated table/MMIO contracts, relink/probe. Connect service-owned
receiver buffers and after-copy SetDma only at posted receiver address,
not every DMA. Complete SIFCMD startup/IRQ/INIT_CMD before CMDINIT.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED; last041wait.
Evidence sif_cmd_receiver_001/verification.json,diffs,contract_Debug/
Release_002.log,build_Debug/Release_002.log. Original assets intact.


## SIFCMD transport delivery connected - 2026-10-04

Previous turn PROGRESS: receiver39 assertions PASS isolated. Connected
IopEmulator.onSifTransfer to real IOP executor and RPC receiver only for
SetDma AfterCopy at physical destination matching nonzero shared SUBADDR.
BeforeCopy, GetOtherData, other destinations and unsupported host register
view do not consume bytes. No equal-numbered EE mirror. Malformed posted
packets log rejection. Actual EE SIF.cpp source confirms notification after
writeIopMemory; generic DMA not treated as command.

Direct private-source Debug/Release48 assertions PASS each, including
transport phase/type/address/alias filtering, actual handler selection,
duplicate suppression and malformed warning. Actual IopEmulator forwarding
compiles independently /W4/WX both configs, not linked/executed end-to-end.
Runtime libraries unchanged during fullbuild; native integrated8contracts
and end-to-end EE transfer pending. No service-owned buffers/IRQ yet, no
SIF1 callback/rearm or INIT_CMD handshake/readiness.

FullRelease043 resume001 session53690 still live, cmake18680/MSBuild24488/
cl10124 observed; codegeneration after unity59. Next finish same build,
then runtime Debug/Release serial rebuild, integrated8contracts (and actual
EE transfer test), relink/probe. Initialize real SIFCMD receiver, tables,
IRQ and INIT_CMD event100/800 before publishingCMDINIT; constructor runs
before EE memory exists, so bootstrap must be post-memory. No forced bits.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED; last041wait.
Evidence sif_cmd_transport_001/verification.json,diffs,contract_Debug/
Release.log,entry_compile_Debug/Release.log. Original assets preserved.


## SIFCMD owned service lifecycle and INIT_CMD - 2026-10-04

Previous turn PROGRESS: transport filter48 assertions PASS. Implemented
installCommandService owns0x240 IOP bytes (packet80/sys40/system32*12),
real kernel event and native internal handlers, no fake guest PCs. Publish
SUBADDR only after service state built; publication failure frees storage
and event. Install itself noCMDINIT. InitCmd now requires enabled service,
publishesSM CMDINIT and waits real event100. Outside running IOP thread
unsatisfied wait returns inherited-418, tested, not forced success.
INIT_CMD opt0 signals100, clearsMS CMDINIT, records EE address; opt1
signals800/preserves address. CHANGE_SADDR and SET_SREG dispatch actual
state. Guest replacement/removal disables corresponding native builtin.
ExitCmd disables delivery preserves state; actual reset releases own
storage/event.

Private-source isolated67 assertions PASS Debug/Release (final002); initial
Debug65 preserved. Includes failedpublication rollback, no readiness before
install, waiting until actual packet, both event bits/address rules, close
delivery conservation, actual reset. Synthetic host/executor only.

NOT integrated runtime/bootstrap: install invoked explicitly by fixture.
No IRQ registration/SIF1 callback/rearm yet; enabledflag is HLE delivery
gate, not hardware interrupt proof. Service-private event differs from
SDK sharedGetSystemStatusFlag. Reopen after ExitCmd, stale shared register
reset cleanup, native send destination and pointer/GP retail parity open.
Do not claim ready service in actual boot until these lifecycle connections
and post-memory caller tested.

FullRelease043 resume001 remains live53690, cmake18680/MSBuild24488/
cl10124 observed/logunity48. No runtime rebuild or new probe. Next same
build terminal then runtime Debug/Release +8contracts and relink/probe.
Connect post-memory ROM bootstrap/install and actual EE SetDma/INIT_CMD
integration with native adapter; validate ownership and IRQ/callback rules
before boot readiness. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED; last actual041SIFwait. Evidence
sif_cmd_lifecycle_001/verification.json,diffs,contract_Debug/Release_002.log.


## SIFCMD outgoing EE destination and reset order - 2026-10-04

Previous turn PROGRESS: isolated service lifecycle67 assertions PASS.
Actual IopEmulator reset now releases RPC service-owned event/storage
before clearing memory/kernel owners. Installed service SendCmd now
writes packet to learned EE destination before host command dispatch;
failed write yieldsDMA0/no callback. Missing EE handler still completed
DMA when actual write succeeded, tested. Legacy import-only send path
without installed service unchanged.

Private-source Debug/Release74 assertions PASS each, emulator object
compile included. Synthetic EE write host verifies learned address,
header size/cid/option, completed DMA without handler and failedwrite
rejection. Initial Debug fixture nodiscard zeroRam warning /WX rejection
preserved and corrected to assertion. Not full runtime link/live IRX.
SDK original caller packet header mutation remains gap (local generated
header only); extra-payload atomicity, automatic bootstrap/IRQ/SIF1/shared
status event/resetphysical/reopen and retail parity remain open.

FullRelease043 resume00153690 live cmake18680/MSBuild24488/cl10124
codegeneration after unity35. Runtime libraries unchanged/no relink/probe.
Next finish same build; runtime rebuild serial Debug/Release and8contracts,
add native EE transfer integration then relink/probe. Connect post-memory
service bootstrap with fully owned receiver/interrupt/event lifecycle before
readiness. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED;
last actual041SIFwait. Evidence sif_cmd_send_001/verification.json,source
diffs,build/contract_Debug/Release_002.log. Original assets intact.


## SIFCMD original caller packet mutation - 2026-10-04

Previous turn PROGRESS: send/reset74 assertions PASS. SendCmd now mutates
original IOP caller header12 bytes before DMA per pinned SDK, not just
local copy. Preserves opt/payload. No extra or negative extra size sets
dest0/dsize0; positive extra sends payload before command. Private-source
Debug/Release83 assertions PASS each (final002;77 initial preserved),
including caller/wire header, stale dest clearing, payload8 and interrupt
variant order. Synthetic EE writes only, no fullruntime/retail claim.

FullRelease043resume001 session53690 still active (cmake18680/
MSBuild24488/cl10124 observed); runtime libs unchanged. Next stop refining
isolated cases: finish same fullbuild then serial runtime rebuild and8
integrated contracts/native EE transfer before bootstrap integration and
relink/probe. Post-memory service caller/IRQ/SIF1/shared status/reopen/reset
physical and DMA timing/partial-copy gaps open. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED; last actual041SIFwait. Evidence
sif_cmd_header_001/verification.json,diff,contract_Debug/Release_002.log.


## Native SIFCMD module and EE DMA integration prepared - 2026-10-04

Previous goal turn PROGRESS: outgoing header83 assertions PASS. Added
IopEmulator private install wrapper and ROM0 SIFCMD load hook: owned
receiver installed before module manager successful load, noCMDINIT.
Actual emulator/subsystem entry objects compile /W4/WX Debug/Release
in isolated output. Ninth integrated contract added: PS2Runtime memory,
loadrom0:SIFCMD, actual EE sceSifSetDma copies INIT_CMD into real IOP
buffer, consumespsize/clearsMSFLAG, repeated module load keeps receiver.
This contract NOT compiled/run yet; runtime libraries unchanged while
fullbuild owns them.

FullRelease043resume001 session53690 still live cmake18680/
MSBuild24488/cl10124/logunity19. Next finish same build, then runtime
Debug/Release serial rebuild, new integrated9contracts harness, preserve
failures; relink full target after integration and bounded probe. Avoid
more isolated refinements before this end-to-end test. ROM bootstrap at
reset/sifman/IRQ/SIF1/sharedstatus/unload/resetphysical and real retail
parity remain open; no readiness injection. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED; last actual041SIFwait. Evidence
sif_native_integration_001/verification.json,diffs,entry_Debug/Release.log.


## Native EE-to-IOP integration verified - 2026-10-04

Previous goal turn PROGRESS: native ROM hook/object compile prepared.
Nine SIF integrated contracts PASS Debug/Release. Used actual existing
PS2Runtime/native adapter plus current IOP rebuilt in separate isolated
archive, verified link inputs exclude workspace IOP archive. Actual EE
sceSifSetDma copies synthetic INIT_CMD into actual IOP buffer, psize consumed,
shared MSFLAG acknowledged, repeated ROM module load retains receiver.
First Debug fixture failed scheduler executor assertion; initialized actual
EeScheduler.reset in fixture, preserved failure and stopped exactfixture7096.
No runtime assertion disabled or source workaround.

Production runtime libraries remain unchanged while fullbuild owns inputs.
FullRelease043resume00153690 live cmake18680/MSBuild24488/cl10124,
codegeneration after unity10. Next finish same build, rebuild production
runtime serial Debug/Release (private source changes), incremental relink
and bounded probe; integrated route is now verified so avoid more isolated
refinement. Automatic post-memory ROM startup/InitCmd caller and IRQ/SIF1/
sharedstatus/unload/resetphysical/reopen remain open. No boot bypass.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED; last041wait.
Evidence sif_native_integration_001/runtime_verification.json,contracts_
Debug/Release_002.log,contracts_build logs,isolated_iop archive.


## IOP SIF1 callback lifecycle - 2026-10-04

Previous goal turn PROGRESS: native9contracts PASS. Added actual SIFCMD
26/27 Set/ClearSif1CB, retains guest function/argument/registrationGP,
executes before packet inspection including emptypsize on AfterCopy at
postedreceiver. Clear uses native no-op, reset clears registration. No
fake guest callback address. Isolated90 assertions PASS Debug/Release;
actual native9contracts regression PASS both using isolated current IOP
archive. Actual hardware IRQ masking/rearm and retail GP parity still
open. This removes callback gap, does not complete interrupts/bootstrap.

FullRelease043resume00153690 live cmake18680/MSBuild24488/cl10124
logunity6. Production runtime libraries unchanged. Next finish same build
then production runtime serial rebuild/relink/probe; connect post-memory
ROM service InitCmd caller and shared status/IRQ/reset/unload lifecycle.
Do not seed readiness merely from module name. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED; last actual041SIFwait. Evidence
sif1_callback_001/verification.json,diffs,contract/native_Debug/Release.log.


## Shared IOP system status event - 2026-10-04

Previous goal turn PROGRESS: SIF1 callback90+native9 PASS. Pinned SDK
thbase header confirms GetSystemStatusFlag import41; inherited dispatcher
returned0. Added lazily allocated kernel-owned system status event,
SIFCMD uses same event instead of service-private one. Service reset
preserves kernel event; actual kernel reset removes it. Isolated92
assertions PASS Debug/Release, including thbase41 identity/shared bits
conservation/reset. Exact event attr/id/initialbits retail pending; no
injected handshake bits. Native9contracts latest regression pending.

FullRelease043resume00153690 still active cmake18680/MSBuild24488/
cl10124 codegeneration after unity1/38. Production libs unchanged. Next
finish same build, serial production runtime rebuild and current native
9contracts, relink/probe. Then post-memory startup/InitCmd and IRQ/rearm/
unload/resetphysical lifecycle; no further isolated refinements before
integration. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED;
last actual041SIFwait. Evidence sif_shared_event_001/verification.json,
diffs,contract_Debug/Release.log,pinned iop_thbase provenance.


## Production SIFCMD startup and actual Release045 - 2026-10-04T19:43:05.061976+00:00

Production runtime Debug/Release and native9contracts PASS; full Release045 advances past SIF4zero to missing001A705C, inputs MATCH. Explicit standalone ROM receiver/startup continuation waits actual event; no retail/title/battle parity.

Previous043resume001+044 full links finished exit0. Production9/9 each
configuration PASS with all latest privateIOP sources. Actual044 TIMEOUT10s,
query4zero/inputMATCH. Actual045 sees CMDINIT20000 and SUBADDR120000,
sets EE software addresses, then stops missing001A705C while sending
INIT_CMD packet. No title/battle or boot closure.

First ROM install schedules explicit no-BIOS host startup continuation at
IOP cycle accounting after main memory/scheduler init. Actual InitCmd
unsatisfiedwait retained; only event100 from receivedINIT_CMD completes.
Repeatload does not restart. Initial contractcompile attempted private
advanceIopEeCycles and failed; fixture corrected to public actual scheduler
accountCycles without visibility changes, failures preserved. Ninecontracts
PASS Debug/Release and fullRelease045linkPASS.

Evidence artifacts/lockstep_20261004/sif_bootstrap_001/verification.json,
changes.diff,contracts logs; native_boot_release_045/result.json,logs.
SDK IOP sifrpc source pinnedac92a9 confirmsInitRpc callsInitCmd, but
host policy/caller/timing is not retailROM execution proof. RPCINIT/IRQ/
chainrearm/resetphysical/unload/reopen/parity remain open.

Next recover original001A705C JRRA+delay and001A7064 with opcode tests,
then relink/boundedprobe and resolve next actual handshake/continuation.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.
No build/probe currently active.


## Cache sync original returns - 2026-10-04T19:46:33.650486+00:00

Previous goal turn PROGRESS: productionSIFCMD startup advanced045 to001A705C.
Cache sync JRRA/NOP and alternate JRRA/ADDIU SP,-40 recovered from identified original ELF; Debug/Release contracts PASS. Full Release046 link PASS, actual boot advances001A705C to missing001A6DC8, input MATCH. No title/battle/retail parity.

Original ELF PT_LOAD mapping verified offsetA785C..A7868; alternate
001A7064 has SP -40 delay (not NOP). Original opcodes stored. Added exact
return handlers with target/delay/lane/wrappedSP contracts. Build tests reused
entry_slice044 harness but did not overwrite its historical logs; current
logs/changes/hashes in cache_return_001. FullRelease046 actual stops at
001A6DC8 after returning from cache helper; no forced success.

Register original FUN001a6cd8 resumes001a6dc8/001a6ddc/001a6dec and original JRRA/SP80 epilogue001a6e04; verify opcodes and synthetic DMA argument/restore contracts, relink/probe. IRQ, full RPC startup, retail title/battle parity remain open.
Original pending interval001A6DC8..001A6E08 saved with identified ELF
file offsets. No active build/probe. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence cache_return_001/verification.json
and native_boot_release_046/result.json.


## Original SIF send continuations - 2026-10-04T19:51:04.629416+00:00

Previous goal turn PROGRESS: cache returns to001A6DC8.
Original SIF send resumes, DMA argument selection and restore/return contracts PASS Debug/Release; Release049 actual calls SetDma src371800/dst120000/size14/attr44, ID1, then stops missing001A6E40. Original registered001a6dec/001a6df0 preserved. No title/battle/parity.

Seventeen original opcode identities MATCH against identified XL ELF.
Registration preserves existing001a6dec RA load and001a6df0 fullrestore.
Only missing001a6dc8/001a6ddc/001a6e04 registered; isolated harness
also receives001a6df0 because it lacks that full catalog fragment.
Initial shadow-warning/testcompile and047registrationfail preserved.
Final Debug/Release tests passed and full049linkPASS. Actual049
reaches DMA call and ID1, inputsMATCH, then001A6E40.

Recover original FUN001a6e10 return001a6e40 restoring SP10 from identified ELF, test/relink/probe. Then complete measured RPC initialization handshake and retail comparison.
No active build/probe. IRQ/RPC startup/retail packet state comparison
and all product criteria remain open. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence sif_send_resume_001/verification.json,
changes.diff/contractslogs and native_boot_release_049/result.json.


## SIF command wrapper returns - 2026-10-04T19:53:20.060858+00:00

Previous goal turn PROGRESS: actual049 DMA ID1 then001A6E40.
SIF command wrappers001A6E40/001A6E80 original RA-load/JR/SP10 restored; six opcode identities and Debug/Release contracts PASS. FullRelease051 linkPASS; actual boot returns from DMA ID1 and stops missing001A70B8, inputsMATCH. No title/battle/retail parity.

Original LOAD RA/JR/SP10 verified for normal and interrupt wrappers.
Six original words checked at registration before execution. Tests cover
RA low64/guest targetlow32, upper lanes, SP10, delay and actual DMA result
conservation. Initial050 unnamed runtime parameter compilefail corrected
without disabling checks; failures preserved. Full051 actual DMA reaches
return001A6E40 then missing001A70B8.

Recover original RPC initialization continuation001A70B8 after SIFCMD returns; inspect ELF/preserved SDK before handling RPCINIT wait. Preserve no-BIOS host startup policy limits and do not inject RPCINIT.
No active build/probe. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence sif_command_return_001/verification.json,
changes.diff/contractslogs and native_boot_release_051/result.json.


## RPC tables and original command handler - 2026-10-04T19:57:32.038178+00:00

Previous goal turn PROGRESS: command returns to001A70B8.
RPC tables setup001A70B8/001A70C0 and original EE handler registration001A6C80 recovered;42 original words MATCH, Debug/Release contracts PASS. Release052 actual stops missinghandler; Release053 registers first RPC END handler and stops001A7134, inputsMATCH. No title/battle/parity.

Recovered original PID, packet/data/client alias pointers,32 counts,
cleared fields and first RPC END handler call. Original EE AddCmdHandler
chooses signed system/user namespace, indexshift3, writesarg andfunction
in JRdelay. All42 opcode identities MATCH original ELF. Tests cover both
tables, first-call args and field layout; failed fixture assumption from
recursive target dispatch corrected by bounded isolation/restoration.
No source behavior changed to satisfy test. Actual053 slot371880 updated,
firsthandler registered, then stops missing001A7134.

Recover remaining original RPC handler setup continuations001A7134/001A714C/001A7164/001A717C/001A7184 and query/wait001A7190; inspect actual table/event/SET_SREG transport before completing IOP RPCINIT. Do not inject readiness.
No active build/probe. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence rpc_tables_001/verification.json,
changes.diff/contractslogs and native_boot_release_053/result.json.


## Remaining original EE RPC handlers - 2026-10-04T19:59:28.959779+00:00

Previous goal turn PROGRESS: first RPC END handler then001A7134.
Remaining original RPC handler setup resumes001A7134/714C/7164/717C/7184 recovered;23 opcode identities MATCH, Debug/Release contracts PASS. FullRelease054 reaches all four handler registrations then reads softwareRPCINIT0 and stops missing001A7190, inputsMATCH. No title/battle/parity.

Original remainingIDs80000009/0A/0C and pointers1A7628/1A7818/1A7420
with3731C0 argument restored, call delay registers checked. Original
interrupt-enable and softwareRPCINIT query resumes restored. Full054
trace traverses all handlers then queryreturns0, missing001A7190.
No injected readiness; current IOP command event alone cannot certify RPC.

Recover original001A7190 response branch/INIT_CMD opt1 packet/send and resumes into actual softreg wait; original interval7190..722C saved. Then implement IOP RPC startup buffers/handlers/SET_SREG response after actual event100, not fabricated RPCINIT. Compare retail checkpoints before parity closure.
No active build/probe. GAME_PARITY=NOT_COMPLETE;
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence rpc_handlers_001/verification.json,
changes.diff/contractslogs and native_boot_release_054/result.json.


## Original RPC request and software wait - 2026-10-04T20:03:31.748882+00:00

Previous goal turn PROGRESS: all four handlers registered, RPCINIT0 then001A7190.
Original RPC INIT_CMD opt1 request and software getter/wait resumes recovered;26 original opcode identities MATCH, Debug/Release contracts PASS. Release055 sends actual second DMA src371A00/dst120000/size10/attr44, then waits10s; IOP rejects16byte packet, inputsMATCH. No title/battle/parity.

Original branch RA load, opt1 store,16byte send arguments, JR/LW signed getter and zero wait preserved. Positive tail restores saved registers and original SetReg arguments only after response. No src/recomp modifications. FullRelease055 actual packet reject is a newly measured HLE barrier: pinned iop_sifcmd.c handler returns on opt1 before reading m_newaddr; current host receiver requires20bytes for both options. No readiness fabricated.

Fix IOP INIT_CMD opt1 handler requiring20bytes despite pinned SDK returning before payload address read. Add16byte opt1/event800 and truncatedopt0 rejection regression. Then full IOP RPC startup buffers/handlers/SET_SREG publication lifecycle and retail comparison; never inject readiness.
No active build/probe. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence rpc_request_001/verification.json and native_boot_release_055/result.json.


## Header-only IOP RPC INIT_CMD - 2026-10-04T20:06:00.898358+00:00

Previous goal turn PROGRESS: original RPC request reaches real IOP reject.
IOP INIT_CMD opt1 accepts original16byte header and signals event800 without reading address; malformedopt0/CHANGE_SADDR rejected.95 isolated assertions plus9 productioncontracts Debug/Release PASS. Runtime rebuilt/fullRelease056 PASS; actual DMA16byte accepted(no warning), boot waits10s with inputMATCH. No RPC readiness injected/title/battle/parity.

Pinned SDK option1 returns before reading m_newaddr. Current receiver previously required20bytes unconditionally. Corrected only that validation; opt0 and CHANGE_SADDR still require payload.95 isolated assertions/9 integrated contracts per configuration pass with production runtime rebuilt. Release056 actual two DMA transfers complete, rejection warning removed; native remains in original RPC readiness wait. No forced success or src/recomp changes.

Implement complete scheduled IOP InitRpc after actual event100: owned32x64 packet/data/client buffers, PID1/four handlers/multi-event, actual24byte SET_SREG index0/value1 to learned EE destination, then wait800. Audit EE original handler table dispatch because host g_sifCmdHandlers differs from original RAM registrations; recover original SET_SREG handler returns and retail comparison. Do not seed softwareRPCINIT.
No active build/probe. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence iop_init_opt1_001/verification.json and native_boot_release_056/result.json.


## Original EE command table delivery - 2026-10-04T20:09:51.083563+00:00

Previous goal turn PROGRESS: header-only RPCINIT accepted by IOP.
Incoming SIF command now resolves original EE MAINADDR guest descriptor/live system-user tables and queues real scheduler handler with copied payload.10 integratedcontracts Debug/Release PASS; fullRelease057 PASS, actual unchanged RPC wait10s inputsMATCH. Full IOP RPC producer and missing original SET_SREG1A6920 remain open; no title/battle/parity.

Original translated registration writes guestRAM, distinct from host g_sifCmdHandlers. Dispatch now resolves kernelMAINADDR descriptor and guest pairs (systemoffset12/count16, useroffset20/count24,stride8), bounds and aliases; no hardcoded game descriptor address. Live removals honored, null/truncated/out-of-range tables rejected. Existing host-only registrations preserved when no guest descriptor exists. Synthetic actual scheduler observes handler argument and SET_SREGpayload. Full057 still original wait because no RPC producer.

Recover exact original EE SET_SREG1A6920 and CHANGE_ADDR1A6940 from saved ELF words, test original JR delay store. Then full scheduled IOP InitRpc after event100: owned32x64 packet/data/client buffers, PID1/four actual handlers/multi-event,24byte SET_SREGindex0/value1 to learnedEEdestination, wait800. No fake handler pointers or readiness; retail capture parity required.
No active build/probe. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence ee_cmd_dispatch_001/verification.json and native_boot_release_057/result.json.


## Original EE SIF builtin handlers - 2026-10-04T20:12:27.069944+00:00

Previous goal turn PROGRESS: original command-table delivery.
Original EE SET_SREG1A6920 and CHANGE_ADDR1A6940 recovered;12 ELF words MATCH, Debug/Release contracts PASS including actual scheduler delivery through live guest table into original SET_SREG and supplied RAMwrite. FullRelease058 PASS; actual RPC wait10s inputsMATCH unchanged because IOP producer missing. No title/battle/parity.

SET_SREG original signedloads,indexshift2,ADDU and JRdelaystore restored; CHANGE_ADDR original signedload/JRdescriptorstore.12 ELF identities checked before registration, existing src/recomp preserved. Tests cover0/1/31indexes,signedvalues,highlanes,low32return,store delays,frame preservation and actual scheduler delivery of24byte originalpacket through guesttable into recoveredSET_SREG. Production058 remains originalwait; no manufacturedRPCresponse.

Implement full scheduled IOP InitRpc after actualevent100: owned32x64 packet/data/client buffers, PID1/four actualRPC handlers/multi-event; actual24byte SET_SREGindex0/value1 through learned EE destination and live original handler, thenwait800. Recover real RPC packet layouts/handlers before announcingready, preserve reset/unload/IRQ and retail comparison gaps.
No active build/probe. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence ee_original_handlers_001/verification.json and native_boot_release_058/result.json.


## Original IOP RPC owned packet storage - 2026-10-04T20:15:05.869741+00:00

Previous goal turn PROGRESS: original EE SET_SREG scheduled execution.
IOP RPC owned descriptor/three32x64 tables/PID1/multi-event2 and original outgoing/reply packet allocation implemented after actual event100.181 isolated assertions plus10 integratedcontracts Debug/Release PASS; production runtime rebuilt. No startup caller/handlers/readiness publication yet; last actual058 RPCwait remains authoritative. No title/battle/parity.

Pinned commonRPC header independently identifies recid/pktaddr/rpcid and client/server layouts. Storage requires actual commandevent100, owns6208bytes and completionevent,repeatidempotent; packetbusybit/recid/selfpointer/PID exactincluding uint32wrap; reply modulo32 and indexedclienttable; reset deletesownedRPCevent while preserves sharedcommandevent.181privateassertions/10productioncontracts per configPASS. No RPC ready message/caller yet; full executable unchanged since058.

Implement original IOP RPC END/BIND/CALL/RDATA using pinned sifrpc-common layouts,real queues/client completion/events and actual transport. Current RegisterRpc guest server offsets20/28/2C conflict pinned original0/4/8; repair with evidence. Then scheduled InitRpc prepares storage+handlers after100,sends actual24byte SET_SREG through EEoriginalhandler,wait800; relink/probe. Avoid announcing readiness while handlers absent.
No active build/probe. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence iop_rpc_storage_001/verification.json; last native_boot_release_058/result.json.


## Original IOP RPC server and queues - 2026-10-04T20:18:31.467057+00:00

Previous goal turn PROGRESS: owned RPC packet storage.
IOP RegisterRpc original server layout0/4/8 repaired; actual queue append/pop/remove and incoming CALL field enqueue,CheckStatRpc PID/busybit implemented.209 isolated assertions plus10 productioncontracts Debug/Release PASS; runtime rebuilt. CALL primitive not yet wired incoming delivery; original058 remainsRPCwait, no readiness/title/battle/parity.

Pinned IOPcommon header and exports/source independently prove oldserver offsets20/28/2C incorrect. RegisterRpc now writes0/4/8 callbacks/base and appends link56,void preservesv0. SetQueue/GetNext/Remove maintain active and server lists;CALL stores client/pkt/rpcnumber/sizes/recv/rmode/rid and wakes inactive thread via originalordinal26. CheckStat checks pointer/PID/busybit. Malformed nodes/cycles bounded, no forcedsuccess. Initialfixture arity/nodiscard and mutationordering failures preserved, final209assertions/10productioncontracts eachconfigurationPASS. Lastnative058unchanged,fullrelink deferred until actualRPCproducer.

Implement/wire original IOP RPC END/BIND/RDATA and CALL primitive into real system command delivery with owned reply packets and client completion, then ExecRequest/queue loop. After handlers ready, scheduled InitRpc prepares storage/handlers after100,sends24byte SET_SREG index0/value1 via EE originalhandler,wait800. Relink/probe and retail comparison; do not fabricate readiness.
No active build/probe. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence iop_rpc_queue_001/verification.json; last native_boot_release_058/result.json.


## Original IOP RPC message handlers - 2026-10-04T20:21:19.823588+00:00

Previous goal turn PROGRESS: original serverqueues.
IOP RPC END/BIND/CALL/RDATA actual builtin handlers wired into owned command receiver using original layouts,queues and64byte reply packets.231 isolated assertions plus10 productioncontracts Debug/Release PASS; runtime rebuilt. No startup caller/readiness publication yet;lastactual058RPCwait remains. No title/battle/parity.

Four native builtinRPC handlers independent of fake guestPCs,install requires ownedstorage/builtincommandtable. Live guest override/removal disables builtin. BIND scans actual activequeue/serverlists and sends original END64byte,missingserver returnsnull. CALL enqueues via realreceiver. END updatesclientBIND/callsactualIOPcallback beforepacketfree/signalscompletionbit. RDATA selects indexed/rotating reply, copiesIOPpayload before actualEEcommand. Failedtransport returnsfailure,no completion; SDK alarm retry/pending lifecycle not yetimplemented.231isolatedassertions/10productioncontracts eachconfigPASS. Fixturebaseline conflicts corrected without changing source behavior, failures retained.

Implement ExecRequest using actual IOP server function/GP and original rmode completion paths,queue loop and failed transport pending/retry lifecycle. Then scheduled InitRpc prepare+handlers after100 sends24byte SET_SREGindex0/value1 via original EE handler,wait800. Relink actual boot probe; preserve guest handlers overrides and retail/IRQ/reset parity gaps.
No active build/probe. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence iop_rpc_handlers_001/verification.json; last native_boot_release_058/result.json.


## Original IOP RPC execution and completion - 2026-10-04T20:23:32.785789+00:00

Previous goal turn PROGRESS: fourRPCmessagehandlers.
IOP ExecRequest actual serverfunction/GP and original rmode1 ENDcommand/rmode0 directDMA completion implemented. Pending owned snapshot retries transport without repeating server execution; nullreturn no fallback.245 isolated assertions+10 productioncontracts Debug/Release PASS; runtime rebuilt. Startup/loop continuation still missing,lastactual058wait;no title/battle/parity.

ExecRequest wired ordinal21 to actual IOP executor,uses original function(rpcnumber,buffer,size),capturedGP. Original resultnull remainsnull. Completion snapshot owned beforecall; failed copy pending retryonly, no repeated server sideeffects. rmode1 actualpayload thenENDcommand64; rmode0 payload thenpacket tooriginalEEpktaddr clears recid/rpcid,no command. Synthetic245assertions/production10eachconfigPASS,fullruntime rebuilt. Source remains incomplete for importyield/pending scheduler/RpcLoop; not claiming fullRPCservice or boot.

Implement HLE ExecRequest pending transport continuation/yield and RpcLoop actual queue servicing in IOP scheduler; failed bind/rdata alarm retry remains open. Then scheduled InitRpc after event100 prepare+handlers,sends24byte SET_SREGindex0/value1 via originalEEhandler,wait800. Relink/probe; preserve callback GP/cycle budgeting,reply lifetime,IRQ/reset/retail gaps.
No active build/probe. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence iop_rpc_exec_001/verification.json; last native_boot_release_058/result.json.


## Actual native RPC handshake - 2026-10-04T20:26:14.780833+00:00

Previous goal turn PROGRESS: originalRPCserver execution.
Scheduled IOP InitRpc after actualcommand event100 initializes ownedtables/handlers/event,sends actual24byte SET_SREG to learnedEEbuffer,waitsopt1/event800.252 isolated+10 productioncontracts Debug/Release PASS; fullRelease059 actual originalEEhandler1A6920 executes,RPCINIT1,boot advances to missing1A7AC4,inputsMATCH. No title/battle/retail parity.

No-BIOS standalone ROM startup schedules actual InitRpc aftercommand event100; owned packet0 carries24byteSET_SREG0/1 tolearnedEEaddress,actualhosttransport queues originalEESET_SREG1A6920. Wait800only completedby receivedopt1. Failedwrite waits/retries; no default readinessseed. Actual059trace executes originalhandler,query0 thenoriginalsoftregget returnspositive/tailpublishesRPCINIT1. Boot proceeds into loadmodulehelper thenmissing1A7AC4. Initial fixture undeclaredbaseline corrected, failurepreserved.252private/10productioncontracts eachconfigPASS;full059exit0/inputMATCH. FullRPC importthreadcontinuations/loop/retry/retailtimingstillopen.

Recover original SifLoadModule/helper return1A7AC4 from identified ELF and original call chain1AFE08/1AFC28/1A7A98; test/relink/probe. Also complete RPC importthread wait/yield,RpcLoop and failed bind/rdata retry lifecycle. No boot closure until independent retail state comparisons/title/battle; preserve IRQ/reset/packet lifetime gaps.
No active build/probe. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence iop_rpc_startup_001/verification.json and native_boot_release_059/result.json.


## Original RPC status returns - 2026-10-04T20:30:14.520367+00:00

Original RPC status JR returns 001A7AC4/001A7ACC restored with boolean 0/1 in original delay slots. Four identified ELF words MATCH; synthetic Debug/Release contracts pass. Full Release060 builds and actual native boot crosses status return to missing001AFC84 with input integrity MATCH. No title, battle or retail parity.

Recover original loadmodule status restore/return 001AFC84..001AFC90, test and relink actual native probe. Keep RPC scheduler, retries, retail comparison and all final game acceptance criteria open.
Loadmodule return follow-up currently being built in isolated harness; no concurrent production build. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence rpc_stat_return_001/verification.json and native_boot_release_060/result.json.


## Original loadmodule status return - 2026-10-04T20:32:18.264636+00:00

Original loadmodule status restore/return 001AFC84/001AFC8C recovered from four identified ELF words; restores RA/s0 low64 and SP32 in original JR delay preserving upper lanes/result. Synthetic Debug/Release contracts PASS. Full Release061 build PASS; actual native boot restores SP1FFFB00 and advances to missing001AFE40, input integrity MATCH. No title, battle or retail parity.

Inspect original FUN001afe08 and ELF continuation001AFE40, recover only verified original resumes/epilogues, test and relink/probe. RPC importthread wait/yield, RpcLoop, retries, IRQ and retail comparisons remain open. All eight final acceptance criteria remain unverified.
No active build or probe. Failed Debug compilation retained; fixed runtime macro parameter and target-only Debug/Release reruns PASS. Original src/recomp unchanged. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence loadmodule_return_001/verification.json and native_boot_release_061/result.json.


## Original loadmodule caller resumes - 2026-10-04T20:35:06.884309+00:00

Previous goal turn PROGRESS: original status return advanced actual native boot.
Original FUN001afe08 resumes registered and JR/SPB0 epilogue001B00E0 recovered;175 translated opcode comments match identified ELF, seven omitted words NOP. Full64 busy branch sampled before original zero delay; saved RA/frame preserved. Debug/Release synthetic contracts PASS. FullRelease062 build PASS, actual native boot progresses through InitRpc and into BindRpc packet allocator, stops missing001A7248, inputs MATCH. No title/battle/retail parity.

Recover original EE packet allocator001A7248 onward from identified ELF and pinned EE sifrpc source; preserve interrupt suspension/resume, actual32x64 packet ring/PID/recid semantics. Test exhaustion/wrap/busy/interrupt restore, relink/probe. RPC scheduler/retry/IRQ and independent retail comparisons remain open; all final acceptance criteria unverified.
No active build/probe. Original src/recomp unchanged. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence loadmodule_caller_001/verification.json and native_boot_release_062/result.json.


## Original EE RPC packet allocation - 2026-10-04T20:39:55.528352+00:00

Previous goal turn PROGRESS: original loadmodule caller resumed and snapshot storage recovered.
Original EE RPC packet allocator001A7248..001A72D4 recovered from36 identified ELF words. Actual busybit1, branchlikely-annulled RIDincrement, packet stride64, PIDincrement/zero fallback/wrap and original interrupt restore call/return preserved.36 synthetic matrix cases plus existing boot contracts PASS Debug/Release. FullRelease063 build PASS; actual native allocator returns guest alias203719C0, restores stack1FFFA90 and reaches missing BindRpc resume001A7710, input integrity MATCH. No title/battle/retail parity.

Inspect original FUN001a76d8 and ELF resume001A7710; verify all original opcode comments/omitted delay words, register legitimate resumptions and recover missing original epilogue. Test packet/client fields and actual BIND transport, relink/probe. IOP server discovery,queue lifecycle,IRQ/retries and independent retail parity remain open; all eight final criteria unverified.
No active build/probe. Original src/recomp unchanged. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence ee_rpc_packet_001/verification.json and native_boot_release_063/result.json.


## Original BindRpc resumes - 2026-10-04T20:42:52.532115+00:00

Previous goal turn PROGRESS: original packet allocator advanced actual boot.
Original BindRpc resumptions registered and original JR/SP70 epilogue001A7810 restored.77 translated words match identified ELF; omitted delayword NOP. Debug/Release synthetic contracts PASS for packet/client/sid fields,sync semaphore args,async send args,null allocation error and saved frame. FullRelease064 build PASS; actual native sends64byte BIND packet src203719C0/dst120000 attr44 then10s TIMEOUT, inputs MATCH. Exact waiting PC and IOP completion not yet observed; no title/battle/parity.

Instrument bounded actual SIF command delivery and IOP BIND/END transport, with guest packet/descriptor state and scheduler stop snapshot. Determine exact wait and whether original EE END handler needs recovery; do not infer successful delivery/completion from SetDma log alone. Implement evidence-backed missing behavior, test/relink/probe. Retail/fullgame acceptance remain open.
Four complete snapshots20261004T201229Z/201508Z/201823Z/201833Z moved to D:/DW3-evidence-archive with original C junctions;694/697/698/700 manifest hashes verified. Originals untouched.
No active build/probe. Original src/recomp unchanged. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence ee_bind_rpc_001/verification.json and native_boot_release_064/result.json.


## Actual BIND delivery diagnostics - 2026-10-04T20:46:19.260887+00:00

Previous goal turn PROGRESS: original BindRpc resumed/emitted request.
Bounded production diagnostics locate native BIND wait: IOP receives actualsid80000592/client376168/packet203719C0, no registeredserver, sends64byteEND to actualEEhandler1A7368. Scheduler discards unmapped invocation continuation1A73D0 (RPCEND) and1A6EA4 (tag0). FullRelease065/066 builds PASS, both10s probes TIMEOUT/inputMATCH. Diagnostic evidence changes next repair; no completed handshake/title/battle/parity.

Recover original EE END handler tail001A73D0.. epilogue from identified ELF, preserving clientserver/buf/cbuf, semaphore signal, packetfree and upper register lanes; register/test original resume. Inspect original001A6EA4 DMA IRQ handler tail before recovery. Add meaningful real delivery-to-completion contract, then runtime/relink/probe. IOP sid80000592 service discovery still absent; never fabricate server.
No active build/probe. Diagnostic logs only, src/recomp/original assets unchanged. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence bind_delivery_001/verification.json and native_boot_release_066/result.json.


## Original EE RPC END completion - 2026-10-04T20:51:17.866766+00:00

Previous goal turn PROGRESS: actual BIND missing continuations identified.
Original EE END BIND update001A73D0, semaphore/free/restore continuations and packetfree JR-store001A72EC recovered from21 identified ELF words. Debug/Release synthetic contracts PASS for server/buf/cbuf,negative/positive semaphore dispatch,packet allocated-bit clearing/clientlink/low64 frame restoration. FullRelease067 PASS; actual boot repeats BIND after replies with reusable203719C0 and rotating IOPreply packets; END1A73D0 no longer discarded.10s TIMEOUT/inputMATCH; missingDMAinvocation1A6EA4 and absentserver80000592 remain. No title/battle/retail parity.

Recover original DMA IRQ handler continuation001A6EA4 from identified ELF, preserving actual receive/ack/rearm and saved context; test/relink/probe. Locate original IOP loadfile service sid80000592 and its required ROM module lifecycle before registering any server. Add real END delivery/completion integration contract and independent retail comparison; do not fabricate server/readiness.
No active build/probe. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence ee_rpc_end_001/verification.json and native_boot_release_067/result.json.


## Original DMA IRQ continuation - 2026-10-04T20:55:48.772436+00:00

Previous goal turn PROGRESS: original END completion restored.
Original SIF IRQ interval1A6EA4..1A6FB4 extracted additively from preserved generatedpart181;69 ELFwords verified (six omitted NOP). Debug/Release boot contracts PASS; empty packet original branch skips EI and restores low64/SP90. FullRelease069 builds; actual native IRQ passes1A6EA4 and reaches discarded helper1A4C10.10s TIMEOUT/inputMATCH; BINDserver80000592 absent, no title/battle/retail parity.

Recover/register original syscall wrapper1A4C10 (DMA receive/rearm) and inspect actual syscall semantics before claiming hardware completion. Then audit nonempty packet copying/live handler dispatch and full IRQ saved context. Locate original loadfile sid80000592 service module/lifecycle and implement evidence-backed service; do not fabricate server. Add meaningful integration tests and retail comparisons.
No active build/probe. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence dma_irq_resume_001/verification.json and native_boot_release_069/result.json.


## Original DMA receive syscall - 2026-10-04T21:03:36.753066+00:00

Original syscall wrapper001A4C10 recovered from4 XL ELF words. SCPH39001 ROMDIR identifies KERNEL and syscalltable78 target80006348;13 original words establish SIF0 CHCR0/QWC0/CHCR184/readback. HLE now performs those MMIO writes and preserves v0 upperlane per original LW. Debug/Release contracts PASS for reset/rearm/return,nonempty32byte IRQcopy,system/user live table dispatch and out-of-range rejection,EI/savedframe/JR. FullRelease070 PASS; actual10sboot TIMEOUT/inputMATCH with no discarded1A4C10; repeated BINDserver80000592 absent. No title/battle/retail parity.

Locate original ROM LOADFILE module and startup/lifecycle for SID80000592; inspect module loader and IOP import/scheduler support before implementing actual service. Do not fabricate server or bind success. Audit duplicate HLE-command and original DMA IRQ delivery/receive lifecycle; current register rearm does not establish cycle/FIFO/reset parity. Add independent retail comparisons, title and first battle. All eight final acceptance criteria unverified.
No active build/probe. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence dma_chain_helper_001/verification.json and native_boot_release_070/result.json.


## Original CDVDFSV identification and RPC loop - 2026-10-04T21:10:54.036076+00:00

Previous goal turn PROGRESS: original DMA receive syscall fixed and tested.
Original IOPRP253 provenance corrects SID80000592 to CDVDFSV (LOADFILE uses80000006). Original extracted CDVDFSV executes in production IOP interpreter,creates3threads/registers realserver164A0/buffer174A0,and completes actual BIND+queued CDINIT with real END/return1 in isolated Debug/Release transport probe. Nonreturning RpcLoop now retains importPC,services one queued request/retry per slice,uses actual SleepThread/wakeup counts,retains pending completion without repeated server execution,and cleans owned state on RPC removal/reset.269 isolated assertions PASS both configs; IOP runtimes and fullRelease071 buildPASS. Actual fullboot still10sTIMEOUT/inputMATCH/server592absent because original module is not yet integrated. Original module logs unsupported cdvdman47; no title/battle/retail parity.

Integrate original CDVDFSV from original IOPRP253 via additive reviewed module extraction/VFS path and startup after real RPC readiness. Correct prior LOADFILE-service identification; never alias SID592 to LOADFILE. Inspect original cdvdman47 export/side effects before declaring module startup valid; current unsupported import is retained evidence. Audit asynchronous RPC InitRpc wait/yield and module lifecycle. Then actual relink/probe recover measured EE CDINIT returns; title,first battle,allcontent and eight acceptance criteria remain unverified.
No active build/probe. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence rpc_loop_001/verification.json,module_provenance.json and native_boot_release_071/result.json.


## Original CDVDFSV startup contracts and cleanup - 2026-10-04T21:20:14.641353+00:00

Implemented cdvdman47 owned aligned42128-byte FSV scratch with stable contents/reset lifecycle; original getter and pinned SDK references retained. Buffer contracts and original CDVDFSV isolated BIND/CDINIT pass Debug/Release without missing imports. Added original IOPRP extraction into data/iop/dw3xl with exact hashes/idempotence/no replacement;2 extraction tests pass. Standalone startup queues physical CDVDFSV after actual RPC ack, rejects ROM substitution/duplicate,consumes once and clears on reset. Actual queued module integration probe passes Debug/Release including CDINIT return1 and no pre-ack server. FullRelease072 rebuild currently active; not yet native boot evidence. Cleanup removed4382 historical build intermediates/3941146661bytes, preserving current builds,binaries,originals,captures,logs/manifests.

Check existing fullRelease072 build process/log/exit before any new build or overlapping edit. Header change triggers recomp unity rebuild; do not restart. When exit0 run bounded native_boot_probe to native_boot_release_072 using original XL dump/ELF and inspect actual CDVDFSV/EE continuations. If build fails preserve failure and repair. Current last fullboot071 remains10sTIMEOUT/inputMATCH/server592absent. Title,battle,retail parity and all eight final acceptance criteria remain open.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence cdvdfsv_startup_001/verification.json.


## Verified combined extracted data and queue lifecycle - 2026-10-04T21:27:39.843491+00:00

Previous goal turn PROGRESS: original CDVDFSV queued startup plus cleanup implemented/tested.
Original ISO file extent hashes match all180 extracted game files (DW3:64,XL:116). Staged both releases under project data/dw3_base and data/dw3_xl through D-backed junctions,5084888300bytes copied and every project path rehashed. Source originals preserved.36 shared filenames:22identical/14different; variants retained separately. Original ELF descriptor manifests match2123Base/3015XL rows; complete payload hashes show2121of2123 shared numeric RIDs differ,only2identical. No automatic alias/filename precedence installed. Added idempotent source-verified data preparer with replacement/traversal/disk checks; synthetic staging testPASS. Queued physical module failure/exception/no retry/reset/capacity contractsPASS Debug/Release. Native boot runner now optionally stages hashed IRX/provenance under isolated cwd/data/iop;10testsPASS including original mutation detection. ComputerUse observed live Microsoft C++compiler CPU activity; fullRelease072 still active,not title/battle/parity.

Inspect current fullRelease072 PID25168/log/exit; do not restart or overlap compiled source edits. Public runtime queue API was added but ps2_runtime.lib timestamp remains14:02beforechange: after fullbuild terminates, rebuild runtime Debug/Release before eventual relink; preserve any unresolved symbol failure. Move queued path-copy inside noexcept try after build ownership ends,then retest. Run native_boot_probe with --iop-root data/iop after final link to stage module correctly. Actual game mounting/table transitions,title,battle,retail comparison/all8criteria remain open. Future executable should accept explicit data-root instead of relying on cwd; current staged asset sets are preparatory and original XL dump remains current boot argument.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence combined_asset_audit_001/verification.json.


## Native extracted VFS all-resource comparison - 2026-10-04T21:33:10.917791+00:00

Previous goal turn PROGRESS: dual original assets staged and verified.
New DualExtractedVfs reads both staged extracted releases directly from data without ISO runtime dependency. Full original US ELF/archive SHA256 and ELF-authored descriptor extents validated before atomic publication of both mounts. Explicit version+RID API has no cross-game numeric fallback;safe relative files/bounded reads,duplicate/invalid profiles,source mismatch,unbacked tables,truncation and same-size timestamp changes rejected. Synthetic contracts and actual original mounts2123Base/3015XL PASS Debug/Release. Both current native readers read all5138payloads; identical TSV SHA256 c5dbac3b304efa6ac439bea8aec52fb8c1a95fca06f744afaba9de5b2c0fffb4. Independent Python direct original-archive reads match every payload size/FNV1a64. Not yet linked to production fate_game or game-table transitions. FullRelease072 remains live recompiling unity47 at last observation; no new fullboot/title/battle/parity.

Continue existing fullRelease072 build PID25168; never restart based on observation timeout. After ownership releases, rebuild stale ps2_runtime.lib Debug/Release for queueIopModuleAfterRpcInit; move queued path copy into try in noexcept runEeCycles and rerun queue lifecycle. Link/test existing CDVDFSV changes first with native_boot_probe --iop-root data/iop; inspect real missing EE continuation. Then integrate tested extracted VFS sources and explicit data root into production startup,route current XL CD root to extracted set; version-aware table merges/no-disc-swap require original callsite evidence. All8acceptance criteria remain unverified.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence extracted_vfs_001/verification.json.


## Native resource SHA256 and additional cache cleanup - 2026-10-04T21:38:26.169430+00:00

Native DualExtractedVfs Debug and Release payload SHA256 match all 5138 original DW3/XL resources, using Windows BCrypt versus independent Python original archive reads. Known empty/abc hash vectors pass; reusable verifier rejects missing, extra, duplicate, malformed and mismatched observations. Original EE SifCallRpc review verifies 119 translated opcode comments and identifies missing original JR/SP return plus legitimate call resumes; no production patch applied. Cleanup additionally removed 32 regenerable Python bytecode files (694636 bytes), no failures. Original sources, assets, evidence and active Release072 build preserved. No title, battle or gameplay parity.

Check existing Release072 PID25168/log/exit without restarting. When ownership ends, move queued path copy inside noexcept try, rebuild stale ps2_runtime Debug/Release, rerun queue lifecycle and relink; preserve any original link failure. Run bounded native probe with --iop-root data/iop. Recover only measured original EE continuations. Production extracted VFS integration and all eight acceptance criteria remain open.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence knowledge/evidence/native-resource-sha256-20261004.json.


## Original disc flow and service verification - 2026-10-04T21:41:49.049450+00:00

Original XL ELF static review ties prompt table29C960 and jump table2CEA30 to nine-state disc flow23F770, with Base/XL identity strings2CEA18/2CEA08 selected before SearchFile at23FA08. 156 translated comments match original words in bounded disc interval. 23F5D8 invokes interactive confirmation 23F660, not standalone disc identity; original routine calls105E40 before return and its content effects must be retained. Original queued CDVDFSV SCMDserver593 executes RPC12/status and RPC3/disctype and completes real owned RPC END in isolated Debug/Release probes, returning current HLE pause10 and PS2DVD20 without missing imports. Therefore state3 waits for shellopen1 while current HLE returns pause10; no forced success patch applied. This is static flow/current HLE evidence, not retail drive or gameplay parity.

Continue existing Release072 buildPID25168 without restart; compiler PID22668 CPU advances, unity79/codegen at last check. When terminal, move startup queue copy inside noexcept try, rebuild stale ps2_runtime Debug/Release, retest/relink and bounded --iop-root native boot. Recover measured EE SifCallRpc continuation if required. Independently inspect original105E40 source-selection/archive-load effects and callees 16BBC0/16BCB0/16BC60; integrate explicit versioned extracted VFS before adapting tray flow. No title/battle or final acceptance criterion closed.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence original-disc-flow-20261004.json and disc_service_001/verification.json.


## Original archive selection and native sector adapter - 2026-10-04T21:45:10.074130+00:00

Original105E40 static data flow identifies selector gp-7CF8 and filename table24B150: BaseLINKDATA cache24B140; nonzero selector caches BGM,LINKDAT2, LINKOVL at24B144/148/14C. It performs SearchFile retries/cache writes, not payload merge. New native ExtractedSectorView assigns disjoint synthetic sectors to explicit version+path, keeps cached Base identity after XL lookup, normalizes bounded PS2CD paths and rejects missing files,cross-file reads, unknown/zero sectors,padding invention and changed archive metadata. Added bounded extracted file-range API; strict /W4 /WX Debug/Release synthetic contractsPASS. Native first/last sectors of both original archives and both BGM variants (8perconfig) SHA256MATCH independent original reads. Production integration deferred while Release072 owns build inputs; originals and src/recomp preserved. No title,battle or gameplay parity.

Observe existing fullRelease072 PID25168/log/exit; compiler22668 CPU continues,unity97codegen at lastcheck. On terminal preserve any failure, move startup queued path copy inside noexcept try,rebuild stale runtime Debug/Release,rerun queue/module contracts,relink and bounded native probe --iop-root data/iop. Then integrate explicit data-root and tested dual extracted VFS/sector adapter into actual CDVD file consumers; preserve original cached extent semantics. Remaining source table import readers and tray adaptation need original callsite evidence. All eight final criteria remain open.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence extracted_sectors_001/verification.json.


## Release073 and original CallRpc recovery - 2026-10-04T21:55:40.517863+00:00
Previous goal turn NO_PROGRESS: user-requested status report only; current turn resumes measured repair.
Release072 terminal exit1: stale runtime queue symbol; original failure preserved. Moved queued startup path-copy inside noexcept try; runtime Debug/Release rebuilt exit0. Queue missing/throw/reset/capacity, original CDVDFSV BIND/CDINIT and RPC269assertion contracts pass both configurations. Release073 final link exit0; bounded native probe inputMATCH loads original CDVDFSV and binds actual server164A0, then stops missing original EE SifCallRpc resume1A7900. No title/battle/parity.
Registered twelve original generated CallRpc resumes and additive JR1A7A8C with ADDIU SP+C0 delay. All123 original function words validated against identified XL ELF before dispatch registration; generated source unchanged. Added null-packet/low64 restores/high64 preservation/32bit wrap-signextension contracts. Isolated Debug contract build currently active session13389; no repair success claim before tests. Evidence call_rpc_resume_001/original_verification.json and runtime_queue_relink_001 logs/exits. Progress record updated from stale072 to actual073.
Next: await existing isolated contract build; run Debug/Release contracts, repair any failure; relink uniqueRelease074 and bounded native --iop-root probe. Then production explicit-data-root/CDVD extracted-sector integration and original versioned table transition. All eight final criteria open.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## CallRpc actual boot advancement
Final Debug/Release003 contractsPASS; Release077 link exit0. Native probe inputMATCH passes prior1A7900 and sends CDVDFSV RPC, then TIMEOUT with missing invocation1A73B8 (RPC END callback path). Production keeps existing1A797C,1A798C,1A7A64 translations, original words match; historical074/076 registration failures and075compile failure preserved. Next recover callback segment and test/relink/probe; no title/battle or final criterion closed. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Release079 measured CDVD startup advancement
Original RPC END callback segment1A73B8..CC recovered (BEQL annulled delay, null route, JALR argument/return, reload client); Debug/Release005 PASS. Actual078 passes prior RPC END timeout then stops1AF43C. Original CDVD semaphore function1AF3E8 words and omitted JR1AF474/SP+50 verified and three resumes registered; Debug/Release006 contractsPASS. FinalRelease079 link exit0; native probe inputMATCH completes all measured prior stops and now missing1AF5F4 after original1AF5D0. No active build/probe remains. Historical failures retained; originals/src/recomp unchanged.
Next inspect identified original FUN1AF5D0 and1AF5F4 continuation, verify original words and meaningful ABI tests, relink/boundedprobe; then actual combined VFS/CDVD routing and versioned content transition. All eight finalcriteria remain open; no title,battle/gameplay parity. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence call_rpc_resume_001/verification.json and native_boot_release_079/result.json.


## Release081 CDVD command initialization and game return
Previous goal turn PROGRESS: actual079 passed measured RPC/semaphore stops. Original1AF5F4..644 (21words) reconstructed additively: SIF command80000012 handler1AF590 argument0, preserve interrupt state and conditional enable, original completion flags/low64restore/JRSP+40. Original17FEC0..FEE0 (9words) verified and generated resume registered; no invented return or resources. Final Debug004/Release004 contractsPASS, Release080/081 link exit0. Native081 inputMATCH passes1AF5F4 and17FEC0; next missing1ACB3C at original module load1ACAC0. No build/probe active. Historical test expectation failures preserved, sources/originals unchanged in src/recomp.
Next recover original module loader resumes1ACB3C onwards and JR1ACBC8 only after ELF verification/ABI tests; relink/probe, then actual dual extracted VFS/CDVD integration/versioned tables. All8final criteria open; no title/battle/parity. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence cdvd_init_resume_001/verification.json/native_boot_release_081/result.json.


## Release084 module loader and interrupt removal
Previous goal turn PROGRESS: actual081 reached1ACB3C. Verified all68original loader1ACAC0..BCC words and62translated comments; added missing call/checkpoint resumes/JR while retaining existing split entries. Original interrupt-removal1A53D0..5434 words verified; resumes/JR recover syscall result and prior interrupt state. Existing1A5400 preserved after measured083conflict (failure retained). Final Debug005/Release005 contractsPASS, Release084 link exit0. Actual084 inputMATCH passes1ACB3C and1A5408, now missing1A6C28 at original SIF/RPC deinitialization. No build/probe active; src/recomp/originals preserved.
Next inspect1A6C18 resumes1A6C28/38/JR1A6C44 and1A7208 truncated return; verify/test/relink/probe. Continue production dual extracted VFS/CDVD/versioned table integration after boot. No title/battle or eight finalcriteria closed. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence module_loader_resume_001/verification.json and native_boot_release_084/result.json.


## Release085 original SIF/RPC deinit continuation
Previous turn PROGRESS: actual084 reached1A6C28. Original1A6C18 and1A7208 words/comments verified; missing resumes and JRSP+10 recovered. Debug/Release contractsPASS including exact handler argument and distinct initialized-flag stores/low64return/high64preservation. Release085 link exit0; actual boot inputMATCH passes1A6C28 and nested SIF/RPC returns then invokes unimplemented syscall0x6B and stops missing1AC93C in original1AC920. Pinned SDK kernel.S/syscallnr.h prove0x6B=SifStopDma, kernel.h documents SIF0disable; existing named stub silent0 and numeric dispatcher absent. No new runtime stub or guessed reboot applied.
Next inspect identified BIOS/kernel0x6B implementation, implement evidence-backed SIF0stop/numeric routing with lifecycle tests; recover original1AC920 resumes/JR; rebuildruntime Debug/Release and relink/probe. Production dual extracted VFS/CDVD route still required. No active build/probe. All8final criteria open, no title/battle/parity. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence rpc_deinit_resume_001/verification.json/native_boot_release_085/result.json.

## Original StopDma and reboot packet resumes — Release087
Original BIOS syscall6B now stops SIF0 CHCR/QWC and returns signed readback, preserving unrelated channels/register lanes; numeric route added. Original79reboot words/76comments verified;10generated resumes+missingJR/SP40 recovered without changing generated sources. Original7game-return words17FEE4..FF00 verified and resume added. Debug/Release004 contractsPASS including exact packet/path/flags, full64branch, call arguments, register acknowledgements and low64restore/high64preservation. Initial fixture failures retained: tests placed after stopped scheduler fell through call boundaries; moved before schedulerstop and explicitly selected ContinueToTarget. ActualRelease086 inputMATCH passes reboot returns, stops17FEE4. Release087 linkPASS; see native_boot_release_087/result.json/stderr.bin for measured next barrier. No title/battle/IOP reboot lifecycle/parity claim.
Next recover measured1ACA88 sync continuations/JR from original ELF, verify actual SIF register4 readiness and reboot lifecycle rather than forcing ready; continue actual dual extracted CDVD VFS integration. All8finalcriteria open. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. No active build/probe after087.

## Release090 original IOP sync and polling
14original IOP sync words/11translated comments and8game wait words verified; recover sync resumes/JRSP10 and17FF00 wait resume; preserve existing17FEF4. Debug/Release004 contractsPASS exit0 Release090 linkPASS; actual10s probe TIMEOUT, inputMATCH. Original sync observes register4=20000 and masks40000, returning0; no readiness injected.
086missing17FEE4;087missing1ACA98;088missing17FF00;089conflict existing17FEF4 retained;090 preserves original retry entry.
Investigate original BIOS/IOP SIF reset command3 and SIF register4 set semantics. Current built-in command HLE only implements0..2 and zero table entry consumes command3 without a handler; this is static implementation evidence, not proof of complete causal diagnosis. Recover actual reset/lifecycle and register semantics with independent references/contracts; never force ready. Production dual extracted CDVD VFS remains pending.
No title,battle,IOP reboot lifecycle or retail/fullgame parity. All8acceptance criteria open. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. No active build/probe remains. Evidence iop_sync_resume_001/verification.json/native_boot_release_090/result.json.

## Release091 original SIF registers and original REBOOT probe
Previous goal turn PROGRESS: recovered reboot/sync/wait continuations, actual090wait.
Replaced software-only SetReg physical path with existing hardware register implementation; bounded kernel software bank; removed previous-value software return; preserved high64 on Get/Set. Runtime Debug/Release rebuilt; SIF11/11 contract cases Debug/ReleasePASS; complete boot continuation contractsPASS both configs. Initial isolated CMake missing private IOP includes fixed, failure retained.
Release091 linkPASS; actual10s probeTIMEOUT/inputMATCH. Original reboot now correctly clears SMFLAG from20000 to0; sync keepsreturn0/no readybit40000. No forced transition.
Extracted original ROM REBOOT@46260/7C1 with SHA2562b6cfb7a6f8251629d39480349c739fb105fab97b3cae1ff7d984bf5134eb8b4. Isolated Debug/Release004 runs actual entry and thread; after actual INIT_CMD, command80000003 handler copies original path/mode into103F0BSS, wakes shared event400, prints Get Reboot Request From EE, acknowledges MSFLAG20000, then reports unsupported modload:4 ReBootStart@102D8. Probe asserts these effects and limitation; not production integrated.
Recover actual original MODLOAD export4/ReBootStart and IOPBOOT/UDNL lifecycle with pinned SDK+BIOS before HLE reset implementation. Pinned modload.c shows priority7, resident-library termination EI/DI, commandcopy480 and IOPBOOT call(ramMB,flags,cmdptr,0). Need reset ownership/services/module queue/loaded IRX restart/readybit from actual lifecycle, not silent1. Keep original REBOOT probe out of production until lifecycle implemented. Then production combined VFS/title/battle.
All8finalcriteria open; no title,battle,combined gameplay or retail reboot parity. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. No active build/probe. Evidence sif_register_kernel_001/verification.json and reboot_module_probe_001/probe_Debug_004.log/probe_Release_004.log.

Original MODLOAD follow-up: exact ROM export4=1518 (table file1600), CpuExecuteKmode helper1508/syscall12, termination proc12E0..1504 verified. Original path copy0480 and IOPBOOT JALR agree with pinned SDK, but original ROM version uses direct DI resident termination; do not transplant current SDK priority/EI behavior without version match. Identified source modules preserved with BIOS hashes in reboot_module_probe_001/boot_modules_provenance.json; IOPBTCONF includes REBOOT and EESYNC. Next investigate IOPBOOT/UDNL boot and EESYNC publication and implement owned deferred reset safe point; no production REBOOT integration yet.


## LOADCORE immediate callback and actual game EESYNC — 2026-10-04

Original BIOS LOADCORE export20 immediate path executes callback with next.callback=1, boot=0 and caller GP, writes optional callback result and returns0. Original BIOS EESYNC callback publishes40000 preservingCMDINIT. Debug/Release original+synthetic ABI/status tests PASS. Synthetic fixture relocation error and aborted assertion retained. Original IOPRP253 EESYNC tests FAIL both configs with missing ioman4/open,8/read,5/close; BIOS variant success is not game-module parity.

Release091 is latest native probe; TIMEOUT10s/inputMATCH, no title or battle.
Recover actual IOPRP253 EESYNC file paths/effects and IOMAN imports; implement owned deferred reboot at safe scheduling boundary, then production relink/probe.
All eight final acceptance criteria remain open. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence reboot_module_probe_001/eesync_verification.json. No active build/probe.


## Original game EESYNC file imports — 2026-10-04

Implemented bounded read-only IOMAN open4/lseek8/close5 via existing host file adapter. Signed seeks, descriptor0/capacity/reuse, invalid pointers/modes/whence/closed handles and reset ownership pass Debug/Release. Original IOPRP253 EESYNC now starts without missing imports and publishes exactly40000 in an isolated host with unavailable ROM filesystem. BIOS EESYNC ABI/status and original REBOOT regression pass both configurations. Actual ROM SECRMAN present-file allocation path and boot-collection queue remain unverified. Not production integrated or completed reboot.
Correction to previous note: ioman8 is lseek, not read; pinned exports and original words preserved. Historical failed tests retained.
Integrate native ROM file adapter with provenance and inspect exact SECRMAN allocation path; implement safe deferred ReBootStart and startup ordering, then relink and bounded probe.
No title/battle; all eight final criteria open. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. Evidence reboot_module_probe_001/ioman_verification.json.


## Native ROM adapter and owned reboot request — Release092

Native IOP ROM handles now read mounted original byte snapshots, retain ownership across remount, accept empty files and reject missing/closed/null reads. Actual runtime adapter executes original IOPRP253 EESYNC with original BIOS SECRMAN; exact17633 size selects256byte allocation. SIF/ROM13/13 contracts PASS Debug/Release. Original REBOOT request captures owned command/flags at modload4, stops execution into old RAM, consumes once only outside activeCPU/callback stack; explicit reset clears old modules/threads. Isolated deferred probe PASS both configurations. FullRelease092 linkPASS, actual10s bootTIMEOUT/inputMATCH, still SifGetReg4=0 at return1ACA98. No title/battle.
Initial original-allocation test expectations wrongly assumed freed heap cursor rewinds; actual allocator does not. Corrected fixture tests retained alongside failures. Initial missing include compile failure retained.
Recover exact UDNL image selection and LOADCORE boot callback order against original words; build explicit owned reboot plan from original IOPBTCONF/EXTINFO and requested IOPRP253. Integrate reset at subsystem scheduling boundary, start HLE/physical services in original order, publish ready only via actual EESYNC callback. Then production ROM profile, REBOOT startup, relink/probe.
All8finalcriteria open. GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. No active build/probe. Evidence reboot_module_probe_001/rom_deferred_verification.json.


## Original LOADCORE callback order and module selection — 2026-10-04

Implemented owned LOADCORE boot callback collection and finish: priority0..3, per-entry GP, bootarg1, a0 collection start except priority3 next entry, priority2 trailing entry cleanup; original BIOS4F0..5C4 and selected IOPRP25357C..650 agree. Original game EESYNC with actual BIOS SECRMAN starts without ready; publishes40000 only at callback finish. Debug/Release original and synthetic priority/argument/GP probes PASS; original REBOOT capture, immediate EESYNC and IOMAN regressions PASS. Original BIOS IOPBTCONF order and ROMDIR EXTINFO type2 version selection derived for29 modules: selected game LOADCORE/EESYNC/SIF/CDVD, BIOS REBOOT/SECRMAN. Not production restart integration.
Original BIOS ROMDIR includes repeated padding entries named dash; parser records unique padding IDs and preserves offsets, not duplicate module aliases.
Release092 remains latest executed game: linkPASS/TIMEOUT10s/inputMATCH, ready0; title/battle absent.
Implement subsystem consumption of owned request after emulator scheduling returns. Build validated explicit native reboot profile from original BIOS/IOPRP selected29-module plan, choose supported HLE versus physical entries and preserve provenance. Reset module manager/services/RPC/threads/memory at safe point, restore selected services in original order, complete original EESYNC through boot callbacks; integrate ROM profile+REBOOT startup, runtime/relink and actual boundedprobe.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED. No active build/probe. Evidence reboot_module_probe_001/boot_callbacks_verification.json.


## Original reboot consumer and selected29 startup — 2026-10-04

Original REBOOT consumed safely once; selected29 startup order and original EESYNC last callback PASS Debug/Release. MODLOAD12 and two-descriptor IOMAN tty repaired. Not production or game parity.
Production integration added verified original module manifest, ROM mounts and exact game command MODULES path. Release093 build started; do not restart while active. Post-reboot EE INIT_CMD/RPC requires actual probe. Previous turn PROGRESS; evidence consumer_verification.json includes retained fixture/version failures and limitations.
User renewed cloud authorization: Azure up to available USD[private balance], AWS USD120 shown in supplied screenshots. No new cloud calls made; existing ledger and reconciliation remain required. Computer Use stopped previous turn because browser URL could not be identified confidently; do not bypass this policy.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED; all8 acceptance criteria open.


## Native reboot and continuation catalog — Release098

Release093 consumed original REBOOT and selected29/EESYNC readiness60000;094 completed the new EE handshake;095 installed6,521 missing aliases.096 installed7,089 aliases/returns and passed23A768. Original four-word epilogues1ABD78 and1A88BC pass Debug/Release and are integrated in098. Latest native098: PROCESS_FAILED/inputMATCH, missing1B0308; IOMAN31@29040 also unresolved. No title/battle. Catalog7,636 aliases+589 tails; hardened validator15/15,9,396 canonical sources reread, generated hash identical. Boot contracts Debug/Release pass; native-probe tooling10/10. First wrong build-target path retained as a failed command. Evidence: reboot_module_probe_001/resume_progress_verification_001.json.

Quota correction: local Adviser config selects Azure deployment gpt-6.1-sol-1; Astra auxiliary agents hit Azure westus3 token limits. Router mini review1,414tokens is one separate request, not total agent usage. AWS blocked before inference by unknown prior cost. Billed balance unknown; earlier ChatGPT-only assumption was incorrect.

User authorizes replacement/publication of gzrt3/DW3RE-AI-WORKSPACE and disk compaction. Staging D:/DW3-GitHub-Publish-20261004, original Git history preserved in D:/DW3RE-AI-WORKSPACE-before-20261004.bundle. Preserve originals and unique history in verified archives before cleanup. Native task resumes after publication with1B0308/IOMAN31; all8finalcriteria open.
