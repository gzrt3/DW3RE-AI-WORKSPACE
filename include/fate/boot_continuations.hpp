#pragma once

class PS2Runtime;

namespace fate::recomp {
// Install only missing, byte-verified translated continuations. Does not
// replace the syscall implementation or skip original guest instructions.
void register_boot_continuations(PS2Runtime& runtime);
}
