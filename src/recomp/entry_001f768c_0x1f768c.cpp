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

// Function: entry_001f768c
// Address: 0x1f768c - 0x1f76a4
void entry_001f768c_0x1f768c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f768c_0x1f768c");
#endif

    ctx->pc = 0x1f768cu;

    // 0x1f768c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F768Cu;
    {
        const bool branch_taken_0x1f768c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f768c) {
            ctx->pc = 0x1F76F4u;
            return;
        }
    }
    ctx->pc = 0x1F7694u;
    // 0x1f7694: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7694u;
    {
        const bool branch_taken_0x1f7694 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7694u;
        // 0x1f7698: 0x101883  sra         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7694) {
            ctx->pc = 0x1F76A4u;
            return;
        }
    }
    ctx->pc = 0x1F769Cu;
    // 0x1f769c: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x1f769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1f76a0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1f76a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    ctx->pc = 0x1f76a4u;
}
