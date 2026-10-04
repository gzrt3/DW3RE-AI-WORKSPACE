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

// Function: entry_0010ea2c
// Address: 0x10ea2c - 0x10ea88
void entry_0010ea2c_0x10ea2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ea2c_0x10ea2c");
#endif

    switch (ctx->pc) {
        case 0x10ea34u: goto label_10ea34;
        case 0x10ea3cu: goto label_10ea3c;
        case 0x10ea50u: goto label_10ea50;
        case 0x10ea58u: goto label_10ea58;
        case 0x10ea64u: goto label_10ea64;
        default: break;
    }

    ctx->pc = 0x10ea2cu;

    // 0x10ea2c: 0xc043e98  jal         func_10FA60
    ctx->pc = 0x10EA2Cu;
    SET_GPR_U32(ctx, 31, 0x10EA34u);
    ctx->pc = 0x10FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA60u, 0x10EA2Cu, 0x10EA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA34u;
label_10ea34:
    // 0x10ea34: 0xc056238  jal         func_1588E0
    ctx->pc = 0x10EA34u;
    SET_GPR_U32(ctx, 31, 0x10EA3Cu);
    ctx->pc = 0x1588E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1588E0u, 0x10EA34u, 0x10EA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA3Cu;
label_10ea3c:
    // 0x10ea3c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10ea3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10ea40: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x10ea40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x10ea44: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10ea44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10ea48: 0xc0442b0  jal         func_110AC0
    ctx->pc = 0x10EA48u;
    SET_GPR_U32(ctx, 31, 0x10EA50u);
    ctx->pc = 0x10EA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA48u;
    // 0x10ea4c: 0x9025490c  lbu         $a1, 0x490C($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110AC0u, 0x10EA48u, 0x10EA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA50u;
label_10ea50:
    // 0x10ea50: 0xc04419c  jal         func_110670
    ctx->pc = 0x10EA50u;
    SET_GPR_U32(ctx, 31, 0x10EA58u);
    ctx->pc = 0x110670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110670u, 0x10EA50u, 0x10EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA58u;
label_10ea58:
    // 0x10ea58: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10ea58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10ea5c: 0xc087b64  jal         func_21ED90
    ctx->pc = 0x10EA5Cu;
    SET_GPR_U32(ctx, 31, 0x10EA64u);
    ctx->pc = 0x10EA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA5Cu;
    // 0x10ea60: 0x9024490c  lbu         $a0, 0x490C($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21ED90u, 0x10EA5Cu, 0x10EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA64u;
label_10ea64:
    // 0x10ea64: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10ea64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10ea68: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x10ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x10ea6c: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x10ea6cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x10ea70: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10EA70u;
    {
        const bool branch_taken_0x10ea70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA70u;
        // 0x10ea74: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea70) {
            ctx->pc = 0x10EA88u;
            return;
        }
    }
    ctx->pc = 0x10EA78u;
    // 0x10ea78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EA78u;
    {
        const bool branch_taken_0x10ea78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA78u;
        // 0x10ea7c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea78) {
            ctx->pc = 0x10EA88u;
            return;
        }
    }
    ctx->pc = 0x10EA80u;
    // 0x10ea80: 0xc043ec4  jal         func_10FB10
    ctx->pc = 0x10EA80u;
    SET_GPR_U32(ctx, 31, 0x10EA88u);
    ctx->pc = 0x10EA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA80u;
    // 0x10ea84: 0x90244af2  lbu         $a0, 0x4AF2($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19186)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB10u, 0x10EA80u, 0x10EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA88u;
}
