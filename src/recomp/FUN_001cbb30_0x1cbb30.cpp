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

// Function: FUN_001cbb30
// Address: 0x1cbb30 - 0x1cbe24
void FUN_001cbb30_0x1cbb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cbb30_0x1cbb30");
#endif

    switch (ctx->pc) {
        case 0x1cbba0u: goto label_1cbba0;
        case 0x1cbbf0u: goto label_1cbbf0;
        case 0x1cbc24u: goto label_1cbc24;
        case 0x1cbc68u: goto label_1cbc68;
        case 0x1cbcc8u: goto label_1cbcc8;
        case 0x1cbd38u: goto label_1cbd38;
        case 0x1cbd68u: goto label_1cbd68;
        case 0x1cbe1cu: goto label_1cbe1c;
        default: break;
    }

    ctx->pc = 0x1cbb30u;

    // 0x1cbb30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cbb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cbb34: 0x28a20017  slti        $v0, $a1, 0x17
    ctx->pc = 0x1cbb34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x1cbb38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cbb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cbb3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cbb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cbb40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cbb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cbb44: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1cbb44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb48: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1CBB48u;
    {
        const bool branch_taken_0x1cbb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB48u;
        // 0x1cbb4c: 0x24100039  addiu       $s0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb48) {
            ctx->pc = 0x1CBC30u;
            goto label_1cbc30;
        }
    }
    ctx->pc = 0x1CBB50u;
    // 0x1cbb50: 0x28a1001c  slti        $at, $a1, 0x1C
    ctx->pc = 0x1cbb50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1cbb54: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x1CBB54u;
    {
        const bool branch_taken_0x1cbb54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB54u;
        // 0x1cbb58: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb54) {
            ctx->pc = 0x1CBC34u;
            goto label_1cbc34;
        }
    }
    ctx->pc = 0x1CBB5Cu;
    // 0x1cbb5c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1cbb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1cbb60: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CBB60u;
    {
        const bool branch_taken_0x1cbb60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cbb60) {
            ctx->pc = 0x1CBBA8u;
            goto label_1cbba8;
        }
    }
    ctx->pc = 0x1CBB68u;
    // 0x1cbb68: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x1cbb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1cbb6c: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBB6Cu;
    {
        const bool branch_taken_0x1cbb6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cbb6c) {
            ctx->pc = 0x1CBB80u;
            goto label_1cbb80;
        }
    }
    ctx->pc = 0x1CBB74u;
    // 0x1cbb74: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x1cbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1cbb78: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CBB78u;
    {
        const bool branch_taken_0x1cbb78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cbb78) {
            ctx->pc = 0x1CBBA8u;
            goto label_1cbba8;
        }
    }
    ctx->pc = 0x1CBB80u;
label_1cbb80:
    // 0x1cbb80: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cbb84: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1cbb84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1cbb88: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1cbb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cbb8c: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1cbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
    // 0x1cbb90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbb94: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1cbb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbb98: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1CBB98u;
    SET_GPR_U32(ctx, 31, 0x1CBBA0u);
    ctx->pc = 0x1CBB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB98u;
    // 0x1cbb9c: 0x24a5c400  addiu       $a1, $a1, -0x3C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1CBB98u, 0x1CBBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBA0u;
label_1cbba0:
    // 0x1cbba0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1CBBA0u;
    {
        const bool branch_taken_0x1cbba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBA0u;
        // 0x1cbba4: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbba0) {
            ctx->pc = 0x1CBC28u;
            goto label_1cbc28;
        }
    }
    ctx->pc = 0x1CBBA8u;
label_1cbba8:
    // 0x1cbba8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cbba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1cbbac: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x1cbbacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF6u));
    // 0x1cbbb0: 0x28610027  slti        $at, $v1, 0x27
    ctx->pc = 0x1cbbb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)39) ? 1 : 0);
    // 0x1cbbb4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CBBB4u;
    {
        const bool branch_taken_0x1cbbb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbb4) {
            ctx->pc = 0x1CBBF8u;
            goto label_1cbbf8;
        }
    }
    ctx->pc = 0x1CBBBCu;
    // 0x1cbbbc: 0x28a20017  slti        $v0, $a1, 0x17
    ctx->pc = 0x1cbbbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x1cbbc0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CBBC0u;
    {
        const bool branch_taken_0x1cbbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbc0) {
            ctx->pc = 0x1CBBF8u;
            goto label_1cbbf8;
        }
    }
    ctx->pc = 0x1CBBC8u;
    // 0x1cbbc8: 0x28a1001a  slti        $at, $a1, 0x1A
    ctx->pc = 0x1cbbc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1cbbcc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1CBBCCu;
    {
        const bool branch_taken_0x1cbbcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbcc) {
            ctx->pc = 0x1CBBF8u;
            goto label_1cbbf8;
        }
    }
    ctx->pc = 0x1CBBD4u;
    // 0x1cbbd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cbbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cbbd8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1cbbdc: 0x24428f70  addiu       $v0, $v0, -0x7090
    ctx->pc = 0x1cbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938480));
    // 0x1cbbe0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cbbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cbbe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbbe8: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1CBBE8u;
    SET_GPR_U32(ctx, 31, 0x1CBBF0u);
    ctx->pc = 0x1CBBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBBE8u;
    // 0x1cbbec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1CBBE8u, 0x1CBBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBF0u;
label_1cbbf0:
    // 0x1cbbf0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CBBF0u;
    {
        const bool branch_taken_0x1cbbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbf0) {
            ctx->pc = 0x1CBC24u;
            goto label_1cbc24;
        }
    }
    ctx->pc = 0x1CBBF8u;
label_1cbbf8:
    // 0x1cbbf8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cbbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1cbbfc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cbbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cbc00: 0x24428ee0  addiu       $v0, $v0, -0x7120
    ctx->pc = 0x1cbc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938336));
    // 0x1cbc04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbc08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cbc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbc0c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1cbc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cbc10: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cbc14: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1cbc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
    // 0x1cbc18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbc1c: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1CBC1Cu;
    SET_GPR_U32(ctx, 31, 0x1CBC24u);
    ctx->pc = 0x1CBC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBC1Cu;
    // 0x1cbc20: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1CBC1Cu, 0x1CBC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC24u;
label_1cbc24:
    // 0x1cbc24: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1cbc24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cbc28:
    // 0x1cbc28: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1CBC28u;
    {
        const bool branch_taken_0x1cbc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC28u;
        // 0x1cbc2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc28) {
            ctx->pc = 0x1CBE20u;
            goto label_1cbe20;
        }
    }
    ctx->pc = 0x1CBC30u;
label_1cbc30:
    // 0x1cbc30: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1cbc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cbc34:
    // 0x1cbc34: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CBC34u;
    {
        const bool branch_taken_0x1cbc34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CBC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC34u;
        // 0x1cbc38: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc34) {
            ctx->pc = 0x1CBC70u;
            goto label_1cbc70;
        }
    }
    ctx->pc = 0x1CBC3Cu;
    // 0x1cbc3c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cbc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1cbc40: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cbc40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cbc44: 0x24428ee0  addiu       $v0, $v0, -0x7120
    ctx->pc = 0x1cbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938336));
    // 0x1cbc48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbc4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cbc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbc50: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1cbc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cbc54: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cbc58: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1cbc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
    // 0x1cbc5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbc60: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1CBC60u;
    SET_GPR_U32(ctx, 31, 0x1CBC68u);
    ctx->pc = 0x1CBC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBC60u;
    // 0x1cbc64: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1CBC60u, 0x1CBC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC68u;
label_1cbc68:
    // 0x1cbc68: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1CBC68u;
    {
        const bool branch_taken_0x1cbc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbc68) {
            ctx->pc = 0x1CBE1Cu;
            goto label_1cbe1c;
        }
    }
    ctx->pc = 0x1CBC70u;
label_1cbc70:
    // 0x1cbc70: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBC70u;
    {
        const bool branch_taken_0x1cbc70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CBC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC70u;
        // 0x1cbc74: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc70) {
            ctx->pc = 0x1CBC84u;
            goto label_1cbc84;
        }
    }
    ctx->pc = 0x1CBC78u;
    // 0x1cbc78: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1cbc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cbc7c: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CBC7Cu;
    {
        const bool branch_taken_0x1cbc7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CBC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC7Cu;
        // 0x1cbc80: 0x28a10021  slti        $at, $a1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc7c) {
            ctx->pc = 0x1CBCD0u;
            goto label_1cbcd0;
        }
    }
    ctx->pc = 0x1CBC84u;
label_1cbc84:
    // 0x1cbc84: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cbc84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cbc88: 0x24638ee0  addiu       $v1, $v1, -0x7120
    ctx->pc = 0x1cbc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938336));
    // 0x1cbc8c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1cbc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1cbc90: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1cbc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cbc94: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x1cbc94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1cbc98: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1cbc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cbc9c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cbca0: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x1cbca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
    // 0x1cbca4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1cbca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbca8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1cbca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cbcac: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cbcb0: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1cbcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
    // 0x1cbcb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cbcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cbcb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbcbc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1cbcbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbcc0: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1CBCC0u;
    SET_GPR_U32(ctx, 31, 0x1CBCC8u);
    ctx->pc = 0x1CBCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBCC0u;
    // 0x1cbcc4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1CBCC0u, 0x1CBCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBCC8u;
label_1cbcc8:
    // 0x1cbcc8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1CBCC8u;
    {
        const bool branch_taken_0x1cbcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbcc8) {
            ctx->pc = 0x1CBE1Cu;
            goto label_1cbe1c;
        }
    }
    ctx->pc = 0x1CBCD0u;
label_1cbcd0:
    // 0x1cbcd0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CBCD0u;
    {
        const bool branch_taken_0x1cbcd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCD0u;
        // 0x1cbcd4: 0x61900  sll         $v1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcd0) {
            ctx->pc = 0x1CBD40u;
            goto label_1cbd40;
        }
    }
    ctx->pc = 0x1CBCD8u;
    // 0x1cbcd8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cbcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1cbcdc: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1cbcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x1cbce0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cbce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cbce4: 0x24428ee0  addiu       $v0, $v0, -0x7120
    ctx->pc = 0x1cbce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938336));
    // 0x1cbce8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1cbce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbcec: 0x24e72930  addiu       $a3, $a3, 0x2930
    ctx->pc = 0x1cbcecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10544));
    // 0x1cbcf0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1cbcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cbcf4: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1cbcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1cbcf8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1cbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1cbcfc: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1cbcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1cbd00: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1cbd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
    // 0x1cbd04: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x1cbd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cbd08: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1cbd08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1cbd0c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1cbd0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cbd10: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1cbd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cbd14: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1cbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cbd18: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1cbd18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbd1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cbd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cbd20: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1cbd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1cbd24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cbd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cbd28: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1cbd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1cbd2c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1cbd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbd30: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1CBD30u;
    SET_GPR_U32(ctx, 31, 0x1CBD38u);
    ctx->pc = 0x1CBD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBD30u;
    // 0x1cbd34: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1CBD30u, 0x1CBD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBD38u;
label_1cbd38:
    // 0x1cbd38: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1CBD38u;
    {
        const bool branch_taken_0x1cbd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd38) {
            ctx->pc = 0x1CBE1Cu;
            goto label_1cbe1c;
        }
    }
    ctx->pc = 0x1CBD40u;
label_1cbd40:
    // 0x1cbd40: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cbd44: 0x24423b82  addiu       $v0, $v0, 0x3B82
    ctx->pc = 0x1cbd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15234));
    // 0x1cbd48: 0x664023  subu        $t0, $v1, $a2
    ctx->pc = 0x1cbd48u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1cbd4c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cbd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cbd50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cbd50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd54: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x1cbd54u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbd58: 0x0  nop
    ctx->pc = 0x1cbd58u;
    // NOP
    // 0x1cbd5c: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x1cbd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x1cbd60: 0x2a070029  slti        $a3, $s0, 0x29
    ctx->pc = 0x1cbd60u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x1cbd64: 0x24c64cd0  addiu       $a2, $a2, 0x4CD0
    ctx->pc = 0x1cbd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19664));
label_1cbd68:
    // 0x1cbd68: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x1CBD68u;
    {
        const bool branch_taken_0x1cbd68 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD68u;
        // 0x1cbd6c: 0xca1821  addu        $v1, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd68) {
            ctx->pc = 0x1CBD9Cu;
            goto label_1cbd9c;
        }
    }
    ctx->pc = 0x1CBD70u;
    // 0x1cbd70: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1cbd70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cbd74: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBD74u;
    {
        const bool branch_taken_0x1cbd74 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1CBD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD74u;
        // 0x1cbd78: 0x32020003  andi        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd74) {
            ctx->pc = 0x1CBD88u;
            goto label_1cbd88;
        }
    }
    ctx->pc = 0x1CBD7Cu;
    // 0x1cbd7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBD7Cu;
    {
        const bool branch_taken_0x1cbd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd7c) {
            ctx->pc = 0x1CBD88u;
            goto label_1cbd88;
        }
    }
    ctx->pc = 0x1CBD84u;
    // 0x1cbd84: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1cbd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1cbd88:
    // 0x1cbd88: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x1cbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x1cbd8c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CBD8Cu;
    {
        const bool branch_taken_0x1cbd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cbd8c) {
            ctx->pc = 0x1CBDC0u;
            goto label_1cbdc0;
        }
    }
    ctx->pc = 0x1CBD94u;
    // 0x1cbd94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBD94u;
    {
        const bool branch_taken_0x1cbd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd94) {
            ctx->pc = 0x1CBDB0u;
            goto label_1cbdb0;
        }
    }
    ctx->pc = 0x1CBD9Cu;
label_1cbd9c:
    // 0x1cbd9c: 0x0  nop
    ctx->pc = 0x1cbd9cu;
    // NOP
    // 0x1cbda0: 0xca1021  addu        $v0, $a2, $t2
    ctx->pc = 0x1cbda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1cbda4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1cbda4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbda8: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CBDA8u;
    {
        const bool branch_taken_0x1cbda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1cbda8) {
            ctx->pc = 0x1CBDC0u;
            goto label_1cbdc0;
        }
    }
    ctx->pc = 0x1CBDB0u;
label_1cbdb0:
    // 0x1cbdb0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1cbdb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1cbdb4: 0x2942000c  slti        $v0, $t2, 0xC
    ctx->pc = 0x1cbdb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1cbdb8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1CBDB8u;
    {
        const bool branch_taken_0x1cbdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbdb8) {
            ctx->pc = 0x1CBD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbd68;
        }
    }
    ctx->pc = 0x1CBDC0u;
label_1cbdc0:
    // 0x1cbdc0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cbdc4: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x1cbdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
    // 0x1cbdc8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cbdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cbdcc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cbdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cbdd0: 0x90490000  lbu         $t1, 0x0($v0)
    ctx->pc = 0x1cbdd0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbdd4: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1cbdd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x1cbdd8: 0x25082930  addiu       $t0, $t0, 0x2930
    ctx->pc = 0x1cbdd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10544));
    // 0x1cbddc: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x1cbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1cbde0: 0x4a3821  addu        $a3, $v0, $t2
    ctx->pc = 0x1cbde0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1cbde4: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1cbde4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cbde8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1cbde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1cbdec: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1cbdecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1cbdf0: 0x24424c8c  addiu       $v0, $v0, 0x4C8C
    ctx->pc = 0x1cbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19596));
    // 0x1cbdf4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1cbdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cbdf8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1cbdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1cbdfc: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x1cbdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1cbe00: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1cbe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1cbe04: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1cbe04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1cbe08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbe0c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1cbe0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cbe10: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1cbe10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbe14: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1CBE14u;
    SET_GPR_U32(ctx, 31, 0x1CBE1Cu);
    ctx->pc = 0x1CBE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBE14u;
    // 0x1cbe18: 0x8f8581d0  lw          $a1, -0x7E30($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1CBE14u, 0x1CBE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBE1Cu;
label_1cbe1c:
    // 0x1cbe1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cbe1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe20:
    // 0x1cbe20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cbe20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1cbe24u;
}
