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

// Function: entry_0018712c
// Address: 0x18712c - 0x187154
void entry_0018712c_0x18712c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018712c_0x18712c");
#endif

    ctx->pc = 0x18712cu;

    // 0x18712c: 0x9083023c  lbu         $v1, 0x23C($a0)
    ctx->pc = 0x18712cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 572)));
    // 0x187130: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x187130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187134: 0x1067002f  beq         $v1, $a3, . + 4 + (0x2F << 2)
    ctx->pc = 0x187134u;
    {
        const bool branch_taken_0x187134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x187138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187134u;
        // 0x187138: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187134) {
            ctx->pc = 0x1871F4u;
            return;
        }
    }
    ctx->pc = 0x18713Cu;
    // 0x18713c: 0x10650010  beq         $v1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18713Cu;
    {
        const bool branch_taken_0x18713c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x18713c) {
            ctx->pc = 0x187180u;
            return;
        }
    }
    ctx->pc = 0x187144u;
    // 0x187144: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187144u;
    {
        const bool branch_taken_0x187144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187144) {
            ctx->pc = 0x187154u;
            return;
        }
    }
    ctx->pc = 0x18714Cu;
    // 0x18714c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x18714Cu;
    {
        const bool branch_taken_0x18714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18714c) {
            ctx->pc = 0x187248u;
            return;
        }
    }
    ctx->pc = 0x187154u;
}
