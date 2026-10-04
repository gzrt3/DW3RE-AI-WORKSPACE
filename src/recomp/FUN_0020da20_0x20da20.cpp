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

// Function: FUN_0020da20
// Address: 0x20da20 - 0x20da40
void FUN_0020da20_0x20da20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020da20_0x20da20");
#endif

    switch (ctx->pc) {
        case 0x20da30u: goto label_20da30;
        case 0x20da3cu: goto label_20da3c;
        default: break;
    }

    ctx->pc = 0x20da20u;

    // 0x20da20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20da20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20da24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20da24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20da28: 0xc083694  jal         func_20DA50
    ctx->pc = 0x20DA28u;
    SET_GPR_U32(ctx, 31, 0x20DA30u);
    ctx->pc = 0x20DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DA50u, 0x20DA28u, 0x20DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA30u;
label_20da30:
    // 0x20da30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20da30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20da34: 0xc05b420  jal         func_16D080
    ctx->pc = 0x20DA34u;
    SET_GPR_U32(ctx, 31, 0x20DA3Cu);
    ctx->pc = 0x20DA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DA34u;
    // 0x20da38: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x20DA34u, 0x20DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA3Cu;
label_20da3c:
    // 0x20da3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20da3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x20da40u;
}
