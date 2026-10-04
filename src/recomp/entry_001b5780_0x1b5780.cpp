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

// Function: entry_001b5780
// Address: 0x1b5780 - 0x1b57a8
void entry_001b5780_0x1b5780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5780_0x1b5780");
#endif

    ctx->pc = 0x1b5780u;

    // 0x1b5780: 0x15200009  bnez        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5780u;
    {
        const bool branch_taken_0x1b5780 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5780u;
        // 0x1b5784: 0x49102b  sltu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5780) {
            ctx->pc = 0x1B57A8u;
            return;
        }
    }
    ctx->pc = 0x1B5788u;
    // 0x1b5788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b578c: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B578Cu;
    {
        const bool branch_taken_0x1b578c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b578c) {
            ctx->pc = 0x1B5790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B578Cu;
            // 0x1b5790: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5794u;
            goto label_1b5794;
        }
    }
    ctx->pc = 0x1B5794u;
label_1b5794:
    // 0x1b5794: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x1b5794u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1b5798: 0x1012  mflo        $v0
    ctx->pc = 0x1b5798u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b579c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1b579cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b57a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b57a4: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1b57a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    ctx->pc = 0x1b57a8u;
}
