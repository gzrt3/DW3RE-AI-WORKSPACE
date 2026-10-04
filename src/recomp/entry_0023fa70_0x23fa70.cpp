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

// Function: entry_0023fa70
// Address: 0x23fa70 - 0x23fa80
void entry_0023fa70_0x23fa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fa70_0x23fa70");
#endif

    ctx->pc = 0x23fa70u;

    // 0x23fa70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23fa74: 0x16820002  bne         $s4, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23FA74u;
    {
        const bool branch_taken_0x23fa74 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA74u;
        // 0x23fa78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa74) {
            ctx->pc = 0x23FA80u;
            return;
        }
    }
    ctx->pc = 0x23FA7Cu;
    // 0x23fa7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x23fa80u;
}
