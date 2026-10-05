#include "ps2_runtime.h"

// Host contracts do not execute retail instructions. Supply the runtime's
// required dispatch table without linking the translated game corpus.
extern const uint32_t g_ps2RecompiledFunctionTableBase = 0;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = PS2_RAM_SIZE;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = PS2_RAM_SIZE / 4;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[PS2_RAM_SIZE / 4]{};
