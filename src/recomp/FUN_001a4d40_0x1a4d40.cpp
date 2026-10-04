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

// Function: FUN_001a4d40
// Address: 0x1a4d40 - 0x1a4d60
void FUN_001a4d40_0x1a4d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4d40_0x1a4d40");
#endif

    switch (ctx->pc) {
        case 0x1a4d58u: goto label_1a4d58;
        default: break;
    }

    ctx->pc = 0x1a4d40u;

    // 0x1a4d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a4d48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a4d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d4c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1a4d50: 0xc0692e4  jal         func_1A4B90
    ctx->pc = 0x1A4D50u;
    SET_GPR_U32(ctx, 31, 0x1A4D58u);
    ctx->pc = 0x1A4D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D50u;
    // 0x1a4d54: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B90u, 0x1A4D50u, 0x1A4D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D58u;
label_1a4d58:
    // 0x1a4d58: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A4D58u;
    SET_GPR_U32(ctx, 31, 0x1A4D60u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A4D58u, 0x1A4D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D60u;
}
