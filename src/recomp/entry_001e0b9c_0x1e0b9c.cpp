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

// Function: entry_001e0b9c
// Address: 0x1e0b9c - 0x1e0bb8
void entry_001e0b9c_0x1e0b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0b9c_0x1e0b9c");
#endif

    ctx->pc = 0x1e0b9cu;

    // 0x1e0b9c: 0x0  nop
    ctx->pc = 0x1e0b9cu;
    // NOP
    // 0x1e0ba0: 0x2527fff0  addiu       $a3, $t1, -0x10
    ctx->pc = 0x1e0ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
    // 0x1e0ba4: 0x749c0  sll         $t1, $a3, 7
    ctx->pc = 0x1e0ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x1e0ba8: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0BA8u;
    {
        const bool branch_taken_0x1e0ba8 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1E0BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BA8u;
        // 0x1e0bac: 0x938c3  sra         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ba8) {
            ctx->pc = 0x1E0BB8u;
            return;
        }
    }
    ctx->pc = 0x1E0BB0u;
    // 0x1e0bb0: 0x25270007  addiu       $a3, $t1, 0x7
    ctx->pc = 0x1e0bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x1e0bb4: 0x738c3  sra         $a3, $a3, 3
    ctx->pc = 0x1e0bb4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 3));
    ctx->pc = 0x1e0bb8u;
}
