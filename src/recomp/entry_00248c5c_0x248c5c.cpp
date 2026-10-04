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

// Function: entry_00248c5c
// Address: 0x248c5c - 0x248c74
void entry_00248c5c_0x248c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248c5c_0x248c5c");
#endif

    ctx->pc = 0x248c5cu;

    // 0x248c5c: 0x0  nop
    ctx->pc = 0x248c5cu;
    // NOP
    // 0x248c60: 0x182303  sra         $a0, $t8, 12
    ctx->pc = 0x248c60u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 24), 12));
    // 0x248c64: 0x24860003  addiu       $a2, $a0, 0x3
    ctx->pc = 0x248c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x248c68: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x248c68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x248c6c: 0x10c0ffe1  beqz        $a2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x248C6Cu;
    {
        const bool branch_taken_0x248c6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C6Cu;
        // 0x248c70: 0x1665821  addu        $t3, $t3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c6c) {
            ctx->pc = 0x248BF4u;
            return;
        }
    }
    ctx->pc = 0x248C74u;
}
