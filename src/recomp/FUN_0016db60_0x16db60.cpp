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

// Function: FUN_0016db60
// Address: 0x16db60 - 0x16dba4
void FUN_0016db60_0x16db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016db60_0x16db60");
#endif

    ctx->pc = 0x16db60u;

    // 0x16db60: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16DB60u;
    {
        const bool branch_taken_0x16db60 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB60u;
        // 0x16db64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db60) {
            ctx->pc = 0x16DB88u;
            goto label_16db88;
        }
    }
    ctx->pc = 0x16DB68u;
    // 0x16db68: 0x28810035  slti        $at, $a0, 0x35
    ctx->pc = 0x16db68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)53) ? 1 : 0);
    // 0x16db6c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DB6Cu;
    {
        const bool branch_taken_0x16db6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db6c) {
            ctx->pc = 0x16DB84u;
            goto label_16db84;
        }
    }
    ctx->pc = 0x16DB74u;
    // 0x16db74: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DB74u;
    {
        const bool branch_taken_0x16db74 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x16DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB74u;
        // 0x16db78: 0x28a10007  slti        $at, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db74) {
            ctx->pc = 0x16DB84u;
            goto label_16db84;
        }
    }
    ctx->pc = 0x16DB7Cu;
    // 0x16db7c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x16DB7Cu;
    {
        const bool branch_taken_0x16db7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB7Cu;
        // 0x16db80: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db7c) {
            ctx->pc = 0x16DB90u;
            goto label_16db90;
        }
    }
    ctx->pc = 0x16DB84u;
label_16db84:
    // 0x16db84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16db84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16db88:
    // 0x16db88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16DB88u;
    {
        const bool branch_taken_0x16db88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db88) {
            ctx->pc = 0x16DBA4u;
            return;
        }
    }
    ctx->pc = 0x16DB90u;
label_16db90:
    // 0x16db90: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x16db90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16db94: 0x24421580  addiu       $v0, $v0, 0x1580
    ctx->pc = 0x16db94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5504));
    // 0x16db98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16db98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16db9c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16db9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16dba0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x16dba4u;
}
