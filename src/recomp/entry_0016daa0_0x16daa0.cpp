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

// Function: entry_0016daa0
// Address: 0x16daa0 - 0x16dacc
void entry_0016daa0_0x16daa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016daa0_0x16daa0");
#endif

    ctx->pc = 0x16daa0u;

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
            return;
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
}
