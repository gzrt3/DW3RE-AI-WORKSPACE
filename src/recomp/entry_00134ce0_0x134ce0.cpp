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

// Function: entry_00134ce0
// Address: 0x134ce0 - 0x134cfc
void entry_00134ce0_0x134ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134ce0_0x134ce0");
#endif

    ctx->pc = 0x134ce0u;

    // 0x134ce0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134ce4: 0x9024a408  lbu         $a0, -0x5BF8($at)
    ctx->pc = 0x134ce4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x30A408u));
    // 0x134ce8: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x134ce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134cec: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134CECu;
    {
        const bool branch_taken_0x134cec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x134cec) {
            ctx->pc = 0x134CFCu;
            return;
        }
    }
    ctx->pc = 0x134CF4u;
    // 0x134cf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134CF4u;
    {
        const bool branch_taken_0x134cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134cf4) {
            ctx->pc = 0x134D08u;
            return;
        }
    }
    ctx->pc = 0x134CFCu;
}
