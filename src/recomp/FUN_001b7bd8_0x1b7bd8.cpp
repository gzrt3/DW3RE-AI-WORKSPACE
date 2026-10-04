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

// Function: FUN_001b7bd8
// Address: 0x1b7bd8 - 0x1b7c1c
void FUN_001b7bd8_0x1b7bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7bd8_0x1b7bd8");
#endif

    switch (ctx->pc) {
        case 0x1b7bf8u: goto label_1b7bf8;
        case 0x1b7c08u: goto label_1b7c08;
        case 0x1b7c14u: goto label_1b7c14;
        default: break;
    }

    ctx->pc = 0x1b7bd8u;

    // 0x1b7bd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b7bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b7bdc: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x1b7bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x1b7be0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b7be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b7be4: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x1b7be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x1b7be8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1b7be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1b7bec: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1b7becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1b7bf0: 0xc06dcb0  jal         func_1B72C0
    ctx->pc = 0x1B7BF0u;
    SET_GPR_U32(ctx, 31, 0x1B7BF8u);
    ctx->pc = 0x1B7BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BF0u;
    // 0x1b7bf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B72C0u, 0x1B7BF0u, 0x1B7BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BF8u;
label_1b7bf8:
    // 0x1b7bf8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1b7bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b7bfc: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1b7bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1b7c00: 0xc06dcb0  jal         func_1B72C0
    ctx->pc = 0x1B7C00u;
    SET_GPR_U32(ctx, 31, 0x1B7C08u);
    ctx->pc = 0x1B7C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C00u;
    // 0x1b7c04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B72C0u, 0x1B7C00u, 0x1B7C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C08u;
label_1b7c08:
    // 0x1b7c08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c0c: 0xc06deae  jal         func_1B7AB8
    ctx->pc = 0x1B7C0Cu;
    SET_GPR_U32(ctx, 31, 0x1B7C14u);
    ctx->pc = 0x1B7C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C0Cu;
    // 0x1b7c10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7AB8u, 0x1B7C0Cu, 0x1B7C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C14u;
label_1b7c14:
    // 0x1b7c14: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1b7c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7c18: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1b7c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->pc = 0x1b7c1cu;
}
