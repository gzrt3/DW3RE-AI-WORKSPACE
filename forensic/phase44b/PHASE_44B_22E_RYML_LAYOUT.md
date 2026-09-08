# PHASE 44B.22E — ryml / RapidYAML Audit and Layout

## Confirmed source contract

`common/YAML.h` includes:

```cpp
#include "ryml.hpp"
#include "ryml_std.hpp"
```

`common/YAML.cpp` uses the RapidYAML 0.11+ API branch, including `RYML_VERSION_MAJOR/MINOR`, `ErrorDataBasic`, `ErrorDataParse`, `ErrorDataVisit`, `Callbacks::set_error_basic`, `set_error_parse`, `set_error_visit`, `err_basic_format`, `err_parse_format`, and `err_visit_format`.

## Confirmed installed package

- Version: `0.16.0`
- Architecture: `x64-windows`
- Header: `D:\PCSX2_FORENSIC_DEPS\vcpkg\installed\x64-windows\include\ryml\ryml.hpp`
- Standard header: `D:\PCSX2_FORENSIC_DEPS\vcpkg\installed\x64-windows\include\ryml\ryml_std.hpp`
- CMake package: `D:\PCSX2_FORENSIC_DEPS\vcpkg\installed\x64-windows\share\ryml\rymlConfig.cmake`
- Library: `D:\PCSX2_FORENSIC_DEPS\vcpkg\installed\x64-windows\lib\ryml.lib`
- Imported target: `ryml::ryml`

The installed headers expose the required 0.11+ symbols and version macros. API compatibility is confirmed for the source contract.

## Exact mismatch

The vcpkg port intentionally relocates `ryml.hpp` and `ryml_std.hpp` from the package include root into `include\ryml\`. The imported target exports only:

`D:\PCSX2_FORENSIC_DEPS\vcpkg\installed\x64-windows\include`

PCSX2 uses bare includes (`"ryml.hpp"`), which require the additional include directory:

`D:\PCSX2_FORENSIC_DEPS\vcpkg\installed\x64-windows\include\ryml`

This is a confirmed layout/include-discovery mismatch. No alternative package or C++ source change was needed.
