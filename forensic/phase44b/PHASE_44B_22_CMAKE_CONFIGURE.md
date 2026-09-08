# PHASE 44B.22 — CMAKE CONFIGURE

`CMAKE_CONFIGURE = PARTIAL`

Source revision verified:
`236f67a82fd8a37b1e5c128228403fb7b89b3cd8`

The unmodified source configured with Visual Studio 17 2022 far enough to detect:

- MSVC `19.44.35228.0`
- Windows SDK `10.0.26100.0`
- CMake `3.31.6-msvc6`
- PNG `1.6.58`
- ZLIB `1.3.2`

It then stopped on JPEG when using the partially populated spaced vcpkg root. Dependency bootstrap subsequently stopped at HarfBuzz because of the mixed `D:`/`X:` path metadata described in `PHASE_44B_22_DEPENDENCY_SETUP.md`.

No CMake cache was reused as a baseline. No PCSX2 source file was modified.
