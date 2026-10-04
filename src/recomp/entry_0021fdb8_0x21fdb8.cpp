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

// Function: entry_0021fdb8
// Address: 0x21fdb8 - 0x21fdd8
void entry_0021fdb8_0x21fdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fdb8_0x21fdb8");
#endif

    switch (ctx->pc) {
        case 0x21fdc0u: goto label_21fdc0;
        case 0x21fdd4u: goto label_21fdd4;
        default: break;
    }

    ctx->pc = 0x21fdb8u;

    // 0x21fdb8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FDB8u;
    SET_GPR_U32(ctx, 31, 0x21FDC0u);
    ctx->pc = 0x21FDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDB8u;
    // 0x21fdbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FDB8u, 0x21FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDC0u;
label_21fdc0:
    // 0x21fdc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FDC0u;
    {
        const bool branch_taken_0x21fdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDC0u;
        // 0x21fdc4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fdc0) {
            ctx->pc = 0x21FDD8u;
            return;
        }
    }
    ctx->pc = 0x21FDC8u;
    // 0x21fdc8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x21fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x21fdcc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FDCCu;
    SET_GPR_U32(ctx, 31, 0x21FDD4u);
    ctx->pc = 0x21FDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDCCu;
    // 0x21fdd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FDCCu, 0x21FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDD4u;
label_21fdd4:
    // 0x21fdd4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x21fdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x21fdd8u;
}
