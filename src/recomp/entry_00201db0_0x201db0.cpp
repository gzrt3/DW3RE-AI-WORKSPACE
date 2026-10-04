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

// Function: entry_00201db0
// Address: 0x201db0 - 0x201dd8
void entry_00201db0_0x201db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201db0_0x201db0");
#endif

    switch (ctx->pc) {
        case 0x201dbcu: goto label_201dbc;
        case 0x201dccu: goto label_201dcc;
        default: break;
    }

    ctx->pc = 0x201db0u;

    // 0x201db0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x201db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x201db4: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x201DB4u;
    SET_GPR_U32(ctx, 31, 0x201DBCu);
    ctx->pc = 0x201DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DB4u;
    // 0x201db8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F90u, 0x201DB4u, 0x201DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201DBCu;
label_201dbc:
    // 0x201dbc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x201dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x201dc0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x201dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x201dc4: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x201DC4u;
    SET_GPR_U32(ctx, 31, 0x201DCCu);
    ctx->pc = 0x201DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DC4u;
    // 0x201dc8: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x201DC4u, 0x201DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201DCCu;
label_201dcc:
    // 0x201dcc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x201dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x201dd0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x201DD0u;
    {
        const bool branch_taken_0x201dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DD0u;
        // 0x201dd4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201dd0) {
            ctx->pc = 0x201ED8u;
            return;
        }
    }
    ctx->pc = 0x201DD8u;
}
