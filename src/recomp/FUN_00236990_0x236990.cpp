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

// Function: FUN_00236990
// Address: 0x236990 - 0x236a00
void FUN_00236990_0x236990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236990_0x236990");
#endif

    switch (ctx->pc) {
        case 0x2369c0u: goto label_2369c0;
        case 0x2369c8u: goto label_2369c8;
        case 0x2369f4u: goto label_2369f4;
        default: break;
    }

    ctx->pc = 0x236990u;

    // 0x236990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x236994: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x236994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x236998: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x236998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23699c: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x23699cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x2369a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2369a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2369a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2369a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2369a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2369a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2369ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2369acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2369b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2369b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2369b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2369b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2369b8: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x2369B8u;
    SET_GPR_U32(ctx, 31, 0x2369C0u);
    ctx->pc = 0x2369BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2369B8u;
    // 0x2369bc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x2369B8u, 0x2369C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2369C0u;
label_2369c0:
    // 0x2369c0: 0xc08d736  jal         func_235CD8
    ctx->pc = 0x2369C0u;
    SET_GPR_U32(ctx, 31, 0x2369C8u);
    ctx->pc = 0x2369C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2369C0u;
    // 0x2369c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235CD8u, 0x2369C0u, 0x2369C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2369C8u;
label_2369c8:
    // 0x2369c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2369c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2369cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2369ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2369d0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2369d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2369d4: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x2369d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x2369d8: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x2369d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2369dc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2369DCu;
    {
        const bool branch_taken_0x2369dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2369E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369DCu;
        // 0x2369e0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2369dc) {
            ctx->pc = 0x2369F8u;
            goto label_2369f8;
        }
    }
    ctx->pc = 0x2369E4u;
    // 0x2369e4: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x2369e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x2369e8: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x2369e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x2369ec: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x2369ECu;
    SET_GPR_U32(ctx, 31, 0x2369F4u);
    ctx->pc = 0x2369F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2369ECu;
    // 0x2369f0: 0xac520004  sw          $s2, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x2369ECu, 0x2369F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2369F4u;
label_2369f4:
    // 0x2369f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2369f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2369f8:
    // 0x2369f8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x2369F8u;
    SET_GPR_U32(ctx, 31, 0x236A00u);
    ctx->pc = 0x2369FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2369F8u;
    // 0x2369fc: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x2369F8u, 0x236A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A00u;
}
