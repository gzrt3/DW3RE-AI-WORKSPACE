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

// Function: entry_00138080
// Address: 0x138080 - 0x138094
void entry_00138080_0x138080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138080_0x138080");
#endif

    ctx->pc = 0x138080u;

    // 0x138080: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x138080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x138084: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138084u;
    {
        const bool branch_taken_0x138084 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x138088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138084u;
        // 0x138088: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138084) {
            ctx->pc = 0x138094u;
            return;
        }
    }
    ctx->pc = 0x13808Cu;
    // 0x13808c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13808Cu;
    {
        const bool branch_taken_0x13808c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13808Cu;
        // 0x138090: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13808c) {
            ctx->pc = 0x1380A8u;
            return;
        }
    }
    ctx->pc = 0x138094u;
}
