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

// Function: entry_002153d4
// Address: 0x2153d4 - 0x2153dc
void entry_002153d4_0x2153d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002153d4_0x2153d4");
#endif

    ctx->pc = 0x2153d4u;

    // 0x2153d4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2153d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2153d8: 0xac24790c  sw          $a0, 0x790C($at)
    ctx->pc = 0x2153d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x58790Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58790Cu, _value); } while (0);
    ctx->pc = 0x2153dcu;
}
