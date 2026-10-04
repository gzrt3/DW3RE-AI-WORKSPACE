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

// Function: entry_00175580
// Address: 0x175580 - 0x175590
void entry_00175580_0x175580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175580_0x175580");
#endif

    ctx->pc = 0x175580u;

    // 0x175580: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175580u;
    {
        const bool branch_taken_0x175580 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x175584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175580u;
        // 0x175584: 0x24070514  addiu       $a3, $zero, 0x514 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175580) {
            ctx->pc = 0x175590u;
            return;
        }
    }
    ctx->pc = 0x175588u;
    // 0x175588: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x175588u;
    {
        const bool branch_taken_0x175588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175588) {
            ctx->pc = 0x1755E4u;
            return;
        }
    }
    ctx->pc = 0x175590u;
}
