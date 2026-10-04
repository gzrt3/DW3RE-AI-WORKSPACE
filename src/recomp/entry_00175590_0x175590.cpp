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

// Function: entry_00175590
// Address: 0x175590 - 0x1755a4
void entry_00175590_0x175590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175590_0x175590");
#endif

    ctx->pc = 0x175590u;

    // 0x175590: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x175590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175594: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175594u;
    {
        const bool branch_taken_0x175594 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x175598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175594u;
        // 0x175598: 0x24070672  addiu       $a3, $zero, 0x672 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1650));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175594) {
            ctx->pc = 0x1755A4u;
            return;
        }
    }
    ctx->pc = 0x17559Cu;
    // 0x17559c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17559Cu;
    {
        const bool branch_taken_0x17559c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1755A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17559Cu;
        // 0x1755a0: 0x24070546  addiu       $a3, $zero, 0x546 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17559c) {
            ctx->pc = 0x1755E4u;
            return;
        }
    }
    ctx->pc = 0x1755A4u;
}
