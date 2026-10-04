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

// Function: entry_00248e3c
// Address: 0x248e3c - 0x248e54
void entry_00248e3c_0x248e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248e3c_0x248e3c");
#endif

    ctx->pc = 0x248e3cu;

    // 0x248e3c: 0x0  nop
    ctx->pc = 0x248e3cu;
    // NOP
    // 0x248e40: 0x182283  sra         $a0, $t8, 10
    ctx->pc = 0x248e40u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 24), 10));
    // 0x248e44: 0x24860003  addiu       $a2, $a0, 0x3
    ctx->pc = 0x248e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x248e48: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x248e48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x248e4c: 0x10c0ffe1  beqz        $a2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x248E4Cu;
    {
        const bool branch_taken_0x248e4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E4Cu;
        // 0x248e50: 0x1665821  addu        $t3, $t3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e4c) {
            ctx->pc = 0x248DD4u;
            return;
        }
    }
    ctx->pc = 0x248E54u;
}
