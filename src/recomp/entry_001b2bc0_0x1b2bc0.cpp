#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001b2bc0
// Address: 0x1b2bc0 - 0x1b2bc4
void entry_001b2bc0_0x1b2bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2bc0_0x1b2bc0");
#endif

    ctx->pc = 0x1b2bc0u;

    // 0x1b2bc0: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x1b2bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    ctx->pc = 0x1b2bc4u;
}
