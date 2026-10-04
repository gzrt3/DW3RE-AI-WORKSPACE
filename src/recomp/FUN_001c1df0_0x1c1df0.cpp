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

// Function: FUN_001c1df0
// Address: 0x1c1df0 - 0x1c1e48
void FUN_001c1df0_0x1c1df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1df0_0x1c1df0");
#endif

    switch (ctx->pc) {
        case 0x1c1e0cu: goto label_1c1e0c;
        case 0x1c1e14u: goto label_1c1e14;
        case 0x1c1e30u: goto label_1c1e30;
        case 0x1c1e3cu: goto label_1c1e3c;
        case 0x1c1e44u: goto label_1c1e44;
        default: break;
    }

    ctx->pc = 0x1c1df0u;

    // 0x1c1df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1df4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1dfc: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1c1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1c1e00: 0x30500400  andi        $s0, $v0, 0x400
    ctx->pc = 0x1c1e00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1c1e04: 0xc073e48  jal         func_1CF920
    ctx->pc = 0x1C1E04u;
    SET_GPR_U32(ctx, 31, 0x1C1E0Cu);
    ctx->pc = 0x1C1E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E04u;
    // 0x1c1e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF920u, 0x1C1E04u, 0x1C1E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E0Cu;
label_1c1e0c:
    // 0x1c1e0c: 0xc07440c  jal         func_1D1030
    ctx->pc = 0x1C1E0Cu;
    SET_GPR_U32(ctx, 31, 0x1C1E14u);
    ctx->pc = 0x1C1E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E0Cu;
    // 0x1c1e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1030u, 0x1C1E0Cu, 0x1C1E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E14u;
label_1c1e14:
    // 0x1c1e14: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c1e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1c1e18: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c1e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c1e1c: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1c1e1cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x1c1e20: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1E20u;
    {
        const bool branch_taken_0x1c1e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E20u;
        // 0x1c1e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e20) {
            ctx->pc = 0x1C1E34u;
            goto label_1c1e34;
        }
    }
    ctx->pc = 0x1C1E28u;
    // 0x1c1e28: 0xc0747b4  jal         func_1D1ED0
    ctx->pc = 0x1C1E28u;
    SET_GPR_U32(ctx, 31, 0x1C1E30u);
    ctx->pc = 0x1C1E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E28u;
    // 0x1c1e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1ED0u, 0x1C1E28u, 0x1C1E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E30u;
label_1c1e30:
    // 0x1c1e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e34:
    // 0x1c1e34: 0xc0711f0  jal         func_1C47C0
    ctx->pc = 0x1C1E34u;
    SET_GPR_U32(ctx, 31, 0x1C1E3Cu);
    ctx->pc = 0x1C47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C47C0u, 0x1C1E34u, 0x1C1E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E3Cu;
label_1c1e3c:
    // 0x1c1e3c: 0xc0731b0  jal         func_1CC6C0
    ctx->pc = 0x1C1E3Cu;
    SET_GPR_U32(ctx, 31, 0x1C1E44u);
    ctx->pc = 0x1C1E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E3Cu;
    // 0x1c1e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC6C0u, 0x1C1E3Cu, 0x1C1E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E44u;
label_1c1e44:
    // 0x1c1e44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1c1e48u;
}
