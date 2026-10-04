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

// Function: entry_001318cc
// Address: 0x1318cc - 0x1318e8
void entry_001318cc_0x1318cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001318cc_0x1318cc");
#endif

    ctx->pc = 0x1318ccu;

    // 0x1318cc: 0x0  nop
    ctx->pc = 0x1318ccu;
    // NOP
    // 0x1318d0: 0x15830005  bne         $t4, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1318D0u;
    {
        const bool branch_taken_0x1318d0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        if (branch_taken_0x1318d0) {
            ctx->pc = 0x1318E8u;
            return;
        }
    }
    ctx->pc = 0x1318D8u;
    // 0x1318d8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1318d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1318dc: 0x29620002  slti        $v0, $t3, 0x2
    ctx->pc = 0x1318dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1318e0: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1318E0u;
    {
        const bool branch_taken_0x1318e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1318E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318E0u;
        // 0x1318e4: 0x25ad47b8  addiu       $t5, $t5, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 18360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1318e0) {
            ctx->pc = 0x13187Cu;
            return;
        }
    }
    ctx->pc = 0x1318E8u;
}
