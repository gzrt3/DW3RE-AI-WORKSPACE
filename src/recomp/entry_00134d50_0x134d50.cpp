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

// Function: entry_00134d50
// Address: 0x134d50 - 0x134d6c
void entry_00134d50_0x134d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134d50_0x134d50");
#endif

    ctx->pc = 0x134d50u;

    // 0x134d50: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x134d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x134d54: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x134d54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134d58: 0x9023490e  lbu         $v1, 0x490E($at)
    ctx->pc = 0x134d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Eu));
    // 0x134d5c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134D5Cu;
    {
        const bool branch_taken_0x134d5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x134d5c) {
            ctx->pc = 0x134D6Cu;
            return;
        }
    }
    ctx->pc = 0x134D64u;
    // 0x134d64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134D64u;
    {
        const bool branch_taken_0x134d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d64) {
            ctx->pc = 0x134D78u;
            return;
        }
    }
    ctx->pc = 0x134D6Cu;
}
