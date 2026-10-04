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

// Function: entry_0012cb0c
// Address: 0x12cb0c - 0x12cb1c
void entry_0012cb0c_0x12cb0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cb0c_0x12cb0c");
#endif

    switch (ctx->pc) {
        case 0x12cb14u: goto label_12cb14;
        default: break;
    }

    ctx->pc = 0x12cb0cu;

    // 0x12cb0c: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12CB0Cu;
    SET_GPR_U32(ctx, 31, 0x12CB14u);
    ctx->pc = 0x12CB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB0Cu;
    // 0x12cb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12CB0Cu, 0x12CB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB14u;
label_12cb14:
    // 0x12cb14: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x12CB14u;
    {
        const bool branch_taken_0x12cb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB14u;
        // 0x12cb18: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb14) {
            ctx->pc = 0x12CC98u;
            return;
        }
    }
    ctx->pc = 0x12CB1Cu;
}
