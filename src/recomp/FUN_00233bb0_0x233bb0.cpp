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

// Function: FUN_00233bb0
// Address: 0x233bb0 - 0x233bd4
void FUN_00233bb0_0x233bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233bb0_0x233bb0");
#endif

    switch (ctx->pc) {
        case 0x233bccu: goto label_233bcc;
        default: break;
    }

    ctx->pc = 0x233bb0u;

    // 0x233bb0: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x233bb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233bb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x233bb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233bbc: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x233bc0: 0x342111a0  ori         $at, $at, 0x11A0
    ctx->pc = 0x233bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4512);
    // 0x233bc4: 0xc08cab0  jal         func_232AC0
    ctx->pc = 0x233BC4u;
    SET_GPR_U32(ctx, 31, 0x233BCCu);
    ctx->pc = 0x233BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BC4u;
    // 0x233bc8: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232AC0u, 0x233BC4u, 0x233BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BCCu;
label_233bcc:
    // 0x233bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x233bd4u;
}
