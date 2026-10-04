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

// Function: FUN_00155840
// Address: 0x155840 - 0x155890
void FUN_00155840_0x155840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00155840_0x155840");
#endif

    switch (ctx->pc) {
        case 0x155858u: goto label_155858;
        case 0x155860u: goto label_155860;
        case 0x155868u: goto label_155868;
        case 0x155888u: goto label_155888;
        default: break;
    }

    ctx->pc = 0x155840u;

    // 0x155840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155844: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x155844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x155848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15584c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15584cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155850: 0xc04e188  jal         func_138620
    ctx->pc = 0x155850u;
    SET_GPR_U32(ctx, 31, 0x155858u);
    ctx->pc = 0x155854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155850u;
    // 0x155854: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x155850u, 0x155858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155858u;
label_155858:
    // 0x155858: 0xc060290  jal         func_180A40
    ctx->pc = 0x155858u;
    SET_GPR_U32(ctx, 31, 0x155860u);
    ctx->pc = 0x180A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180A40u, 0x155858u, 0x155860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155860u;
label_155860:
    // 0x155860: 0xc04e198  jal         func_138660
    ctx->pc = 0x155860u;
    SET_GPR_U32(ctx, 31, 0x155868u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x155860u, 0x155868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155868u;
label_155868:
    // 0x155868: 0x0  nop
    ctx->pc = 0x155868u;
    // NOP
    // 0x15586c: 0x0  nop
    ctx->pc = 0x15586cu;
    // NOP
    // 0x155870: 0x0  nop
    ctx->pc = 0x155870u;
    // NOP
    // 0x155874: 0x0  nop
    ctx->pc = 0x155874u;
    // NOP
    // 0x155878: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x155878u;
    {
        const bool branch_taken_0x155878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155878) {
            ctx->pc = 0x155858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155858;
        }
    }
    ctx->pc = 0x155880u;
    // 0x155880: 0xc060250  jal         func_180940
    ctx->pc = 0x155880u;
    SET_GPR_U32(ctx, 31, 0x155888u);
    ctx->pc = 0x180940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180940u, 0x155880u, 0x155888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155888u;
label_155888:
    // 0x155888: 0xc060258  jal         func_180960
    ctx->pc = 0x155888u;
    SET_GPR_U32(ctx, 31, 0x155890u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x155888u, 0x155890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155890u;
}
