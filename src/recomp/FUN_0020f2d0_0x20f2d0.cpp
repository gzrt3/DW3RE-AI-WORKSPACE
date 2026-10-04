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

// Function: FUN_0020f2d0
// Address: 0x20f2d0 - 0x20f30c
void FUN_0020f2d0_0x20f2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020f2d0_0x20f2d0");
#endif

    switch (ctx->pc) {
        case 0x20f2ecu: goto label_20f2ec;
        case 0x20f2f8u: goto label_20f2f8;
        case 0x20f304u: goto label_20f304;
        default: break;
    }

    ctx->pc = 0x20f2d0u;

    // 0x20f2d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20f2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20f2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20f2d8: 0x8f83918c  lw          $v1, -0x6E74($gp)
    ctx->pc = 0x20f2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
    // 0x20f2dc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x20F2DCu;
    {
        const bool branch_taken_0x20f2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2DCu;
        // 0x20f2e0: 0x24040276  addiu       $a0, $zero, 0x276 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2dc) {
            ctx->pc = 0x20F308u;
            goto label_20f308;
        }
    }
    ctx->pc = 0x20F2E4u;
    // 0x20f2e4: 0xc041738  jal         func_105CE0
    ctx->pc = 0x20F2E4u;
    SET_GPR_U32(ctx, 31, 0x20F2ECu);
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x20F2E4u, 0x20F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2ECu;
label_20f2ec:
    // 0x20f2ec: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x20f2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x20f2f0: 0xc070080  jal         func_1C0200
    ctx->pc = 0x20F2F0u;
    SET_GPR_U32(ctx, 31, 0x20F2F8u);
    ctx->pc = 0x20F2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F2F0u;
    // 0x20f2f4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20F2F0u, 0x20F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2F8u;
label_20f2f8:
    // 0x20f2f8: 0x24040276  addiu       $a0, $zero, 0x276
    ctx->pc = 0x20f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
    // 0x20f2fc: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x20F2FCu;
    SET_GPR_U32(ctx, 31, 0x20F304u);
    ctx->pc = 0x20F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F2FCu;
    // 0x20f300: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x20F2FCu, 0x20F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F304u;
label_20f304:
    // 0x20f304: 0xaf82918c  sw          $v0, -0x6E74($gp)
    ctx->pc = 0x20f304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939020), GPR_U32(ctx, 2));
label_20f308:
    // 0x20f308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x20f30cu;
}
