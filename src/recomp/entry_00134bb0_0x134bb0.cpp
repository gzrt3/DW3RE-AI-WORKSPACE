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

// Function: entry_00134bb0
// Address: 0x134bb0 - 0x134bd0
void entry_00134bb0_0x134bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134bb0_0x134bb0");
#endif

    ctx->pc = 0x134bb0u;

    // 0x134bb0: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x134bb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134bb4: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x134bb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x134bb8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x134BB8u;
    {
        const bool branch_taken_0x134bb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BB8u;
        // 0x134bbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134bb8) {
            ctx->pc = 0x134BF8u;
            return;
        }
    }
    ctx->pc = 0x134BC0u;
    // 0x134bc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x134bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134bc4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134bc8: 0x9024a404  lbu         $a0, -0x5BFC($at)
    ctx->pc = 0x134bc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x30A404u));
    // 0x134bcc: 0x0  nop
    ctx->pc = 0x134bccu;
    // NOP
    ctx->pc = 0x134bd0u;
}
