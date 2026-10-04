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

// Function: FUN_001ad6e8
// Address: 0x1ad6e8 - 0x1ad724
void FUN_001ad6e8_0x1ad6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ad6e8_0x1ad6e8");
#endif

    switch (ctx->pc) {
        case 0x1ad6f8u: goto label_1ad6f8;
        case 0x1ad700u: goto label_1ad700;
        case 0x1ad708u: goto label_1ad708;
        case 0x1ad710u: goto label_1ad710;
        case 0x1ad718u: goto label_1ad718;
        default: break;
    }

    ctx->pc = 0x1ad6e8u;

    // 0x1ad6e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ad6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ad6ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ad6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ad6f0: 0xc06b530  jal         func_1AD4C0
    ctx->pc = 0x1AD6F0u;
    SET_GPR_U32(ctx, 31, 0x1AD6F8u);
    ctx->pc = 0x1AD4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4C0u, 0x1AD6F0u, 0x1AD6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD6F8u;
label_1ad6f8:
    // 0x1ad6f8: 0xc06b576  jal         func_1AD5D8
    ctx->pc = 0x1AD6F8u;
    SET_GPR_U32(ctx, 31, 0x1AD700u);
    ctx->pc = 0x1AD5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD5D8u, 0x1AD6F8u, 0x1AD700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD700u;
label_1ad700:
    // 0x1ad700: 0xc06b6ec  jal         func_1ADBB0
    ctx->pc = 0x1AD700u;
    SET_GPR_U32(ctx, 31, 0x1AD708u);
    ctx->pc = 0x1ADBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADBB0u, 0x1AD700u, 0x1AD708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD708u;
label_1ad708:
    // 0x1ad708: 0xc06957e  jal         func_1A55F8
    ctx->pc = 0x1AD708u;
    SET_GPR_U32(ctx, 31, 0x1AD710u);
    ctx->pc = 0x1A55F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A55F8u, 0x1AD708u, 0x1AD710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD710u;
label_1ad710:
    // 0x1ad710: 0xc06b5fe  jal         func_1AD7F8
    ctx->pc = 0x1AD710u;
    SET_GPR_U32(ctx, 31, 0x1AD718u);
    ctx->pc = 0x1AD7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD7F8u, 0x1AD710u, 0x1AD718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD718u;
label_1ad718:
    // 0x1ad718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ad718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad71c: 0x806b348  j           func_1ACD20
    ctx->pc = 0x1AD71Cu;
    ctx->pc = 0x1AD720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD71Cu;
    // 0x1ad720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD20u;
    FUN_001acd20_0x1acd20(rdram, ctx, runtime); return;
    ctx->pc = 0x1AD724u;
}
