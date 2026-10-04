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

// Function: entry_0021a788
// Address: 0x21a788 - 0x21a7a8
void entry_0021a788_0x21a788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a788_0x21a788");
#endif

    switch (ctx->pc) {
        case 0x21a790u: goto label_21a790;
        case 0x21a798u: goto label_21a798;
        default: break;
    }

    ctx->pc = 0x21a788u;

    // 0x21a788: 0xc078050  jal         func_1E0140
    ctx->pc = 0x21A788u;
    SET_GPR_U32(ctx, 31, 0x21A790u);
    ctx->pc = 0x21A78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A788u;
    // 0x21a78c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0140u, 0x21A788u, 0x21A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A790u;
label_21a790:
    // 0x21a790: 0xc078070  jal         func_1E01C0
    ctx->pc = 0x21A790u;
    SET_GPR_U32(ctx, 31, 0x21A798u);
    ctx->pc = 0x1E01C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E01C0u, 0x21A790u, 0x21A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A798u;
label_21a798:
    // 0x21a798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a79c: 0xaf829290  sw          $v0, -0x6D70($gp)
    ctx->pc = 0x21a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939280), GPR_U32(ctx, 2));
    // 0x21a7a0: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x21A7A0u;
    {
        const bool branch_taken_0x21a7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A7A0u;
        // 0x21a7a4: 0xaf829288  sw          $v0, -0x6D78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a7a0) {
            ctx->pc = 0x21AA68u;
            return;
        }
    }
    ctx->pc = 0x21A7A8u;
}
