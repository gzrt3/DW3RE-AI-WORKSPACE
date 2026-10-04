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

// Function: entry_001514f4
// Address: 0x1514f4 - 0x151518
void entry_001514f4_0x1514f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001514f4_0x1514f4");
#endif

    ctx->pc = 0x1514f4u;

    // 0x1514f4: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x1514f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x1514f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1514F8u;
    {
        const bool branch_taken_0x1514f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1514f8) {
            ctx->pc = 0x151518u;
            return;
        }
    }
    ctx->pc = 0x151500u;
    // 0x151500: 0x8604020a  lh          $a0, 0x20A($s0)
    ctx->pc = 0x151500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 522)));
    // 0x151504: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x151504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x151508: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151508u;
    {
        const bool branch_taken_0x151508 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151508u;
        // 0x15150c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151508) {
            ctx->pc = 0x151518u;
            return;
        }
    }
    ctx->pc = 0x151510u;
    // 0x151510: 0xc08c204  jal         func_230810
    ctx->pc = 0x151510u;
    SET_GPR_U32(ctx, 31, 0x151518u);
    ctx->pc = 0x230810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230810u, 0x151510u, 0x151518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151518u;
}
