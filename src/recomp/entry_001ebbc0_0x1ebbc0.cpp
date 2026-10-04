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

// Function: entry_001ebbc0
// Address: 0x1ebbc0 - 0x1ebbc8
void entry_001ebbc0_0x1ebbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebbc0_0x1ebbc0");
#endif

    ctx->pc = 0x1ebbc0u;

    // 0x1ebbc0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ebbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1ebbc4: 0xac234900  sw          $v1, 0x4900($at)
    ctx->pc = 0x1ebbc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x334900u, _value); } while (0);
    ctx->pc = 0x1ebbc8u;
}
