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

// Function: FUN_0016da70
// Address: 0x16da70 - 0x16dae4
void FUN_0016da70_0x16da70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016da70_0x16da70");
#endif

    ctx->pc = 0x16da70u;

    // 0x16da70: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16DA70u;
    {
        const bool branch_taken_0x16da70 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA70u;
        // 0x16da74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da70) {
            ctx->pc = 0x16DA98u;
            goto label_16da98;
        }
    }
    ctx->pc = 0x16DA78u;
    // 0x16da78: 0x28810017  slti        $at, $a0, 0x17
    ctx->pc = 0x16da78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x16da7c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DA7Cu;
    {
        const bool branch_taken_0x16da7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da7c) {
            ctx->pc = 0x16DA94u;
            goto label_16da94;
        }
    }
    ctx->pc = 0x16DA84u;
    // 0x16da84: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DA84u;
    {
        const bool branch_taken_0x16da84 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x16DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA84u;
        // 0x16da88: 0x28a10023  slti        $at, $a1, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)35) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da84) {
            ctx->pc = 0x16DA94u;
            goto label_16da94;
        }
    }
    ctx->pc = 0x16DA8Cu;
    // 0x16da8c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x16DA8Cu;
    {
        const bool branch_taken_0x16da8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16da8c) {
            ctx->pc = 0x16DAA0u;
            goto label_16daa0;
        }
    }
    ctx->pc = 0x16DA94u;
label_16da94:
    // 0x16da94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16da94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16da98:
    // 0x16da98: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16DA98u;
    {
        const bool branch_taken_0x16da98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da98) {
            ctx->pc = 0x16DAE4u;
            return;
        }
    }
    ctx->pc = 0x16DAA0u;
label_16daa0:
    // 0x16daa0: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x16daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x16daa4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16DAA4u;
    {
        const bool branch_taken_0x16daa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAA4u;
        // 0x16daa8: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16daa4) {
            ctx->pc = 0x16DACCu;
            goto label_16dacc;
        }
    }
    ctx->pc = 0x16DAACu;
    // 0x16daac: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16daacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x16dab0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x16dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16dab4: 0x24421a00  addiu       $v0, $v0, 0x1A00
    ctx->pc = 0x16dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6656));
    // 0x16dab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16dabc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16dabcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16dac0: 0x24420b46  addiu       $v0, $v0, 0xB46
    ctx->pc = 0x16dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2886));
    // 0x16dac4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16DAC4u;
    {
        const bool branch_taken_0x16dac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAC4u;
        // 0x16dac8: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dac4) {
            ctx->pc = 0x16DAE4u;
            return;
        }
    }
    ctx->pc = 0x16DACCu;
label_16dacc:
    // 0x16dacc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x16daccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16dad0: 0x24421790  addiu       $v0, $v0, 0x1790
    ctx->pc = 0x16dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6032));
    // 0x16dad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16dad8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16dad8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16dadc: 0x24420a12  addiu       $v0, $v0, 0xA12
    ctx->pc = 0x16dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2578));
    // 0x16dae0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x16dae4u;
}
