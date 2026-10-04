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

// Function: entry_001982b8
// Address: 0x1982b8 - 0x1982d0
void entry_001982b8_0x1982b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001982b8_0x1982b8");
#endif

    ctx->pc = 0x1982b8u;

    // 0x1982b8: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1982b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1982bc: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1982bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1982c0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1982c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1982c4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1982c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1982c8: 0xac650288  sw          $a1, 0x288($v1)
    ctx->pc = 0x1982c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 648), GPR_U32(ctx, 5));
    // 0x1982cc: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1982ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    ctx->pc = 0x1982d0u;
}
