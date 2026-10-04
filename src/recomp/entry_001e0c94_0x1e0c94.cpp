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

// Function: entry_001e0c94
// Address: 0x1e0c94 - 0x1e0cb8
void entry_001e0c94_0x1e0c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0c94_0x1e0c94");
#endif

    ctx->pc = 0x1e0c94u;

    // 0x1e0c94: 0x0  nop
    ctx->pc = 0x1e0c94u;
    // NOP
    // 0x1e0c98: 0x29210010  slti        $at, $t1, 0x10
    ctx->pc = 0x1e0c98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e0c9c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E0C9Cu;
    {
        const bool branch_taken_0x1e0c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0c9c) {
            ctx->pc = 0x1E0D20u;
            return;
        }
    }
    ctx->pc = 0x1E0CA4u;
    // 0x1e0ca4: 0x931c0  sll         $a2, $t1, 7
    ctx->pc = 0x1e0ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 7));
    // 0x1e0ca8: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0CA8u;
    {
        const bool branch_taken_0x1e0ca8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CA8u;
        // 0x1e0cac: 0x63903  sra         $a3, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ca8) {
            ctx->pc = 0x1E0CB8u;
            return;
        }
    }
    ctx->pc = 0x1E0CB0u;
    // 0x1e0cb0: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1e0cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x1e0cb4: 0x63903  sra         $a3, $a2, 4
    ctx->pc = 0x1e0cb4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
    ctx->pc = 0x1e0cb8u;
}
