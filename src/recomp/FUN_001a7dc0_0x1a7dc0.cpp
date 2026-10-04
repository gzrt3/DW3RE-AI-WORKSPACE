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

// Function: FUN_001a7dc0
// Address: 0x1a7dc0 - 0x1a7dfc
void FUN_001a7dc0_0x1a7dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7dc0_0x1a7dc0");
#endif

    switch (ctx->pc) {
        case 0x1a7dc0u: goto label_1a7dc0;
        case 0x1a7dc4u: goto label_1a7dc4;
        case 0x1a7dc8u: goto label_1a7dc8;
        case 0x1a7dccu: goto label_1a7dcc;
        case 0x1a7dd0u: goto label_1a7dd0;
        case 0x1a7dd4u: goto label_1a7dd4;
        case 0x1a7dd8u: goto label_1a7dd8;
        case 0x1a7ddcu: goto label_1a7ddc;
        case 0x1a7de0u: goto label_1a7de0;
        case 0x1a7de4u: goto label_1a7de4;
        case 0x1a7de8u: goto label_1a7de8;
        case 0x1a7decu: goto label_1a7dec;
        case 0x1a7df0u: goto label_1a7df0;
        case 0x1a7df4u: goto label_1a7df4;
        case 0x1a7df8u: goto label_1a7df8;
        default: break;
    }

    ctx->pc = 0x1a7dc0u;

label_1a7dc0:
    // 0x1a7dc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a7dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a7dc4:
    // 0x1a7dc4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1a7dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_1a7dc8:
    // 0x1a7dc8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a7dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1a7dcc:
    // 0x1a7dcc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a7dccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7dd0:
    // 0x1a7dd0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1a7dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_1a7dd4:
    // 0x1a7dd4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a7dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1a7dd8:
    // 0x1a7dd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ddc:
    // 0x1a7ddc: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a7ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_1a7de0:
    // 0x1a7de0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a7de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a7de4:
    // 0x1a7de4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a7de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a7de8:
    // 0x1a7de8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1a7de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1a7dec:
    // 0x1a7dec: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1a7decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a7df0:
    // 0x1a7df0: 0x40f809  jalr        $v0
label_1a7df4:
    if (ctx->pc == 0x1A7DF4u) {
        ctx->pc = 0x1A7DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DF0u;
        // 0x1a7df4: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7DF8u;
        goto label_1a7df8;
    }
    ctx->pc = 0x1A7DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7DF8u);
        ctx->pc = 0x1A7DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DF0u;
        // 0x1a7df4: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7DF0u, 0x1A7DF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7DF8u;
label_1a7df8:
    // 0x1a7df8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a7df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a7dfcu;
}
