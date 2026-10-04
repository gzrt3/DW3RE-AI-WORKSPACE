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

// Function: entry_00175564
// Address: 0x175564 - 0x17556c
void entry_00175564_0x175564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175564_0x175564");
#endif

    ctx->pc = 0x175564u;

    // 0x175564: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x175564u;
    {
        const bool branch_taken_0x175564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175564u;
        // 0x175568: 0x24070640  addiu       $a3, $zero, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175564) {
            ctx->pc = 0x1755E4u;
            return;
        }
    }
    ctx->pc = 0x17556Cu;
}
