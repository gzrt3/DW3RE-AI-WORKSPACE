# Phase 8 resource runtime

C++20, synchronous and single-threaded. Original assets are read-only. This is a
resource service, not an emulator, renderer or gameplay implementation.

## Build and test

```powershell
cmake --preset msvc-x64
cmake --build --preset msvc-x64-debug
cmake --build --preset msvc-x64-release
ctest --test-dir out/msvc-x64 -C Debug --output-on-failure
ctest --test-dir out/msvc-x64 -C Release --output-on-failure
```

## CLI

```powershell
& '.\out\msvc-x64\Release\resource_runtime.exe' `
  --evidence '.\artifacts\phase7_precomputed_evidence.json' `
  --root C:/DW3 --game dw3 --rid 2 --child 0 --profile length16 `
  --mode decode --budget 33554432 --output-dir '.\artifacts\phase8\portrait'
```

Use `--symbol dw3:rid:2` instead of `--game/--rid` for the explicit numeric
catalog. These numeric aliases do not assert game-level semantic equivalence.
`--mode inspect` reads headers/padding; `raw` emits the requested payload;
`decode` emits tightly packed RGBA8888 and stored alpha as separate files.
`--frame N` selects a frame; child selection requires an explicit profile.
Manifests include source/parent/output hashes, trust, ranges, dimensions,
transformation profile and physical read counters. Paths and timestamps are
excluded from their canonical content. The output file is atomically replaced.

The default source trust is `PRECOMPUTED_ATTESTATION`: source identity and sizes
are pinned, and payload hashes/ranges come from the supplied, locally attested
Phase 7 evidence. This does **not** rehash originals. The evidence file's own
hash identifies the attestation used. `--verify-full 1` explicitly verifies full
ELF and BNS hashes at registration; neither mode hashes a whole BNS on each read.
The parser accepts a bounded ASCII/integer JSON subset used by this schema,
rejects duplicate keys, and caps input at 16 MiB/depth 32/250,000 nodes.

## Runtime contract

Register sources against independent expected identities before publishing.
Snapshots copy the registry and explicit symbol mappings; unknown sources/RIDs,
incompatible regions, invalid overlay predecessors or external dependencies
abort publication. The previous snapshot stays active. Pass a previous mapping
set again to undo overlays. Existing handles retain their original snapshot;
new handles see the new generation. `MergedMount.active_mappings()` can be
imported, but its state name is not accepted as proof of source validity.

`ResourceView` owns a shared byte source; child slices are parent-bounded and
retain index paths. Reads check canonical containment, file size/time changes,
arithmetic and I/O limits. Source files must remain immutable: replacing bytes
while preserving both size and timestamp is outside this mutation detector;
request full verification when the source trust changes. No concurrent source
writer or concurrent use of the service is supported.

The LRU budget covers cached raw/decoded bytes plus reserved decoding workspace.
Pinned buffers cannot be evicted. Decoder accounting includes input, decoded
RGBA/raw alpha, final output and 4 KiB fixed decode scratch. Metadata is bounded
separately: at most 4,096 cache entries, 128 frame indices of at most 4,096 frames,
and subarchive headers up to 16,400 bytes. Registry/snapshot metadata, allocator
overhead and manifest parsing are not a measurement of total process RAM.
Cancellation is checked between read chunks, before publication and around
bounded decode operations, not inside every pixel operation.

## Supported payloads

- TIM2 version 4, one picture, alignment profile 0 and no multiple mip levels;
  supported pixel/CLUT conversion is inherited from the tested TIM2 decoder.
- A single exact TIM2 or uniform 2,048-byte-sector-aligned frame array with zero
  padding and verified header geometry. Indexing reads headers and padding only.
- Explicit `length16` subarchive profile: little-endian `u32 count`, then
  `count` positive `u32` lengths measured in 16-byte units; header rounds up to
  16 with zero padding; cumulative children cover the entire parent. RID2 in
  the attested Base/XL corpus is 57 children of 6,208 bytes after a 240-byte
  header. Each child has an exact TIM2 extent. This is a derived, corpus-scoped
  layout, not a universal BNS subarchive parser. RID5 fails this profile.

Unknown payloads remain available as raw bytes. Filename `.TM2` does not prove
format. No compressed codec has been demonstrated or implemented; the
compression registry rejects requested codecs other than explicit identity
`none`. Its `CODEC_IDENTIFIED` state is reserved for future evidenced codecs.
No speculative decompression or automatic search for nested TIM2 signatures
is used. Multiple pictures, unsupported alignment/mipmaps and trailing layouts
fail explicitly rather than producing an incomplete image.

## Verification scope

CTest includes independent hand-authored first-texel/alpha fixtures for direct
and indexed formats, actual Base/XL frame arrays and portraits, transactional
mount tests, canonical junction containment, LRU/pinning, malformed structures,
and byte-identical repeated CLI outputs. Synthetic external `.tm2` fixtures
exercise the same API; they are not claimed as extracted game files.
Debug/Release output equality is recorded separately in knowledge evidence.
The original-game trace test and compressed-codec reference suite are explicitly
skipped; passing native contracts does not demonstrate original-game parity.
