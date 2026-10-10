# Reversible contract trial — 2026-10-10

The isolated trial passed and its host tooling was applied to the candidate.
No game instructions, assets, original kit files or frozen references changed.
The native game remains unplayable; all eight product gates remain open.

## ps2sdk comparison

The pinned ps2sdk headers independently supplied the pad masks/layout and
32-bit RPC member widths/offsets. Debug and Release passed 109 compile checks
and 48 pad serialization cases against the existing kit and runtime headers.
Their layouts already matched, so no runtime structure was replaced.

Two disposable negative copies checked that the tests could reject defects.
Widening a guest field to 64 bits failed static assertions. Reversing the pad's
active-low button convention compiled but produced 144 failed comparisons in
48 cases. The unmodified files passed. This covers layout and those input
cases, not the proprietary game RPC protocol.

The public regression target retains the 72 RPC assertions against the actual
host runtime header. It builds without SDK implementations, game data or the
private kit. Reproduction is in `research/sdk_contract/README.md`; CI runs it
in Debug and Release.

## Captured alpha

`run_replay.py --reference --draw-count 16 --save-alpha` enables PCSX2's own
alpha sidecars in a separate diagnostic run. `compare_draws.py --channels RGBA`
requires hash-bound RGB and grayscale alpha files with matching dimensions.
It rejects missing, tampered or incorrectly shaped sidecars and RGB images
with synthesized opaque alpha. RGB remains the default comparison.

Vulkan and software produced four final fields each. All eight PNG hashes
and pixel arrays match their respective frozen diagnostic references exactly.
The 15 GS contexts still match. The first RGB difference remains draw 2 after
drawing; the raw alpha planes differ already before draw 1, with maximum delta
127 and equal RGB there.

The raw alpha comparison is **not a demonstrated GS semantic difference**.
PCSX2 tracks hardware target alpha scaling (`m_rt_alpha_scale`), and its shaders
support distinct alpha denominators. The current context dumps do not identify
that representation for each saved plane. No normalization was invented and
no GS correction was applied. Representation equivalence and cause remain
unproven; the comparator reports that limitation explicitly.

The frozen GS replay does not identify the EE instruction that emitted a write
and does not prove native EE→GS production or PS2 hardware parity.

## Rollback and evidence

Six promoted source files passed rollback checks in an independent sandbox:
existing files restored their prior byte hashes, and newly added files could
be removed. This did not roll the active candidate backward or edit baselines.
The capture/comparison regression suite passes 24 tests.

Numeric evidence and source identities are in
`docs/evidence/V3_1_REVERSIBLE.json`. Local failures and original captures remain
preserved. A malformed path argument configured the wrong isolated CMake
project in the first public-guard attempt; that result was rejected, retained,
and superseded by the correctly quoted isolated configuration and passing tests.

Native owner discovery, complete producer linkage, independent EE comparison,
MixJoy state consumers, native frames, gameplay, audio and saves remain open.

## Producer coverage

A read-only local census checks original word identities without publishing
instruction words or translated functions. The discovered map has 3,058
functions covering 329,348 executable words. The range-complete producer has
313,542 matching annotations; all 15,806 unannotated known words are zero.
No nonzero delay slot inside those discovered bodies is absent from its
annotations. This verifies identity coverage of known bodies, not translated
instruction semantics or coverage outside the discovery map.

The current failed callback `001A73C0 → 00235CC0`, RA `001A73C8`, has no
discovered owner, producer annotation or producer local entry. Three preserved
native probes agree. There are also 34 distinct direct-call targets outside
the discovered bodies; the subsequent bounded scan finds that all 34 are
outside the ELF's executable mapping too. They are unresolved static edges,
not 34 proven missing game functions. Only the observed callback supplies an
unowned target inside the original executable mapping in this frontier.
These findings separate discovery omissions from
integration of already emitted entries. Source-declared registration does
not establish what historical imported objects contain; local branch labels
do not all require global registration. No new per-address adapter was added.

The first census was rejected because it misread RA positionally and could
not parse a rollback registration loop. Its corrected successor extracts
labeled event fields and records the complete owner's four identified entries.
Both local reports remain preserved; only the corrected census is published.
The follow-up counts and the observed root's bounded window are recorded in
`docs/evidence/V3_1_DISCOVERY_FRONTIER.json`. That window contains two store
instructions; skipping it or replacing it with a successful return is
unjustified. Its return pattern still does not establish a safe owner or parity.
