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

// Function: FUN_001acd20
// Address: 0x1acd20 - 0x1acdb4
void FUN_001acd20_0x1acd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001acd20_0x1acd20");
#endif

    switch (ctx->pc) {
        case 0x1acd50u: goto label_1acd50;
        case 0x1acd68u: goto label_1acd68;
        case 0x1acd70u: goto label_1acd70;
        case 0x1acd78u: goto label_1acd78;
        case 0x1acd84u: goto label_1acd84;
        case 0x1acd90u: goto label_1acd90;
        case 0x1acda0u: goto label_1acda0;
        case 0x1acdb0u: goto label_1acdb0;
        default: break;
    }

    ctx->pc = 0x1acd20u;

    // 0x1acd20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1acd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1acd24: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1acd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1acd28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1acd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1acd2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1acd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1acd30: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1acd30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1acd34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1acd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1acd38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1acd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1acd3c: 0x24505fa0  addiu       $s0, $v0, 0x5FA0
    ctx->pc = 0x1acd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24480));
    // 0x1acd40: 0x8c445fa0  lw          $a0, 0x5FA0($v0)
    ctx->pc = 0x1acd40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x285FA0u));
    // 0x1acd44: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x1acd44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1acd48: 0xc06b344  jal         func_1ACD10
    ctx->pc = 0x1ACD48u;
    SET_GPR_U32(ctx, 31, 0x1ACD50u);
    ctx->pc = 0x1ACD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD48u;
    // 0x1acd4c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACD10u, 0x1ACD48u, 0x1ACD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD50u;
label_1acd50:
    // 0x1acd50: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1acd50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x1acd54: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x1acd54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x1acd58: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x1acd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x1acd5c: 0x24a55c20  addiu       $a1, $a1, 0x5C20
    ctx->pc = 0x1acd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23584));
    // 0x1acd60: 0xc06b32e  jal         func_1ACCB8
    ctx->pc = 0x1ACD60u;
    SET_GPR_U32(ctx, 31, 0x1ACD68u);
    ctx->pc = 0x1ACD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD60u;
    // 0x1acd64: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACCB8u, 0x1ACD60u, 0x1ACD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD68u;
label_1acd68:
    // 0x1acd68: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1ACD68u;
    SET_GPR_U32(ctx, 31, 0x1ACD70u);
    ctx->pc = 0x1ACD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD68u;
    // 0x1acd6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1ACD68u, 0x1ACD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD70u;
label_1acd70:
    // 0x1acd70: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1ACD70u;
    SET_GPR_U32(ctx, 31, 0x1ACD78u);
    ctx->pc = 0x1ACD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD70u;
    // 0x1acd74: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1ACD70u, 0x1ACD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD78u;
label_1acd78:
    // 0x1acd78: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1acd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1acd7c: 0xc06b344  jal         func_1ACD10
    ctx->pc = 0x1ACD7Cu;
    SET_GPR_U32(ctx, 31, 0x1ACD84u);
    ctx->pc = 0x1ACD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD7Cu;
    // 0x1acd80: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACD10u, 0x1ACD7Cu, 0x1ACD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD84u;
label_1acd84:
    // 0x1acd84: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1acd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1acd88: 0xc06b344  jal         func_1ACD10
    ctx->pc = 0x1ACD88u;
    SET_GPR_U32(ctx, 31, 0x1ACD90u);
    ctx->pc = 0x1ACD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD88u;
    // 0x1acd8c: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACD10u, 0x1ACD88u, 0x1ACD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD90u;
label_1acd90:
    // 0x1acd90: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1acd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1acd94: 0x0  nop
    ctx->pc = 0x1acd94u;
    // NOP
    // 0x1acd98: 0xc06b340  jal         func_1ACD00
    ctx->pc = 0x1ACD98u;
    SET_GPR_U32(ctx, 31, 0x1ACDA0u);
    ctx->pc = 0x1ACD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD98u;
    // 0x1acd9c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACD00u, 0x1ACD98u, 0x1ACDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACDA0u;
label_1acda0:
    // 0x1acda0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1acda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1acda4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1acda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acda8: 0xc06b344  jal         func_1ACD10
    ctx->pc = 0x1ACDA8u;
    SET_GPR_U32(ctx, 31, 0x1ACDB0u);
    ctx->pc = 0x1ACDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACDA8u;
    // 0x1acdac: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACD10u, 0x1ACDA8u, 0x1ACDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACDB0u;
label_1acdb0:
    // 0x1acdb0: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1acdb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    ctx->pc = 0x1acdb4u;
}
