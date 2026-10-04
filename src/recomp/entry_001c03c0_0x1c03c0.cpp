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

// Function: entry_001c03c0
// Address: 0x1c03c0 - 0x1c03cc
void entry_001c03c0_0x1c03c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c03c0_0x1c03c0");
#endif

    ctx->pc = 0x1c03c0u;

    // 0x1c03c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c03c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c03c4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1c03c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1c03c8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1c03c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x1c03ccu;
}
