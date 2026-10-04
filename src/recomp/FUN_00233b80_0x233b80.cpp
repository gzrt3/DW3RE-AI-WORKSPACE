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

// Function: FUN_00233b80
// Address: 0x233b80 - 0x233ba4
void FUN_00233b80_0x233b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233b80_0x233b80");
#endif

    switch (ctx->pc) {
        case 0x233b9cu: goto label_233b9c;
        default: break;
    }

    ctx->pc = 0x233b80u;

    // 0x233b80: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x233b84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x233b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233b8c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x233b90: 0x342111a0  ori         $at, $at, 0x11A0
    ctx->pc = 0x233b90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4512);
    // 0x233b94: 0xc08ca6e  jal         func_2329B8
    ctx->pc = 0x233B94u;
    SET_GPR_U32(ctx, 31, 0x233B9Cu);
    ctx->pc = 0x233B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B94u;
    // 0x233b98: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2329B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2329B8u, 0x233B94u, 0x233B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B9Cu;
label_233b9c:
    // 0x233b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x233ba4u;
}
