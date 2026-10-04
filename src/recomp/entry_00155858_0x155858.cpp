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

// Function: entry_00155858
// Address: 0x155858 - 0x1558b0
void entry_00155858_0x155858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155858_0x155858");
#endif

    switch (ctx->pc) {
        case 0x155860u: goto label_155860;
        case 0x155868u: goto label_155868;
        case 0x155888u: goto label_155888;
        case 0x155890u: goto label_155890;
        case 0x155898u: goto label_155898;
        default: break;
    }

    ctx->pc = 0x155858u;

label_155858:
    // 0x155858: 0xc060290  jal         func_180A40
    ctx->pc = 0x155858u;
    SET_GPR_U32(ctx, 31, 0x155860u);
    ctx->pc = 0x180A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180A40u, 0x155858u, 0x155860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155860u;
label_155860:
    // 0x155860: 0xc04e198  jal         func_138660
    ctx->pc = 0x155860u;
    SET_GPR_U32(ctx, 31, 0x155868u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x155860u, 0x155868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155868u;
label_155868:
    // 0x155868: 0x0  nop
    ctx->pc = 0x155868u;
    // NOP
    // 0x15586c: 0x0  nop
    ctx->pc = 0x15586cu;
    // NOP
    // 0x155870: 0x0  nop
    ctx->pc = 0x155870u;
    // NOP
    // 0x155874: 0x0  nop
    ctx->pc = 0x155874u;
    // NOP
    // 0x155878: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x155878u;
    {
        const bool branch_taken_0x155878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155878) {
            ctx->pc = 0x155858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155858;
        }
    }
    ctx->pc = 0x155880u;
    // 0x155880: 0xc060250  jal         func_180940
    ctx->pc = 0x155880u;
    SET_GPR_U32(ctx, 31, 0x155888u);
    ctx->pc = 0x180940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180940u, 0x155880u, 0x155888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155888u;
label_155888:
    // 0x155888: 0xc060258  jal         func_180960
    ctx->pc = 0x155888u;
    SET_GPR_U32(ctx, 31, 0x155890u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x155888u, 0x155890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155890u;
label_155890:
    // 0x155890: 0xc060258  jal         func_180960
    ctx->pc = 0x155890u;
    SET_GPR_U32(ctx, 31, 0x155898u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x155890u, 0x155898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155898u;
label_155898:
    // 0x155898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15589c: 0x3e00008  jr          $ra
    ctx->pc = 0x15589Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1558A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15589Cu;
        // 0x1558a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15589Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1558A4u;
    // 0x1558a4: 0x0  nop
    ctx->pc = 0x1558a4u;
    // NOP
    // 0x1558a8: 0x0  nop
    ctx->pc = 0x1558a8u;
    // NOP
    // 0x1558ac: 0x0  nop
    ctx->pc = 0x1558acu;
    // NOP
    ctx->pc = 0x1558b0u;
}
