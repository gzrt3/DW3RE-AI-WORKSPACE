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

// Function: entry_00199874
// Address: 0x199874 - 0x199888
void entry_00199874_0x199874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199874_0x199874");
#endif

    switch (ctx->pc) {
        case 0x199880u: goto label_199880;
        default: break;
    }

    ctx->pc = 0x199874u;

    // 0x199874: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199878: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x199878u;
    SET_GPR_U32(ctx, 31, 0x199880u);
    ctx->pc = 0x19987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199878u;
    // 0x19987c: 0x24849d80  addiu       $a0, $a0, -0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x199878u, 0x199880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199880u;
label_199880:
    // 0x199880: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x199880u;
    {
        const bool branch_taken_0x199880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199880u;
        // 0x199884: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199880) {
            ctx->pc = 0x1998B0u;
            return;
        }
    }
    ctx->pc = 0x199888u;
}
