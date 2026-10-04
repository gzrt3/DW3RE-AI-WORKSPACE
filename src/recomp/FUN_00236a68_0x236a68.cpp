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

// Function: FUN_00236a68
// Address: 0x236a68 - 0x236aec
void FUN_00236a68_0x236a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236a68_0x236a68");
#endif

    switch (ctx->pc) {
        case 0x236a90u: goto label_236a90;
        case 0x236a98u: goto label_236a98;
        case 0x236ac0u: goto label_236ac0;
        case 0x236ae0u: goto label_236ae0;
        default: break;
    }

    ctx->pc = 0x236a68u;

    // 0x236a68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236a6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x236a70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x236a70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a74: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236a78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236a7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x236a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236a84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x236a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x236a88: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236A88u;
    SET_GPR_U32(ctx, 31, 0x236A90u);
    ctx->pc = 0x236A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A88u;
    // 0x236a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236A88u, 0x236A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A90u;
label_236a90:
    // 0x236a90: 0xc08d736  jal         func_235CD8
    ctx->pc = 0x236A90u;
    SET_GPR_U32(ctx, 31, 0x236A98u);
    ctx->pc = 0x236A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A90u;
    // 0x236a94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235CD8u, 0x236A90u, 0x236A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A98u;
label_236a98:
    // 0x236a98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x236a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236aa0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x236aa4: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x236aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x236aa8: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x236aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x236aac: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x236AACu;
    {
        const bool branch_taken_0x236aac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AACu;
        // 0x236ab0: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236aac) {
            ctx->pc = 0x236AE4u;
            goto label_236ae4;
        }
    }
    ctx->pc = 0x236AB4u;
    // 0x236ab4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x236ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x236ab8: 0xc08dc08  jal         func_237020
    ctx->pc = 0x236AB8u;
    SET_GPR_U32(ctx, 31, 0x236AC0u);
    ctx->pc = 0x236ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236AB8u;
    // 0x236abc: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237020u, 0x236AB8u, 0x236AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236AC0u;
label_236ac0:
    // 0x236ac0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x236ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x236ac4: 0x2452824  and         $a1, $s2, $a1
    ctx->pc = 0x236ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 5));
    // 0x236ac8: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x236ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x236acc: 0x34a500a2  ori         $a1, $a1, 0xA2
    ctx->pc = 0x236accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)162);
    // 0x236ad0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236AD0u;
    {
        const bool branch_taken_0x236ad0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x236AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AD0u;
        // 0x236ad4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ad0) {
            ctx->pc = 0x236AE4u;
            goto label_236ae4;
        }
    }
    ctx->pc = 0x236AD8u;
    // 0x236ad8: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x236AD8u;
    SET_GPR_U32(ctx, 31, 0x236AE0u);
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x236AD8u, 0x236AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236AE0u;
label_236ae0:
    // 0x236ae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236ae4:
    // 0x236ae4: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236AE4u;
    SET_GPR_U32(ctx, 31, 0x236AECu);
    ctx->pc = 0x236AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236AE4u;
    // 0x236ae8: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236AE4u, 0x236AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236AECu;
}
