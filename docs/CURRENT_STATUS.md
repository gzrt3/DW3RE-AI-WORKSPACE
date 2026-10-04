# Current verified state

Last native development probe: **Release098**, 2026-10-04.

The standalone process consumed the original IOP reboot request, initialized the selected module plan, observed original EESYNC readiness `0x60000`, completed the post-reset EE handshake, and entered file/CDVD service setup.

It then stopped at missing guest continuation **`0x001B0308`**. The log also reports unresolved **IOP IOMAN export31 at `0x00029040`**. Input integrity was `MATCH`; the process result was `PROCESS_FAILED`, not a successful boot.

Completed repairs include the original return at `0x0023A768` and two omitted four-instruction epilogues at `0x001ABD78` and `0x001A88BC`. Focused contracts pass in Debug and Release. The catalog contains 7,636 aliases and 589 original JR tails; stronger validation retained the identical generated catalog after checking 9,396 canonical sources. Its 15 Python tests pass. Native probe tooling passes 10 tests.

**0/8 final acceptance criteria verified.** No title screen, full battle or combined playable game is demonstrated. The next runtime work is to recover the two measured missing interfaces from original instructions and imports, then continue toward title, menus and battle.

See `evidence/native_boot_release_098/result.json` and `evidence/reboot_module_probe_001/resume_progress_verification_001.json`. Public paths are normalized; raw traces remain in the private local evidence archive.

Publication work adds a portable dependency-build script, removes machine-specific SDL lookup, and publishes the modified runtime source. A clean build validates packaging separately from game behavior; see PUBLICATION.md for the measured result.
