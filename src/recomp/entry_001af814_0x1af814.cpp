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

// Function: entry_001af814
// Address: 0x1af814 - 0x1af860
void entry_001af814_0x1af814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af814_0x1af814");
#endif

    switch (ctx->pc) {
        case 0x1af830u: goto label_1af830;
        case 0x1af858u: goto label_1af858;
        default: break;
    }

    ctx->pc = 0x1af814u;

    // 0x1af814: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af818: 0x26b05fc0  addiu       $s0, $s5, 0x5FC0
    ctx->pc = 0x1af818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 24512));
    // 0x1af81c: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x1af81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1af820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af824: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x1af824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x1af828: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1AF828u;
    SET_GPR_U32(ctx, 31, 0x1AF830u);
    ctx->pc = 0x1AF82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF828u;
    // 0x1af82c: 0xae100124  sw          $s0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1AF828u, 0x1AF830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF830u;
label_1af830:
    // 0x1af830: 0x26e46140  addiu       $a0, $s7, 0x6140
    ctx->pc = 0x1af830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 24896));
    // 0x1af834: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1af834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1af838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af83c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af840: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1af840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af844: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x1af844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1af848: 0x27c96100  addiu       $t1, $fp, 0x6100
    ctx->pc = 0x1af848u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 24832));
    // 0x1af84c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1af84cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af850: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AF850u;
    SET_GPR_U32(ctx, 31, 0x1AF858u);
    ctx->pc = 0x1AF854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF850u;
    // 0x1af854: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AF850u, 0x1AF858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF858u;
label_1af858:
    // 0x1af858: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF858u;
    {
        const bool branch_taken_0x1af858 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF858u;
        // 0x1af85c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af858) {
            ctx->pc = 0x1AF874u;
            return;
        }
    }
    ctx->pc = 0x1AF860u;
}
