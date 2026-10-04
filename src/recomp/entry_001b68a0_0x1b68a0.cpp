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

// Function: entry_001b68a0
// Address: 0x1b68a0 - 0x1b68c8
void entry_001b68a0_0x1b68a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b68a0_0x1b68a0");
#endif

    ctx->pc = 0x1b68a0u;

    // 0x1b68a0: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B68A0u;
    {
        const bool branch_taken_0x1b68a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68A0u;
        // 0x1b68a4: 0x47102b  sltu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b68a0) {
            ctx->pc = 0x1B68C8u;
            return;
        }
    }
    ctx->pc = 0x1B68A8u;
    // 0x1b68a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b68ac: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B68ACu;
    {
        const bool branch_taken_0x1b68ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b68ac) {
            ctx->pc = 0x1B68B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B68ACu;
            // 0x1b68b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B68B4u;
            goto label_1b68b4;
        }
    }
    ctx->pc = 0x1B68B4u;
label_1b68b4:
    // 0x1b68b4: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x1b68b4u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1b68b8: 0x1012  mflo        $v0
    ctx->pc = 0x1b68b8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b68bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b68bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b68c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b68c4: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1b68c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    ctx->pc = 0x1b68c8u;
}
