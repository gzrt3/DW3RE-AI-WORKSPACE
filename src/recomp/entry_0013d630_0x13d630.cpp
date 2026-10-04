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

// Function: entry_0013d630
// Address: 0x13d630 - 0x13d650
void entry_0013d630_0x13d630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d630_0x13d630");
#endif

    ctx->pc = 0x13d630u;

    // 0x13d630: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x13d630u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13d634: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x13D634u;
    {
        const bool branch_taken_0x13d634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D634u;
        // 0x13d638: 0x3c010031  lui         $at, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d634) {
            ctx->pc = 0x13D5A8u;
            return;
        }
    }
    ctx->pc = 0x13D63Cu;
    // 0x13d63c: 0x8c267b34  lw          $a2, 0x7B34($at)
    ctx->pc = 0x13d63cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31540)));
    // 0x13d640: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13d640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13d644: 0x8c277b30  lw          $a3, 0x7B30($at)
    ctx->pc = 0x13d644u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x317B30u));
    // 0x13d648: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x13D648u;
    {
        const bool branch_taken_0x13d648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D648u;
        // 0x13d64c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d648) {
            ctx->pc = 0x13D6D8u;
            return;
        }
    }
    ctx->pc = 0x13D650u;
}
