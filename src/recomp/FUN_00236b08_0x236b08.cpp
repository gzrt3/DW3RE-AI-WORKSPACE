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

// Function: FUN_00236b08
// Address: 0x236b08 - 0x236b94
void FUN_00236b08_0x236b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236b08_0x236b08");
#endif

    switch (ctx->pc) {
        case 0x236b44u: goto label_236b44;
        case 0x236b4cu: goto label_236b4c;
        case 0x236b70u: goto label_236b70;
        case 0x236b80u: goto label_236b80;
        default: break;
    }

    ctx->pc = 0x236b08u;

    // 0x236b08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x236b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x236b0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x236b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x236b10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x236b10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b14: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x236b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236b18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x236b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x236b1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x236b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x236b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236b24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236b28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236b2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x236b30: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x236b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b34: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x236b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x236b38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x236b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x236b3c: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236B3Cu;
    SET_GPR_U32(ctx, 31, 0x236B44u);
    ctx->pc = 0x236B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B3Cu;
    // 0x236b40: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236B3Cu, 0x236B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B44u;
label_236b44:
    // 0x236b44: 0xc08d736  jal         func_235CD8
    ctx->pc = 0x236B44u;
    SET_GPR_U32(ctx, 31, 0x236B4Cu);
    ctx->pc = 0x236B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B44u;
    // 0x236b48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235CD8u, 0x236B44u, 0x236B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B4Cu;
label_236b4c:
    // 0x236b4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x236b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b54: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x236b58: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x236B58u;
    {
        const bool branch_taken_0x236b58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B58u;
        // 0x236b5c: 0x2451b1c0  addiu       $s1, $v0, -0x4E40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236b58) {
            ctx->pc = 0x236B8Cu;
            goto label_236b8c;
        }
    }
    ctx->pc = 0x236B60u;
    // 0x236b60: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x236b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x236b64: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x236b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x236b68: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x236B68u;
    SET_GPR_U32(ctx, 31, 0x236B70u);
    ctx->pc = 0x236B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B68u;
    // 0x236b6c: 0xae320008  sw          $s2, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x236B68u, 0x236B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B70u;
label_236b70:
    // 0x236b70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x236b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236b74: 0x240500a3  addiu       $a1, $zero, 0xA3
    ctx->pc = 0x236b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x236b78: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x236B78u;
    SET_GPR_U32(ctx, 31, 0x236B80u);
    ctx->pc = 0x236B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B78u;
    // 0x236b7c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x236B78u, 0x236B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B80u;
label_236b80:
    // 0x236b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b84: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x236b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x236b88: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x236b88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_236b8c:
    // 0x236b8c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236B8Cu;
    SET_GPR_U32(ctx, 31, 0x236B94u);
    ctx->pc = 0x236B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B8Cu;
    // 0x236b90: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236B8Cu, 0x236B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B94u;
}
