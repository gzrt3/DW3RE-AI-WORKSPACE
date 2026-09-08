# PHASE 44B.22C — DEPENDENCY LAYOUT

`EXISTING_LAYOUT_SUFFICIENT = NO`

The clean physical root is `D:\PCSX2_FORENSIC_DEPS`.

- LZ4 headers/libraries/CMake metadata are present, but the existing module mishandles the multi-config library list.
- Shaderc headers and static libraries are present; no compatible `shaderc_shared` was found.
- No standalone Vulkan SDK was found in the audited standard locations. Vulkan headers and Shaderc are supplied by the isolated vcpkg environment.

The selected solution is a narrowly scoped CMake-only discovery/target patch. No dependency was installed globally and no path mapping was used.
