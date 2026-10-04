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

// Function: entry_001a4dac
// Address: 0x1a4dac - 0x1a4de8
void entry_001a4dac_0x1a4dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4dac_0x1a4dac");
#endif

    switch (ctx->pc) {
        case 0x1a4db4u: goto label_1a4db4;
        case 0x1a4dd4u: goto label_1a4dd4;
        default: break;
    }

    ctx->pc = 0x1a4dacu;

    // 0x1a4dac: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A4DACu;
    SET_GPR_U32(ctx, 31, 0x1A4DB4u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A4DACu, 0x1A4DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4DB4u;
label_1a4db4:
    // 0x1a4db4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a4db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a4db8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1a4db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1a4dbc: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x1a4dbcu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 3));
    // 0x1a4dc0: 0xf  sync
    ctx->pc = 0x1a4dc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a4dc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4DC4u;
    {
        const bool branch_taken_0x1a4dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4dc4) {
            ctx->pc = 0x1A4DD4u;
            goto label_1a4dd4;
        }
    }
    ctx->pc = 0x1A4DCCu;
    // 0x1a4dcc: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A4DCCu;
    SET_GPR_U32(ctx, 31, 0x1A4DD4u);
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A4DCCu, 0x1A4DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4DD4u;
label_1a4dd4:
    // 0x1a4dd4: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x1a4dd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4dd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DDCu;
        // 0x1a4de0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4DE4u;
    // 0x1a4de4: 0x0  nop
    ctx->pc = 0x1a4de4u;
    // NOP
    ctx->pc = 0x1a4de8u;
}
