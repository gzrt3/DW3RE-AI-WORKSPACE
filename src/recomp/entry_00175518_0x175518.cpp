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

// Function: entry_00175518
// Address: 0x175518 - 0x175528
void entry_00175518_0x175518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175518_0x175518");
#endif

    ctx->pc = 0x175518u;

    // 0x175518: 0x14e60003  bne         $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x175518u;
    {
        const bool branch_taken_0x175518 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x175518) {
            ctx->pc = 0x175528u;
            return;
        }
    }
    ctx->pc = 0x175520u;
    // 0x175520: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x175520u;
    {
        const bool branch_taken_0x175520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175520u;
        // 0x175524: 0x24070640  addiu       $a3, $zero, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175520) {
            ctx->pc = 0x1755E4u;
            return;
        }
    }
    ctx->pc = 0x175528u;
}
