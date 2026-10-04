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

// Function: FUN_0016da20
// Address: 0x16da20 - 0x16da68
void FUN_0016da20_0x16da20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016da20_0x16da20");
#endif

    ctx->pc = 0x16da20u;

    // 0x16da20: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16DA20u;
    {
        const bool branch_taken_0x16da20 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA20u;
        // 0x16da24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da20) {
            ctx->pc = 0x16DA48u;
            goto label_16da48;
        }
    }
    ctx->pc = 0x16DA28u;
    // 0x16da28: 0x28810043  slti        $at, $a0, 0x43
    ctx->pc = 0x16da28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)67) ? 1 : 0);
    // 0x16da2c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DA2Cu;
    {
        const bool branch_taken_0x16da2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da2c) {
            ctx->pc = 0x16DA44u;
            goto label_16da44;
        }
    }
    ctx->pc = 0x16DA34u;
    // 0x16da34: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DA34u;
    {
        const bool branch_taken_0x16da34 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x16DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA34u;
        // 0x16da38: 0x28a1001b  slti        $at, $a1, 0x1B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)27) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da34) {
            ctx->pc = 0x16DA44u;
            goto label_16da44;
        }
    }
    ctx->pc = 0x16DA3Cu;
    // 0x16da3c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x16DA3Cu;
    {
        const bool branch_taken_0x16da3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA3Cu;
        // 0x16da40: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da3c) {
            ctx->pc = 0x16DA50u;
            goto label_16da50;
        }
    }
    ctx->pc = 0x16DA44u;
label_16da44:
    // 0x16da44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16da44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16da48:
    // 0x16da48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16DA48u;
    {
        const bool branch_taken_0x16da48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da48) {
            ctx->pc = 0x16DA68u;
            return;
        }
    }
    ctx->pc = 0x16DA50u;
label_16da50:
    // 0x16da50: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x16da50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16da54: 0x244217c0  addiu       $v0, $v0, 0x17C0
    ctx->pc = 0x16da54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6080));
    // 0x16da58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16da5c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16da5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16da60: 0x24420c3d  addiu       $v0, $v0, 0xC3D
    ctx->pc = 0x16da60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3133));
    // 0x16da64: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x16da68u;
}
