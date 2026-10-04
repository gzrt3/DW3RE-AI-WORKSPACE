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

// Function: FUN_00233b48
// Address: 0x233b48 - 0x233b74
void FUN_00233b48_0x233b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233b48_0x233b48");
#endif

    switch (ctx->pc) {
        case 0x233b58u: goto label_233b58;
        case 0x233b6cu: goto label_233b6c;
        default: break;
    }

    ctx->pc = 0x233b48u;

    // 0x233b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x233b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233b50: 0xc08c42e  jal         func_2310B8
    ctx->pc = 0x233B50u;
    SET_GPR_U32(ctx, 31, 0x233B58u);
    ctx->pc = 0x2310B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310B8u, 0x233B50u, 0x233B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B58u;
label_233b58:
    // 0x233b58: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x233b5c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x233b60: 0x342111a0  ori         $at, $at, 0x11A0
    ctx->pc = 0x233b60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4512);
    // 0x233b64: 0xc08c9ee  jal         func_2327B8
    ctx->pc = 0x233B64u;
    SET_GPR_U32(ctx, 31, 0x233B6Cu);
    ctx->pc = 0x233B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B64u;
    // 0x233b68: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2327B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2327B8u, 0x233B64u, 0x233B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B6Cu;
label_233b6c:
    // 0x233b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x233b74u;
}
