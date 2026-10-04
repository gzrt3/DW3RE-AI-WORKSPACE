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

// Function: entry_0010fbf4
// Address: 0x10fbf4 - 0x10fc0c
void entry_0010fbf4_0x10fbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fbf4_0x10fbf4");
#endif

    ctx->pc = 0x10fbf4u;

    // 0x10fbf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fbf8: 0x15c30004  bne         $t6, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FBF8u;
    {
        const bool branch_taken_0x10fbf8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 3));
        ctx->pc = 0x10FBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBF8u;
        // 0x10fbfc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbf8) {
            ctx->pc = 0x10FC0Cu;
            return;
        }
    }
    ctx->pc = 0x10FC00u;
    // 0x10fc00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10FC00u;
    {
        const bool branch_taken_0x10fc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC00u;
        // 0x10fc04: 0x240e0080  addiu       $t6, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc00) {
            ctx->pc = 0x10FC20u;
            return;
        }
    }
    ctx->pc = 0x10FC08u;
    // 0x10fc08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x10fc0cu;
}
