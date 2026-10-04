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

// Function: entry_002203b8
// Address: 0x2203b8 - 0x2203d8
void entry_002203b8_0x2203b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002203b8_0x2203b8");
#endif

    switch (ctx->pc) {
        case 0x2203d0u: goto label_2203d0;
        default: break;
    }

    ctx->pc = 0x2203b8u;

    // 0x2203b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2203b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2203bc: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2203BCu;
    {
        const bool branch_taken_0x2203bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2203C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203BCu;
        // 0x2203c0: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203bc) {
            ctx->pc = 0x2203D8u;
            return;
        }
    }
    ctx->pc = 0x2203C4u;
    // 0x2203c4: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x2203c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x2203c8: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2203C8u;
    SET_GPR_U32(ctx, 31, 0x2203D0u);
    ctx->pc = 0x2203CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203C8u;
    // 0x2203cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2203C8u, 0x2203D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203D0u;
label_2203d0:
    // 0x2203d0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2203D0u;
    {
        const bool branch_taken_0x2203d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2203d0) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x2203D8u;
}
