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

// Function: FUN_00240030
// Address: 0x240030 - 0x240064
void FUN_00240030_0x240030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00240030_0x240030");
#endif

    switch (ctx->pc) {
        case 0x240044u: goto label_240044;
        case 0x240050u: goto label_240050;
        case 0x240058u: goto label_240058;
        case 0x240060u: goto label_240060;
        default: break;
    }

    ctx->pc = 0x240030u;

    // 0x240030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240034: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x240034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x240038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24003c: 0xc059334  jal         func_164CD0
    ctx->pc = 0x24003Cu;
    SET_GPR_U32(ctx, 31, 0x240044u);
    ctx->pc = 0x240040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24003Cu;
    // 0x240040: 0x2484e2a0  addiu       $a0, $a0, -0x1D60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164CD0u, 0x24003Cu, 0x240044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240044u;
label_240044:
    // 0x240044: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x240044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x240048: 0xc059e6c  jal         func_1679B0
    ctx->pc = 0x240048u;
    SET_GPR_U32(ctx, 31, 0x240050u);
    ctx->pc = 0x24004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240048u;
    // 0x24004c: 0x2484e29c  addiu       $a0, $a0, -0x1D64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959772));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1679B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1679B0u, 0x240048u, 0x240050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240050u;
label_240050:
    // 0x240050: 0xc059e0c  jal         func_167830
    ctx->pc = 0x240050u;
    SET_GPR_U32(ctx, 31, 0x240058u);
    ctx->pc = 0x167830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167830u, 0x240050u, 0x240058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240058u;
label_240058:
    // 0x240058: 0xc059290  jal         func_164A40
    ctx->pc = 0x240058u;
    SET_GPR_U32(ctx, 31, 0x240060u);
    ctx->pc = 0x164A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A40u, 0x240058u, 0x240060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240060u;
label_240060:
    // 0x240060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x240064u;
}
