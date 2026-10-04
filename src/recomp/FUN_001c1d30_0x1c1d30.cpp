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

// Function: FUN_001c1d30
// Address: 0x1c1d30 - 0x1c1d88
void FUN_001c1d30_0x1c1d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1d30_0x1c1d30");
#endif

    switch (ctx->pc) {
        case 0x1c1d44u: goto label_1c1d44;
        case 0x1c1d4cu: goto label_1c1d4c;
        case 0x1c1d68u: goto label_1c1d68;
        case 0x1c1d74u: goto label_1c1d74;
        case 0x1c1d7cu: goto label_1c1d7c;
        case 0x1c1d84u: goto label_1c1d84;
        default: break;
    }

    ctx->pc = 0x1c1d30u;

    // 0x1c1d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1d3c: 0xc073d70  jal         func_1CF5C0
    ctx->pc = 0x1C1D3Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D44u);
    ctx->pc = 0x1C1D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D3Cu;
    // 0x1c1d40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF5C0u, 0x1C1D3Cu, 0x1C1D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D44u;
label_1c1d44:
    // 0x1c1d44: 0xc0743a4  jal         func_1D0E90
    ctx->pc = 0x1C1D44u;
    SET_GPR_U32(ctx, 31, 0x1C1D4Cu);
    ctx->pc = 0x1C1D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D44u;
    // 0x1c1d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0E90u, 0x1C1D44u, 0x1C1D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D4Cu;
label_1c1d4c:
    // 0x1c1d4c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c1d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1c1d50: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c1d54: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1c1d54u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x1c1d58: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1D58u;
    {
        const bool branch_taken_0x1c1d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C1D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D58u;
        // 0x1c1d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d58) {
            ctx->pc = 0x1C1D6Cu;
            goto label_1c1d6c;
        }
    }
    ctx->pc = 0x1C1D60u;
    // 0x1c1d60: 0xc074778  jal         func_1D1DE0
    ctx->pc = 0x1C1D60u;
    SET_GPR_U32(ctx, 31, 0x1C1D68u);
    ctx->pc = 0x1C1D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D60u;
    // 0x1c1d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DE0u, 0x1C1D60u, 0x1C1D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D68u;
label_1c1d68:
    // 0x1c1d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1d6c:
    // 0x1c1d6c: 0xc071188  jal         func_1C4620
    ctx->pc = 0x1C1D6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D74u);
    ctx->pc = 0x1C4620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4620u, 0x1C1D6Cu, 0x1C1D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D74u;
label_1c1d74:
    // 0x1c1d74: 0xc073174  jal         func_1CC5D0
    ctx->pc = 0x1C1D74u;
    SET_GPR_U32(ctx, 31, 0x1C1D7Cu);
    ctx->pc = 0x1C1D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D74u;
    // 0x1c1d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5D0u, 0x1C1D74u, 0x1C1D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D7Cu;
label_1c1d7c:
    // 0x1c1d7c: 0xc091148  jal         func_244520
    ctx->pc = 0x1C1D7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D84u);
    ctx->pc = 0x1C1D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D7Cu;
    // 0x1c1d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244520u, 0x1C1D7Cu, 0x1C1D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D84u;
label_1c1d84:
    // 0x1c1d84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1c1d88u;
}
