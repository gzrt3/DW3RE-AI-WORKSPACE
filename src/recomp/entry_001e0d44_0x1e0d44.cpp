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

// Function: entry_001e0d44
// Address: 0x1e0d44 - 0x1e0d60
void entry_001e0d44_0x1e0d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0d44_0x1e0d44");
#endif

    ctx->pc = 0x1e0d44u;

    // 0x1e0d44: 0x0  nop
    ctx->pc = 0x1e0d44u;
    // NOP
    // 0x1e0d48: 0x2527fff0  addiu       $a3, $t1, -0x10
    ctx->pc = 0x1e0d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
    // 0x1e0d4c: 0x749c0  sll         $t1, $a3, 7
    ctx->pc = 0x1e0d4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x1e0d50: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0D50u;
    {
        const bool branch_taken_0x1e0d50 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1E0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D50u;
        // 0x1e0d54: 0x938c3  sra         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d50) {
            ctx->pc = 0x1E0D60u;
            return;
        }
    }
    ctx->pc = 0x1E0D58u;
    // 0x1e0d58: 0x25270007  addiu       $a3, $t1, 0x7
    ctx->pc = 0x1e0d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x1e0d5c: 0x738c3  sra         $a3, $a3, 3
    ctx->pc = 0x1e0d5cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 3));
    ctx->pc = 0x1e0d60u;
}
