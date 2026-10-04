# Mod folder overrides

Both `fate_game` and `fate_viewport` accept `--mods DIR`; the default is `C:\Fate Soldiers 3\mods`. The folder is read at startup. Restart the application after changing a file.

```text
mods/
  dw3/
    resources/207.bin       # replacement raw LINKDATA payload for RID 207
    assets/207.obj          # external PC mesh for RID 207 (takes precedence over .bin)
    assets/150.bmp          # external 24/32-bit uncompressed BMP texture for RID 150
    files/SYSTEM.CNF        # loose-file mirror for /data/dw3_base/SYSTEM.CNF
  dw3xl/
    resources/207.bin
    assets/207.obj
    assets/150.bmp
    files/SYSTEM.CNF        # loose-file mirror for /data/dw3_xl/SYSTEM.CNF
```

RID `.bin` replacements are returned by `DualIsoVfs::read_resource` before either ISO payload. A virtual path checks the matching loose-file tree first; `/data/<path>` checks the XL mods tree, then Base, before the existing XL-first/Base-fallback ISO search. All mod paths are canonicalized under the configured root, reject traversal and are read with the caller's byte limit.

The current applications load Base RIDs 207 and 150. For those loads, the external OBJ or BMP takes priority, then a native `.bin` override, then the existing Base ISO/resource source. `dw3xl` asset folders are available for callers that request XL resources. OBJ support covers `v`, `vt`, `vn`, positive/negative face indices and polygon fan triangulation; unsupported records are ignored. Imported geometry is bounded and validated. BMP support is uncompressed 24-bit or 32-bit RGB; PNG and compressed BMP are not supported. TM3 indexed images can be exported to 32-bit BMP using `tm3::export_bmp`.

Example:

```powershell
& 'C:\Fate Soldiers 3\out\msvc-x64\Release\fate_game.exe' --mods 'C:\Fate Soldiers 3\mods'
& 'C:\Fate Soldiers 3\out\msvc-x64\Release\fate_viewport.exe' --mods 'C:\Fate Soldiers 3\mods'
```

The mod loader replaces the resolved resource/asset; it does not convert arbitrary OBJ/BMP files back into PS2 LINKDATA formats or edit either ISO.
