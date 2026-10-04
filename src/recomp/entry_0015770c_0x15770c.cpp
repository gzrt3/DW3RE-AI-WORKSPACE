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

// Function: entry_0015770c
// Address: 0x15770c - 0x157730
void entry_0015770c_0x15770c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015770c_0x15770c");
#endif

    switch (ctx->pc) {
        case 0x157714u: goto label_157714;
        default: break;
    }

    ctx->pc = 0x15770cu;

    // 0x15770c: 0xc05af40  jal         func_16BD00
    ctx->pc = 0x15770Cu;
    SET_GPR_U32(ctx, 31, 0x157714u);
    ctx->pc = 0x16BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD00u, 0x15770Cu, 0x157714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157714u;
label_157714:
    // 0x157714: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x157714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x157718: 0x8c22c9b4  lw          $v0, -0x364C($at)
    ctx->pc = 0x157718u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x29C9B4u));
    // 0x15771c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15771Cu;
    {
        const bool branch_taken_0x15771c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x157720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15771Cu;
        // 0x157720: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15771c) {
            ctx->pc = 0x157730u;
            return;
        }
    }
    ctx->pc = 0x157724u;
    // 0x157724: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x157724u;
    {
        const bool branch_taken_0x157724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157724u;
        // 0x157728: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157724) {
            ctx->pc = 0x157734u;
            return;
        }
    }
    ctx->pc = 0x15772Cu;
    // 0x15772c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x15772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    ctx->pc = 0x157730u;
}
