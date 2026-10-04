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

// Function: entry_0021fdd8
// Address: 0x21fdd8 - 0x21fdf8
void entry_0021fdd8_0x21fdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fdd8_0x21fdd8");
#endif

    switch (ctx->pc) {
        case 0x21fde0u: goto label_21fde0;
        case 0x21fdf4u: goto label_21fdf4;
        default: break;
    }

    ctx->pc = 0x21fdd8u;

    // 0x21fdd8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FDD8u;
    SET_GPR_U32(ctx, 31, 0x21FDE0u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FDD8u, 0x21FDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDE0u;
label_21fde0:
    // 0x21fde0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FDE0u;
    {
        const bool branch_taken_0x21fde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDE0u;
        // 0x21fde4: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fde0) {
            ctx->pc = 0x21FDF8u;
            return;
        }
    }
    ctx->pc = 0x21FDE8u;
    // 0x21fde8: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x21fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x21fdec: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FDECu;
    SET_GPR_U32(ctx, 31, 0x21FDF4u);
    ctx->pc = 0x21FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDECu;
    // 0x21fdf0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FDECu, 0x21FDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDF4u;
label_21fdf4:
    // 0x21fdf4: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x21fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->pc = 0x21fdf8u;
}
