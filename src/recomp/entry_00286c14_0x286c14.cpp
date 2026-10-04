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

// Function: entry_00286c14
// Address: 0x286c14 - 0x286c28
void entry_00286c14_0x286c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286c14_0x286c14");
#endif

    ctx->pc = 0x286c14u;

    // 0x286c14: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x286c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c18: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x286c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x286c1c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x286c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x286c20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x286C20u;
    {
        const bool branch_taken_0x286c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C20u;
        // 0x286c24: 0xfca26708  sd          $v0, 0x6708($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 26376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c20) {
            ctx->pc = 0x286C58u;
            return;
        }
    }
    ctx->pc = 0x286C28u;
}
