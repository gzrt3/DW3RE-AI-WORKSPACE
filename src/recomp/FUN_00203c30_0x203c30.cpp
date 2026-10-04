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

// Function: FUN_00203c30
// Address: 0x203c30 - 0x203da8
void FUN_00203c30_0x203c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203c30_0x203c30");
#endif

    switch (ctx->pc) {
        case 0x203c88u: goto label_203c88;
        case 0x203c90u: goto label_203c90;
        case 0x203c98u: goto label_203c98;
        case 0x203cc4u: goto label_203cc4;
        case 0x203cccu: goto label_203ccc;
        case 0x203cd4u: goto label_203cd4;
        case 0x203d04u: goto label_203d04;
        case 0x203d0cu: goto label_203d0c;
        case 0x203d14u: goto label_203d14;
        case 0x203d34u: goto label_203d34;
        case 0x203d3cu: goto label_203d3c;
        case 0x203d44u: goto label_203d44;
        case 0x203d68u: goto label_203d68;
        case 0x203d70u: goto label_203d70;
        case 0x203d78u: goto label_203d78;
        case 0x203d98u: goto label_203d98;
        case 0x203da0u: goto label_203da0;
        default: break;
    }

    ctx->pc = 0x203c30u;

    // 0x203c30: 0x27bdf9e0  addiu       $sp, $sp, -0x620
    ctx->pc = 0x203c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965728));
    // 0x203c34: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x203c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x203c38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x203c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x203c40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x203c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203c44: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x203C44u;
    {
        const bool branch_taken_0x203c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C44u;
        // 0x203c48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c44) {
            ctx->pc = 0x203D50u;
            goto label_203d50;
        }
    }
    ctx->pc = 0x203C4Cu;
    // 0x203c4c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x203C4Cu;
    {
        const bool branch_taken_0x203c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x203c4c) {
            ctx->pc = 0x203C5Cu;
            goto label_203c5c;
        }
    }
    ctx->pc = 0x203C54u;
    // 0x203c54: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x203C54u;
    {
        const bool branch_taken_0x203c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C54u;
        // 0x203c58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c54) {
            ctx->pc = 0x203D84u;
            goto label_203d84;
        }
    }
    ctx->pc = 0x203C5Cu;
label_203c5c:
    // 0x203c5c: 0x8cc30480  lw          $v1, 0x480($a2)
    ctx->pc = 0x203c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
    // 0x203c60: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x203c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x203c64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x203c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x203c68: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x203C68u;
    {
        const bool branch_taken_0x203c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C68u;
        // 0x203c6c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c68) {
            ctx->pc = 0x203CA4u;
            goto label_203ca4;
        }
    }
    ctx->pc = 0x203C70u;
    // 0x203c70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c74: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x203c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x203c78: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x203c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x203c7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203c7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c80: 0xc08104c  jal         func_204130
    ctx->pc = 0x203C80u;
    SET_GPR_U32(ctx, 31, 0x203C88u);
    ctx->pc = 0x203C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C80u;
    // 0x203c84: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203C80u, 0x203C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C88u;
label_203c88:
    // 0x203c88: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203C88u;
    SET_GPR_U32(ctx, 31, 0x203C90u);
    ctx->pc = 0x203C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C88u;
    // 0x203c8c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203C88u, 0x203C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C90u;
label_203c90:
    // 0x203c90: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203C90u;
    SET_GPR_U32(ctx, 31, 0x203C98u);
    ctx->pc = 0x203C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C90u;
    // 0x203c94: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203C90u, 0x203C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C98u;
label_203c98:
    // 0x203c98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203c9c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x203C9Cu;
    {
        const bool branch_taken_0x203c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C9Cu;
        // 0x203ca0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c9c) {
            ctx->pc = 0x203DB0u;
            return;
        }
    }
    ctx->pc = 0x203CA4u;
label_203ca4:
    // 0x203ca4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x203ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x203ca8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x203CA8u;
    {
        const bool branch_taken_0x203ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CA8u;
        // 0x203cac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ca8) {
            ctx->pc = 0x203CE0u;
            goto label_203ce0;
        }
    }
    ctx->pc = 0x203CB0u;
    // 0x203cb0: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203cb4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x203cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x203cb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203cbc: 0xc08104c  jal         func_204130
    ctx->pc = 0x203CBCu;
    SET_GPR_U32(ctx, 31, 0x203CC4u);
    ctx->pc = 0x203CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CBCu;
    // 0x203cc0: 0x27a80120  addiu       $t0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203CBCu, 0x203CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203CC4u;
label_203cc4:
    // 0x203cc4: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203CC4u;
    SET_GPR_U32(ctx, 31, 0x203CCCu);
    ctx->pc = 0x203CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CC4u;
    // 0x203cc8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203CC4u, 0x203CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203CCCu;
label_203ccc:
    // 0x203ccc: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203CCCu;
    SET_GPR_U32(ctx, 31, 0x203CD4u);
    ctx->pc = 0x203CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CCCu;
    // 0x203cd0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203CCCu, 0x203CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203CD4u;
label_203cd4:
    // 0x203cd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203cd8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x203CD8u;
    {
        const bool branch_taken_0x203cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CD8u;
        // 0x203cdc: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cd8) {
            ctx->pc = 0x203DB0u;
            return;
        }
    }
    ctx->pc = 0x203CE0u;
label_203ce0:
    // 0x203ce0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x203ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x203ce4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x203CE4u;
    {
        const bool branch_taken_0x203ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CE4u;
        // 0x203ce8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ce4) {
            ctx->pc = 0x203D20u;
            goto label_203d20;
        }
    }
    ctx->pc = 0x203CECu;
    // 0x203cec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203cf0: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x203cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x203cf4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x203cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x203cf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203cfc: 0xc08104c  jal         func_204130
    ctx->pc = 0x203CFCu;
    SET_GPR_U32(ctx, 31, 0x203D04u);
    ctx->pc = 0x203D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CFCu;
    // 0x203d00: 0x27a80220  addiu       $t0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203CFCu, 0x203D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D04u;
label_203d04:
    // 0x203d04: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203D04u;
    SET_GPR_U32(ctx, 31, 0x203D0Cu);
    ctx->pc = 0x203D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D04u;
    // 0x203d08: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203D04u, 0x203D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D0Cu;
label_203d0c:
    // 0x203d0c: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203D0Cu;
    SET_GPR_U32(ctx, 31, 0x203D14u);
    ctx->pc = 0x203D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D0Cu;
    // 0x203d10: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203D0Cu, 0x203D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D14u;
label_203d14:
    // 0x203d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203d18: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x203D18u;
    {
        const bool branch_taken_0x203d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D18u;
        // 0x203d1c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d18) {
            ctx->pc = 0x203DB0u;
            return;
        }
    }
    ctx->pc = 0x203D20u;
label_203d20:
    // 0x203d20: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x203d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x203d24: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x203d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x203d28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203d2c: 0xc08104c  jal         func_204130
    ctx->pc = 0x203D2Cu;
    SET_GPR_U32(ctx, 31, 0x203D34u);
    ctx->pc = 0x203D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D2Cu;
    // 0x203d30: 0x27a80320  addiu       $t0, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203D2Cu, 0x203D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D34u;
label_203d34:
    // 0x203d34: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203D34u;
    SET_GPR_U32(ctx, 31, 0x203D3Cu);
    ctx->pc = 0x203D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D34u;
    // 0x203d38: 0x27a40320  addiu       $a0, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203D34u, 0x203D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D3Cu;
label_203d3c:
    // 0x203d3c: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203D3Cu;
    SET_GPR_U32(ctx, 31, 0x203D44u);
    ctx->pc = 0x203D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D3Cu;
    // 0x203d40: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203D3Cu, 0x203D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D44u;
label_203d44:
    // 0x203d44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203d48: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x203D48u;
    {
        const bool branch_taken_0x203d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D48u;
        // 0x203d4c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d48) {
            ctx->pc = 0x203DB0u;
            return;
        }
    }
    ctx->pc = 0x203D50u;
label_203d50:
    // 0x203d50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203d54: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203d58: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x203d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x203d5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203d60: 0xc08104c  jal         func_204130
    ctx->pc = 0x203D60u;
    SET_GPR_U32(ctx, 31, 0x203D68u);
    ctx->pc = 0x203D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D60u;
    // 0x203d64: 0x27a80420  addiu       $t0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203D60u, 0x203D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D68u;
label_203d68:
    // 0x203d68: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203D68u;
    SET_GPR_U32(ctx, 31, 0x203D70u);
    ctx->pc = 0x203D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D68u;
    // 0x203d6c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203D68u, 0x203D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D70u;
label_203d70:
    // 0x203d70: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203D70u;
    SET_GPR_U32(ctx, 31, 0x203D78u);
    ctx->pc = 0x203D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D70u;
    // 0x203d74: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203D70u, 0x203D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D78u;
label_203d78:
    // 0x203d78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203d7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x203D7Cu;
    {
        const bool branch_taken_0x203d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D7Cu;
        // 0x203d80: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d7c) {
            ctx->pc = 0x203DB0u;
            return;
        }
    }
    ctx->pc = 0x203D84u;
label_203d84:
    // 0x203d84: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203d88: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x203d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x203d8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203d90: 0xc08104c  jal         func_204130
    ctx->pc = 0x203D90u;
    SET_GPR_U32(ctx, 31, 0x203D98u);
    ctx->pc = 0x203D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D90u;
    // 0x203d94: 0x27a80520  addiu       $t0, $sp, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203D90u, 0x203D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D98u;
label_203d98:
    // 0x203d98: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203D98u;
    SET_GPR_U32(ctx, 31, 0x203DA0u);
    ctx->pc = 0x203D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D98u;
    // 0x203d9c: 0x27a40520  addiu       $a0, $sp, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203D98u, 0x203DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203DA0u;
label_203da0:
    // 0x203da0: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203DA0u;
    SET_GPR_U32(ctx, 31, 0x203DA8u);
    ctx->pc = 0x203DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203DA0u;
    // 0x203da4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203DA0u, 0x203DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203DA8u;
}
