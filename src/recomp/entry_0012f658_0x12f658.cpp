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

// Function: entry_0012f658
// Address: 0x12f658 - 0x12f668
void entry_0012f658_0x12f658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f658_0x12f658");
#endif

    switch (ctx->pc) {
        case 0x12f660u: goto label_12f660;
        default: break;
    }

    ctx->pc = 0x12f658u;

    // 0x12f658: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12F658u;
    SET_GPR_U32(ctx, 31, 0x12F660u);
    ctx->pc = 0x12F65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F658u;
    // 0x12f65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12F658u, 0x12F660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F660u;
label_12f660:
    // 0x12f660: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x12F660u;
    {
        const bool branch_taken_0x12f660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F660u;
        // 0x12f664: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f660) {
            ctx->pc = 0x12FA0Cu;
            return;
        }
    }
    ctx->pc = 0x12F668u;
}
