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

// Function: entry_0013100c
// Address: 0x13100c - 0x131028
void entry_0013100c_0x13100c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013100c_0x13100c");
#endif

    ctx->pc = 0x13100cu;

    // 0x13100c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13100cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x131010: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x131010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x131014: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x131014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x131018: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131018u;
    {
        const bool branch_taken_0x131018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131018u;
        // 0x13101c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131018) {
            ctx->pc = 0x131028u;
            return;
        }
    }
    ctx->pc = 0x131020u;
    // 0x131020: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x131020u;
    {
        const bool branch_taken_0x131020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131020) {
            ctx->pc = 0x131038u;
            return;
        }
    }
    ctx->pc = 0x131028u;
}
