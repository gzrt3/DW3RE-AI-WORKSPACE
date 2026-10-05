# Optional native host VSync

The host presenter accepts `--vsync on|off`, with off as its default. The option
enables live presentation. The bounded observer forwards `-VSync on|off` and
records the request in its launch evidence. Internal PS2 VBLANK, cycle events,
IRQ ownership and guest field/tick behavior remain enabled.

SDL2 must be at least2.0.18; the normal build script pins2.30.11. Creation tries
an accelerated renderer, then software. The explicit setter runs after creation
because SDL_RENDER_VSYNC can override creation flags. The report checks SDL's
applied mode and names the renderer. SDL may simulate pacing when its backend
cannot control synchronization. A successful setter/flag is not evidence of
physical monitor synchronization or VRR.

## Verification

Evidence: `artifacts/native_pipeline_20261005/host_vsync_016`.

- Four cases per Debug/Release: empty GS and known synthetic VRAM, each with
  VSync on/off and an opposite global hint. /W4 /WX builds and contracts PASS.
  EE/IOP memory, stack/argument registers, event flags, GS source pixels,
  VBLANK ticks and CSR field parity remain coherent. Dummy/software output
  is synthetic host verification, not original-game rendering.
- Fourteen bounded-probe tooling tests PASS, including exact mode forwarding,
  recorded provenance and invalid/unbounded mode rejection before launch.
- Full Release build through scripts/build_native.ps1 PASS. Invalid and missing
  executable CLI values return2 before loading any game assets.
- Two real live probes accept SDL on/off on the selected direct3d renderer.
  Both record25 observations, zero presentations, inputMATCH and process failure
  at the prior missing wrapper1A4500. Their failures are preserved; no title,
  movie, battle, physical sync or increased simulation frame rate is claimed.

To repeat focused contracts after building the separately owned runtime/SDL:

```powershell
cmake -S . -B D:/DW3-Presenter-Contract-Build -G "Visual Studio 17 2022" -A x64 -DFATE_NATIVE_PRESENTER_ONLY=ON -DFATE_RUNTIME_BUILD_DIR=D:/DW3-Publication-Build/runtime -DCMAKE_PREFIX_PATH=D:/DW3-Publication-Build/sdl-install
cmake --build D:/DW3-Presenter-Contract-Build --target fate_native_presenter_contract --config Release --parallel 4
& D:/DW3-Presenter-Contract-Build/bin/Release/fate_native_presenter_contract.exe
```

Repeat with Debug. The focused target has an empty dispatch table and does not
link or execute the retail translated corpus. The game target retains its real
table. Run `scripts/observe_native.ps1 -VSync off -Seconds 120` for a bounded
real observation; it will preserve a new evidence directory and any failure.

The presenter's callback still runs on the original executor, and presentation
can block it. Decoupled host presentation, interpolation and increased
simulation speed require separate implementation and original-behavior tests.
Removing guest VBLANK would break wait/interrupt semantics rather than solve
the remaining boot barrier. All eight final acceptance gates remain open.
