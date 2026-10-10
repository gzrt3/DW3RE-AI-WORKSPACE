# RPC guest ABI contract

This standalone C++20 test checks the runtime's four SIF/RPC guest structures
against 32-bit numeric sizes, member widths and offsets derived from
[ps2sdk ac92a9f](https://github.com/ps2dev/ps2sdk/blob/ac92a9f657d2e531dd8f060250b07f2a5ac6dea5/common/include/sifrpc-common.h).
The reference revision, header hash and layout facts are in `reference.json`.
No SDK implementation or SDK headers are copied or linked.

From the repository root on Windows with MSVC and CMake:

```powershell
cmake -S research/sdk_contract -B out/sdk-contracts -G "Visual Studio 17 2022" -A x64
cmake --build out/sdk-contracts --config Release
ctest --test-dir out/sdk-contracts -C Release --output-on-failure
```

Repeat the build and test with `Debug` for the second configuration.
`DW3_RUNTIME_ROOT` can select another host runtime checkout; pass its full path
as one quoted CMake argument.

These 72 compile assertions protect the wire layout. Passing them does not
establish callback execution, DMA completion, RPC timing, cache coherence,
game-specific service behavior or native boot. Historical prebuilt runtime
libraries must still be rebuilt and verified separately.
