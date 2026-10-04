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

// Function: FUN_001a7f88
// Address: 0x1a7f88 - 0x1a7fc8
void FUN_001a7f88_0x1a7f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7f88_0x1a7f88");
#endif

    switch (ctx->pc) {
        case 0x1a7fa0u: goto label_1a7fa0;
        case 0x1a7fa8u: goto label_1a7fa8;
        case 0x1a7fb0u: goto label_1a7fb0;
        case 0x1a7fc0u: goto label_1a7fc0;
        default: break;
    }

    ctx->pc = 0x1a7f88u;

    // 0x1a7f88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7f90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a7f94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7F94u;
    {
        const bool branch_taken_0x1a7f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F94u;
        // 0x1a7f98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f94) {
            ctx->pc = 0x1A7FA8u;
            goto label_1a7fa8;
        }
    }
    ctx->pc = 0x1A7F9Cu;
    // 0x1a7f9c: 0x0  nop
    ctx->pc = 0x1a7f9cu;
    // NOP
label_1a7fa0:
    // 0x1a7fa0: 0xc069f70  jal         func_1A7DC0
    ctx->pc = 0x1A7FA0u;
    SET_GPR_U32(ctx, 31, 0x1A7FA8u);
    ctx->pc = 0x1A7DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7DC0u, 0x1A7FA0u, 0x1A7FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7FA8u;
label_1a7fa8:
    // 0x1a7fa8: 0xc069f5a  jal         func_1A7D68
    ctx->pc = 0x1A7FA8u;
    SET_GPR_U32(ctx, 31, 0x1A7FB0u);
    ctx->pc = 0x1A7FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7FA8u;
    // 0x1a7fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7D68u, 0x1A7FA8u, 0x1A7FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7FB0u;
label_1a7fb0:
    // 0x1a7fb0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A7FB0u;
    {
        const bool branch_taken_0x1a7fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FB0u;
        // 0x1a7fb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fb0) {
            ctx->pc = 0x1A7FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7fa0;
        }
    }
    ctx->pc = 0x1A7FB8u;
    // 0x1a7fb8: 0xc0691d0  jal         func_1A4740
    ctx->pc = 0x1A7FB8u;
    SET_GPR_U32(ctx, 31, 0x1A7FC0u);
    ctx->pc = 0x1A4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4740u, 0x1A7FB8u, 0x1A7FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7FC0u;
label_1a7fc0:
    // 0x1a7fc0: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A7FC0u;
    {
        const bool branch_taken_0x1a7fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7fc0) {
            ctx->pc = 0x1A7FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7fa8;
        }
    }
    ctx->pc = 0x1A7FC8u;
}
