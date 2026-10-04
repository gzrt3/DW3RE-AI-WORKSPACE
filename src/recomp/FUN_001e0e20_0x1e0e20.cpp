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

// Function: FUN_001e0e20
// Address: 0x1e0e20 - 0x1e0e68
void FUN_001e0e20_0x1e0e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0e20_0x1e0e20");
#endif

    switch (ctx->pc) {
        case 0x1e0e3cu: goto label_1e0e3c;
        case 0x1e0e44u: goto label_1e0e44;
        default: break;
    }

    ctx->pc = 0x1e0e20u;

    // 0x1e0e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e0e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e0e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e0e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e0e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e0e30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e0e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e34: 0xc078434  jal         func_1E10D0
    ctx->pc = 0x1E0E34u;
    SET_GPR_U32(ctx, 31, 0x1E0E3Cu);
    ctx->pc = 0x1E0E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0E34u;
    // 0x1e0e38: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E10D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E10D0u, 0x1E0E34u, 0x1E0E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0E3Cu;
label_1e0e3c:
    // 0x1e0e3c: 0xc0785f8  jal         func_1E17E0
    ctx->pc = 0x1E0E3Cu;
    SET_GPR_U32(ctx, 31, 0x1E0E44u);
    ctx->pc = 0x1E17E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E17E0u, 0x1E0E3Cu, 0x1E0E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0E44u;
label_1e0e44:
    // 0x1e0e44: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1e0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1e0e48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0E48u;
    {
        const bool branch_taken_0x1e0e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0e48) {
            ctx->pc = 0x1E0E60u;
            goto label_1e0e60;
        }
    }
    ctx->pc = 0x1E0E50u;
    // 0x1e0e50: 0x8f828dc0  lw          $v0, -0x7240($gp)
    ctx->pc = 0x1e0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938048)));
    // 0x1e0e54: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e0e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e0e58: 0x8f828dbc  lw          $v0, -0x7244($gp)
    ctx->pc = 0x1e0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938044)));
    // 0x1e0e5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e0e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e0e60:
    // 0x1e0e60: 0xc060258  jal         func_180960
    ctx->pc = 0x1E0E60u;
    SET_GPR_U32(ctx, 31, 0x1E0E68u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1E0E60u, 0x1E0E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0E68u;
}
