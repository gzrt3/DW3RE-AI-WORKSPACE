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

// Function: entry_001ac124
// Address: 0x1ac124 - 0x1ac170
void entry_001ac124_0x1ac124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac124_0x1ac124");
#endif

    switch (ctx->pc) {
        case 0x1ac154u: goto label_1ac154;
        default: break;
    }

    ctx->pc = 0x1ac124u;

    // 0x1ac124: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ac124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ac128: 0x26b04780  addiu       $s0, $s5, 0x4780
    ctx->pc = 0x1ac128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 18304));
    // 0x1ac12c: 0x24a44980  addiu       $a0, $a1, 0x4980
    ctx->pc = 0x1ac12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 18816));
    // 0x1ac130: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ac134: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ac134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ac138: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac13c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ac13cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac140: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1ac140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1ac144: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ac144u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac148: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1ac148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ac14c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AC14Cu;
    SET_GPR_U32(ctx, 31, 0x1AC154u);
    ctx->pc = 0x1AC150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC14Cu;
    // 0x1ac150: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AC14Cu, 0x1AC154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC154u;
label_1ac154:
    // 0x1ac154: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC154u;
    {
        const bool branch_taken_0x1ac154 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac154) {
            ctx->pc = 0x1AC158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC154u;
            // 0x1ac158: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC168u;
            goto label_1ac168;
        }
    }
    ctx->pc = 0x1AC15Cu;
    // 0x1ac15c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac160: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC160u;
    {
        const bool branch_taken_0x1ac160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC160u;
        // 0x1ac164: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac160) {
            ctx->pc = 0x1AC170u;
            return;
        }
    }
    ctx->pc = 0x1AC168u;
label_1ac168:
    // 0x1ac168: 0x8e824780  lw          $v0, 0x4780($s4)
    ctx->pc = 0x1ac168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18304)));
    // 0x1ac16c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1ac16cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1ac170u;
}
