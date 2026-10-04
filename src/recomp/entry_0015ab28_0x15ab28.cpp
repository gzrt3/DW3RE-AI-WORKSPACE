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

// Function: entry_0015ab28
// Address: 0x15ab28 - 0x15ab40
void entry_0015ab28_0x15ab28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ab28_0x15ab28");
#endif

    switch (ctx->pc) {
        case 0x15ab30u: goto label_15ab30;
        default: break;
    }

    ctx->pc = 0x15ab28u;

    // 0x15ab28: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x15AB28u;
    SET_GPR_U32(ctx, 31, 0x15AB30u);
    ctx->pc = 0x15AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB28u;
    // 0x15ab2c: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x15AB28u, 0x15AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB30u;
label_15ab30:
    // 0x15ab30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AB30u;
    {
        const bool branch_taken_0x15ab30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB30u;
        // 0x15ab34: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab30) {
            ctx->pc = 0x15AB40u;
            return;
        }
    }
    ctx->pc = 0x15AB38u;
    // 0x15ab38: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15AB38u;
    {
        const bool branch_taken_0x15ab38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB38u;
        // 0x15ab3c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab38) {
            ctx->pc = 0x15AB64u;
            return;
        }
    }
    ctx->pc = 0x15AB40u;
}
