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

// Function: FUN_00157850
// Address: 0x157850 - 0x1578c4
void FUN_00157850_0x157850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157850_0x157850");
#endif

    switch (ctx->pc) {
        case 0x1578b8u: goto label_1578b8;
        default: break;
    }

    ctx->pc = 0x157850u;

    // 0x157850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x157850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x157854: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x157854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x157858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15785c: 0x8c22c9b4  lw          $v0, -0x364C($at)
    ctx->pc = 0x15785cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x29C9B4u));
    // 0x157860: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157860u;
    {
        const bool branch_taken_0x157860 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x157864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157860u;
        // 0x157864: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157860) {
            ctx->pc = 0x157874u;
            goto label_157874;
        }
    }
    ctx->pc = 0x157868u;
    // 0x157868: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x157868u;
    {
        const bool branch_taken_0x157868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157868) {
            ctx->pc = 0x157874u;
            goto label_157874;
        }
    }
    ctx->pc = 0x157870u;
    // 0x157870: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x157870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_157874:
    // 0x157874: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x157874u;
    {
        const bool branch_taken_0x157874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157874u;
        // 0x157878: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157874) {
            ctx->pc = 0x157894u;
            goto label_157894;
        }
    }
    ctx->pc = 0x15787Cu;
    // 0x15787c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x15787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x157880: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x157880u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157884: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157884u;
    {
        const bool branch_taken_0x157884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157884u;
        // 0x157888: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157884) {
            ctx->pc = 0x157898u;
            goto label_157898;
        }
    }
    ctx->pc = 0x15788Cu;
    // 0x15788c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15788Cu;
    {
        const bool branch_taken_0x15788c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15788Cu;
        // 0x157890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15788c) {
            ctx->pc = 0x1578C0u;
            goto label_1578c0;
        }
    }
    ctx->pc = 0x157894u;
label_157894:
    // 0x157894: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x157894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_157898:
    // 0x157898: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x157898u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15789c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x15789cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1578a0: 0x513b8  dsll        $v0, $a1, 14
    ctx->pc = 0x1578a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 14);
    // 0x1578a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1578a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1578a8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1578a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1578ac: 0x45202f  dsubu       $a0, $v0, $a1
    ctx->pc = 0x1578acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x1578b0: 0xc06d554  jal         func_1B5550
    ctx->pc = 0x1578B0u;
    SET_GPR_U32(ctx, 31, 0x1578B8u);
    ctx->pc = 0x1578B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1578B0u;
    // 0x1578b4: 0xa3282d  daddu       $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5550u, 0x1578B0u, 0x1578B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1578B8u;
label_1578b8:
    // 0x1578b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1578b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1578bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1578bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1578c0:
    // 0x1578c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1578c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1578c4u;
}
