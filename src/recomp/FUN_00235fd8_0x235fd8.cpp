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

// Function: FUN_00235fd8
// Address: 0x235fd8 - 0x23602c
void FUN_00235fd8_0x235fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00235fd8_0x235fd8");
#endif

    switch (ctx->pc) {
        case 0x235ff8u: goto label_235ff8;
        case 0x236008u: goto label_236008;
        case 0x236020u: goto label_236020;
        default: break;
    }

    ctx->pc = 0x235fd8u;

    // 0x235fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x235fdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235fe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x235fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235fe4: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x235fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x235fe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235fec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x235fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x235ff0: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x235FF0u;
    SET_GPR_U32(ctx, 31, 0x235FF8u);
    ctx->pc = 0x235FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235FF0u;
    // 0x235ff4: 0x32100003  andi        $s0, $s0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x235FF0u, 0x235FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235FF8u;
label_235ff8:
    // 0x235ff8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x235FF8u;
    {
        const bool branch_taken_0x235ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FF8u;
        // 0x235ffc: 0x3a040001  xori        $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ff8) {
            ctx->pc = 0x236024u;
            goto label_236024;
        }
    }
    ctx->pc = 0x236000u;
    // 0x236000: 0xc08d736  jal         func_235CD8
    ctx->pc = 0x236000u;
    SET_GPR_U32(ctx, 31, 0x236008u);
    ctx->pc = 0x236004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236000u;
    // 0x236004: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235CD8u, 0x236000u, 0x236008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236008u;
label_236008:
    // 0x236008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23600c: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23600Cu;
    {
        const bool branch_taken_0x23600c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23600Cu;
        // 0x236010: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23600c) {
            ctx->pc = 0x236018u;
            goto label_236018;
        }
    }
    ctx->pc = 0x236014u;
    // 0x236014: 0x8c50b240  lw          $s0, -0x4DC0($v0)
    ctx->pc = 0x236014u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947392)));
label_236018:
    // 0x236018: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236018u;
    SET_GPR_U32(ctx, 31, 0x236020u);
    ctx->pc = 0x23601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236018u;
    // 0x23601c: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236018u, 0x236020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236020u;
label_236020:
    // 0x236020: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236024:
    // 0x236024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236028: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x23602cu;
}
