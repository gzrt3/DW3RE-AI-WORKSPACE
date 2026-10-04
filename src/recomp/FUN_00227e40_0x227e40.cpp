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

// Function: FUN_00227e40
// Address: 0x227e40 - 0x227f18
void FUN_00227e40_0x227e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00227e40_0x227e40");
#endif

    switch (ctx->pc) {
        case 0x227e88u: goto label_227e88;
        case 0x227ea0u: goto label_227ea0;
        case 0x227eb8u: goto label_227eb8;
        case 0x227ed0u: goto label_227ed0;
        case 0x227ee8u: goto label_227ee8;
        default: break;
    }

    ctx->pc = 0x227e40u;

    // 0x227e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227e44: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x227e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x227e48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x227e4c: 0x2463ea31  addiu       $v1, $v1, -0x15CF
    ctx->pc = 0x227e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961713));
    // 0x227e50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x227e54: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x227e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x227e58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e5c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x227e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x227e60: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x227e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x227e64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x227e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x227e68: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x227e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227e6c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227E6Cu;
    {
        const bool branch_taken_0x227e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E6Cu;
        // 0x227e70: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e6c) {
            ctx->pc = 0x227E88u;
            goto label_227e88;
        }
    }
    ctx->pc = 0x227E74u;
    // 0x227e74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x227e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e78: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x227e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x227e7c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x227e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x227e80: 0xc05b4d4  jal         func_16D350
    ctx->pc = 0x227E80u;
    SET_GPR_U32(ctx, 31, 0x227E88u);
    ctx->pc = 0x227E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227E80u;
    // 0x227e84: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x227E80u, 0x227E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E88u;
label_227e88:
    // 0x227e88: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x227e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227e8c: 0x28a20017  slti        $v0, $a1, 0x17
    ctx->pc = 0x227e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x227e90: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x227E90u;
    {
        const bool branch_taken_0x227e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227e90) {
            ctx->pc = 0x227EC0u;
            goto label_227ec0;
        }
    }
    ctx->pc = 0x227E98u;
    // 0x227e98: 0xc05b63c  jal         func_16D8F0
    ctx->pc = 0x227E98u;
    SET_GPR_U32(ctx, 31, 0x227EA0u);
    ctx->pc = 0x16D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D8F0u, 0x227E98u, 0x227EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EA0u;
label_227ea0:
    // 0x227ea0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x227ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x227ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ea8: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x227ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x227eac: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x227eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x227eb0: 0xc05b4d4  jal         func_16D350
    ctx->pc = 0x227EB0u;
    SET_GPR_U32(ctx, 31, 0x227EB8u);
    ctx->pc = 0x227EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227EB0u;
    // 0x227eb4: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x227EB0u, 0x227EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EB8u;
label_227eb8:
    // 0x227eb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x227EB8u;
    {
        const bool branch_taken_0x227eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EB8u;
        // 0x227ebc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227eb8) {
            ctx->pc = 0x227ED4u;
            goto label_227ed4;
        }
    }
    ctx->pc = 0x227EC0u;
label_227ec0:
    // 0x227ec0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x227ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x227ec4: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x227ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227ec8: 0xc05d988  jal         func_176620
    ctx->pc = 0x227EC8u;
    SET_GPR_U32(ctx, 31, 0x227ED0u);
    ctx->pc = 0x227ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227EC8u;
    // 0x227ecc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176620u, 0x227EC8u, 0x227ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227ED0u;
label_227ed0:
    // 0x227ed0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x227ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227ed4:
    // 0x227ed4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x227ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x227ed8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x227ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x227edc: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x227edcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227ee0: 0xc072ecc  jal         func_1CBB30
    ctx->pc = 0x227EE0u;
    SET_GPR_U32(ctx, 31, 0x227EE8u);
    ctx->pc = 0x227EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227EE0u;
    // 0x227ee4: 0x248499b0  addiu       $a0, $a0, -0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBB30u, 0x227EE0u, 0x227EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EE8u;
label_227ee8:
    // 0x227ee8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x227ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227eec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x227eecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ef0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x227ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x227ef4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x227ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227ef8: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x227ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
    // 0x227efc: 0x2442ea30  addiu       $v0, $v0, -0x15D0
    ctx->pc = 0x227efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961712));
    // 0x227f00: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x227f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f04: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x227f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x227f08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227f0c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x227f0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227f10: 0xc070430  jal         func_1C10C0
    ctx->pc = 0x227F10u;
    SET_GPR_U32(ctx, 31, 0x227F18u);
    ctx->pc = 0x227F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F10u;
    // 0x227f14: 0x250899b0  addiu       $t0, $t0, -0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C10C0u, 0x227F10u, 0x227F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F18u;
}
