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

// Function: entry_001ec7b0
// Address: 0x1ec7b0 - 0x1ec7e8
void entry_001ec7b0_0x1ec7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec7b0_0x1ec7b0");
#endif

    ctx->pc = 0x1ec7b0u;

    // 0x1ec7b0: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x1ec7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1ec7b4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1ec7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x1ec7b8: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x1ec7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ec7bc: 0x24630920  addiu       $v1, $v1, 0x920
    ctx->pc = 0x1ec7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2336));
    // 0x1ec7c0: 0x8f828f28  lw          $v0, -0x70D8($gp)
    ctx->pc = 0x1ec7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
    // 0x1ec7c4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1ec7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ec7c8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1ec7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ec7cc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1ec7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ec7d0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1ec7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ec7d4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC7D4u;
    {
        const bool branch_taken_0x1ec7d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7D4u;
        // 0x1ec7d8: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7d4) {
            ctx->pc = 0x1EC7E8u;
            return;
        }
    }
    ctx->pc = 0x1EC7DCu;
    // 0x1ec7dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC7DCu;
    {
        const bool branch_taken_0x1ec7dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7DCu;
        // 0x1ec7e0: 0x28610021  slti        $at, $v1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7dc) {
            ctx->pc = 0x1EC7ECu;
            return;
        }
    }
    ctx->pc = 0x1EC7E4u;
    // 0x1ec7e4: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1ec7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    ctx->pc = 0x1ec7e8u;
}
