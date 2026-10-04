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

// Function: FUN_0017fea0
// Address: 0x17fea0 - 0x1800ec
void FUN_0017fea0_0x17fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017fea0_0x17fea0");
#endif

    switch (ctx->pc) {
        case 0x17feb0u: goto label_17feb0;
        case 0x17feb8u: goto label_17feb8;
        case 0x17fec0u: goto label_17fec0;
        case 0x17fed8u: goto label_17fed8;
        case 0x17fee4u: goto label_17fee4;
        case 0x17fef4u: goto label_17fef4;
        case 0x17ff00u: goto label_17ff00;
        case 0x17ff20u: goto label_17ff20;
        case 0x17ff28u: goto label_17ff28;
        case 0x17ff30u: goto label_17ff30;
        case 0x17ff38u: goto label_17ff38;
        case 0x17ff50u: goto label_17ff50;
        case 0x17ff58u: goto label_17ff58;
        case 0x17ff74u: goto label_17ff74;
        case 0x17ff8cu: goto label_17ff8c;
        case 0x17ff9cu: goto label_17ff9c;
        case 0x17ffb4u: goto label_17ffb4;
        case 0x17ffe0u: goto label_17ffe0;
        case 0x17ffe8u: goto label_17ffe8;
        case 0x17fff0u: goto label_17fff0;
        case 0x180014u: goto label_180014;
        case 0x18001cu: goto label_18001c;
        case 0x180038u: goto label_180038;
        case 0x180040u: goto label_180040;
        case 0x180048u: goto label_180048;
        case 0x180050u: goto label_180050;
        case 0x18005cu: goto label_18005c;
        case 0x180064u: goto label_180064;
        case 0x18006cu: goto label_18006c;
        case 0x180074u: goto label_180074;
        case 0x18007cu: goto label_18007c;
        case 0x180084u: goto label_180084;
        case 0x1800d0u: goto label_1800d0;
        case 0x1800dcu: goto label_1800dc;
        case 0x1800e4u: goto label_1800e4;
        default: break;
    }

    ctx->pc = 0x17fea0u;

    // 0x17fea0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x17fea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x17fea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17fea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17fea8: 0xc06fff8  jal         func_1BFFE0
    ctx->pc = 0x17FEA8u;
    SET_GPR_U32(ctx, 31, 0x17FEB0u);
    ctx->pc = 0x17FEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FEA8u;
    // 0x17feac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFFE0u, 0x17FEA8u, 0x17FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FEB0u;
label_17feb0:
    // 0x17feb0: 0xc069c1a  jal         func_1A7068
    ctx->pc = 0x17FEB0u;
    SET_GPR_U32(ctx, 31, 0x17FEB8u);
    ctx->pc = 0x17FEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FEB0u;
    // 0x17feb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7068u, 0x17FEB0u, 0x17FEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FEB8u;
label_17feb8:
    // 0x17feb8: 0xc06bf82  jal         func_1AFE08
    ctx->pc = 0x17FEB8u;
    SET_GPR_U32(ctx, 31, 0x17FEC0u);
    ctx->pc = 0x17FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FEB8u;
    // 0x17febc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFE08u, 0x17FEB8u, 0x17FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FEC0u;
label_17fec0:
    // 0x17fec0: 0x0  nop
    ctx->pc = 0x17fec0u;
    // NOP
    // 0x17fec4: 0x0  nop
    ctx->pc = 0x17fec4u;
    // NOP
    // 0x17fec8: 0x0  nop
    ctx->pc = 0x17fec8u;
    // NOP
    // 0x17fecc: 0x0  nop
    ctx->pc = 0x17feccu;
    // NOP
    // 0x17fed0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17FED0u;
    {
        const bool branch_taken_0x17fed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fed0) {
            ctx->pc = 0x17FEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17feb8;
        }
    }
    ctx->pc = 0x17FED8u;
label_17fed8:
    // 0x17fed8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x17fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x17fedc: 0xc06b2b0  jal         func_1ACAC0
    ctx->pc = 0x17FEDCu;
    SET_GPR_U32(ctx, 31, 0x17FEE4u);
    ctx->pc = 0x17FEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FEDCu;
    // 0x17fee0: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACAC0u, 0x17FEDCu, 0x17FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FEE4u;
label_17fee4:
    // 0x17fee4: 0x0  nop
    ctx->pc = 0x17fee4u;
    // NOP
    // 0x17fee8: 0x0  nop
    ctx->pc = 0x17fee8u;
    // NOP
    // 0x17feec: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17FEECu;
    {
        const bool branch_taken_0x17feec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17feec) {
            ctx->pc = 0x17FED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fed8;
        }
    }
    ctx->pc = 0x17FEF4u;
label_17fef4:
    // 0x17fef4: 0x0  nop
    ctx->pc = 0x17fef4u;
    // NOP
    // 0x17fef8: 0xc06b2a2  jal         func_1ACA88
    ctx->pc = 0x17FEF8u;
    SET_GPR_U32(ctx, 31, 0x17FF00u);
    ctx->pc = 0x1ACA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACA88u, 0x17FEF8u, 0x17FF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF00u;
label_17ff00:
    // 0x17ff00: 0x0  nop
    ctx->pc = 0x17ff00u;
    // NOP
    // 0x17ff04: 0x0  nop
    ctx->pc = 0x17ff04u;
    // NOP
    // 0x17ff08: 0x0  nop
    ctx->pc = 0x17ff08u;
    // NOP
    // 0x17ff0c: 0x0  nop
    ctx->pc = 0x17ff0cu;
    // NOP
    // 0x17ff10: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17FF10u;
    {
        const bool branch_taken_0x17ff10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ff10) {
            ctx->pc = 0x17FEF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fef4;
        }
    }
    ctx->pc = 0x17FF18u;
    // 0x17ff18: 0xc069c1a  jal         func_1A7068
    ctx->pc = 0x17FF18u;
    SET_GPR_U32(ctx, 31, 0x17FF20u);
    ctx->pc = 0x17FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF18u;
    // 0x17ff1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7068u, 0x17FF18u, 0x17FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF20u;
label_17ff20:
    // 0x17ff20: 0xc06af54  jal         func_1ABD50
    ctx->pc = 0x17FF20u;
    SET_GPR_U32(ctx, 31, 0x17FF28u);
    ctx->pc = 0x1ABD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABD50u, 0x17FF20u, 0x17FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF28u;
label_17ff28:
    // 0x17ff28: 0xc06a226  jal         func_1A8898
    ctx->pc = 0x17FF28u;
    SET_GPR_U32(ctx, 31, 0x17FF30u);
    ctx->pc = 0x1A8898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8898u, 0x17FF28u, 0x17FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF30u;
label_17ff30:
    // 0x17ff30: 0xc06bf82  jal         func_1AFE08
    ctx->pc = 0x17FF30u;
    SET_GPR_U32(ctx, 31, 0x17FF38u);
    ctx->pc = 0x17FF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF30u;
    // 0x17ff34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFE08u, 0x17FF30u, 0x17FF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF38u;
label_17ff38:
    // 0x17ff38: 0x0  nop
    ctx->pc = 0x17ff38u;
    // NOP
    // 0x17ff3c: 0x0  nop
    ctx->pc = 0x17ff3cu;
    // NOP
    // 0x17ff40: 0x0  nop
    ctx->pc = 0x17ff40u;
    // NOP
    // 0x17ff44: 0x0  nop
    ctx->pc = 0x17ff44u;
    // NOP
    // 0x17ff48: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17FF48u;
    {
        const bool branch_taken_0x17ff48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ff48) {
            ctx->pc = 0x17FF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ff30;
        }
    }
    ctx->pc = 0x17FF50u;
label_17ff50:
    // 0x17ff50: 0xc06c0b8  jal         func_1B02E0
    ctx->pc = 0x17FF50u;
    SET_GPR_U32(ctx, 31, 0x17FF58u);
    ctx->pc = 0x17FF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF50u;
    // 0x17ff54: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B02E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B02E0u, 0x17FF50u, 0x17FF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF58u;
label_17ff58:
    // 0x17ff58: 0x0  nop
    ctx->pc = 0x17ff58u;
    // NOP
    // 0x17ff5c: 0x0  nop
    ctx->pc = 0x17ff5cu;
    // NOP
    // 0x17ff60: 0x0  nop
    ctx->pc = 0x17ff60u;
    // NOP
    // 0x17ff64: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17FF64u;
    {
        const bool branch_taken_0x17ff64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ff64) {
            ctx->pc = 0x17FF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ff50;
        }
    }
    ctx->pc = 0x17FF6Cu;
    // 0x17ff6c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17FF6Cu;
    {
        const bool branch_taken_0x17ff6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF6Cu;
        // 0x17ff70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff6c) {
            ctx->pc = 0x17FFC0u;
            goto label_17ffc0;
        }
    }
    ctx->pc = 0x17FF74u;
label_17ff74:
    // 0x17ff74: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17ff74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17ff78: 0x24429830  addiu       $v0, $v0, -0x67D0
    ctx->pc = 0x17ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940720));
    // 0x17ff7c: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x17ff7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ff80: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x17ff80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x17ff84: 0xc08f28e  jal         func_23CA38
    ctx->pc = 0x17FF84u;
    SET_GPR_U32(ctx, 31, 0x17FF8Cu);
    ctx->pc = 0x17FF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF84u;
    // 0x17ff88: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CA38u, 0x17FF84u, 0x17FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF8Cu;
label_17ff8c:
    // 0x17ff8c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x17ff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x17ff90: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17ff90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17ff94: 0xc08f28e  jal         func_23CA38
    ctx->pc = 0x17FF94u;
    SET_GPR_U32(ctx, 31, 0x17FF9Cu);
    ctx->pc = 0x17FF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF94u;
    // 0x17ff98: 0x24a59838  addiu       $a1, $a1, -0x67C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CA38u, 0x17FF94u, 0x17FF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF9Cu;
label_17ff9c:
    // 0x17ff9c: 0x0  nop
    ctx->pc = 0x17ff9cu;
    // NOP
    // 0x17ffa0: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x17ffa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x17ffa4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17ffa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ffa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ffac: 0xc06b170  jal         func_1AC5C0
    ctx->pc = 0x17FFACu;
    SET_GPR_U32(ctx, 31, 0x17FFB4u);
    ctx->pc = 0x17FFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FFACu;
    // 0x17ffb0: 0x24c69840  addiu       $a2, $a2, -0x67C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC5C0u, 0x17FFACu, 0x17FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FFB4u;
label_17ffb4:
    // 0x17ffb4: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17FFB4u;
    {
        const bool branch_taken_0x17ffb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17ffb4) {
            ctx->pc = 0x17FF9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ff9c;
        }
    }
    ctx->pc = 0x17FFBCu;
    // 0x17ffbc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17ffbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_17ffc0:
    // 0x17ffc0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x17ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x17ffc4: 0x24422a00  addiu       $v0, $v0, 0x2A00
    ctx->pc = 0x17ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10752));
    // 0x17ffc8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x17ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17ffcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ffd0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x17FFD0u;
    {
        const bool branch_taken_0x17ffd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFD0u;
        // 0x17ffd4: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffd0) {
            ctx->pc = 0x17FF74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ff74;
        }
    }
    ctx->pc = 0x17FFD8u;
    // 0x17ffd8: 0xc0669a2  jal         func_19A688
    ctx->pc = 0x17FFD8u;
    SET_GPR_U32(ctx, 31, 0x17FFE0u);
    ctx->pc = 0x17FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FFD8u;
    // 0x17ffdc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A688u, 0x17FFD8u, 0x17FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FFE0u;
label_17ffe0:
    // 0x17ffe0: 0xc06614e  jal         func_198538
    ctx->pc = 0x17FFE0u;
    SET_GPR_U32(ctx, 31, 0x17FFE8u);
    ctx->pc = 0x198538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198538u, 0x17FFE0u, 0x17FFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FFE8u;
label_17ffe8:
    // 0x17ffe8: 0xc066998  jal         func_19A660
    ctx->pc = 0x17FFE8u;
    SET_GPR_U32(ctx, 31, 0x17FFF0u);
    ctx->pc = 0x17FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FFE8u;
    // 0x17ffec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A660u, 0x17FFE8u, 0x17FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FFF0u;
label_17fff0:
    // 0x17fff0: 0xaf8287a4  sw          $v0, -0x785C($gp)
    ctx->pc = 0x17fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936484), GPR_U32(ctx, 2));
    // 0x17fff4: 0x64030040  daddiu      $v1, $zero, 0x40
    ctx->pc = 0x17fff4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x17fff8: 0x8f8587a4  lw          $a1, -0x785C($gp)
    ctx->pc = 0x17fff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936484)));
    // 0x17fffc: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x17fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x180000: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x180000u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x180004: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x180004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x180008: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x180008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18000c: 0xc06005c  jal         func_180170
    ctx->pc = 0x18000Cu;
    SET_GPR_U32(ctx, 31, 0x180014u);
    ctx->pc = 0x180010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18000Cu;
    // 0x180010: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180170u, 0x18000Cu, 0x180014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180014u;
label_180014:
    // 0x180014: 0xc0810ac  jal         func_2042B0
    ctx->pc = 0x180014u;
    SET_GPR_U32(ctx, 31, 0x18001Cu);
    ctx->pc = 0x2042B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2042B0u, 0x180014u, 0x18001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18001Cu;
label_18001c:
    // 0x18001c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x18001cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x180020: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x180020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x180024: 0xff8087b8  sd          $zero, -0x7848($gp)
    ctx->pc = 0x180024u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936504), GPR_U64(ctx, 0));
    // 0x180028: 0xff8087d0  sd          $zero, -0x7830($gp)
    ctx->pc = 0x180028u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936528), GPR_U64(ctx, 0));
    // 0x18002c: 0xff8087c8  sd          $zero, -0x7838($gp)
    ctx->pc = 0x18002cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936520), GPR_U64(ctx, 0));
    // 0x180030: 0xc05c2c4  jal         func_170B10
    ctx->pc = 0x180030u;
    SET_GPR_U32(ctx, 31, 0x180038u);
    ctx->pc = 0x180034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180030u;
    // 0x180034: 0xff8087c0  sd          $zero, -0x7840($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936512), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170B10u, 0x180030u, 0x180038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180038u;
label_180038:
    // 0x180038: 0xc08fd64  jal         func_23F590
    ctx->pc = 0x180038u;
    SET_GPR_U32(ctx, 31, 0x180040u);
    ctx->pc = 0x23F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F590u, 0x180038u, 0x180040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180040u;
label_180040:
    // 0x180040: 0xc05bfb0  jal         func_16FEC0
    ctx->pc = 0x180040u;
    SET_GPR_U32(ctx, 31, 0x180048u);
    ctx->pc = 0x180044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180040u;
    // 0x180044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FEC0u, 0x180040u, 0x180048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180048u;
label_180048:
    // 0x180048: 0xc08d108  jal         func_234420
    ctx->pc = 0x180048u;
    SET_GPR_U32(ctx, 31, 0x180050u);
    ctx->pc = 0x234420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234420u, 0x180048u, 0x180050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180050u;
label_180050:
    // 0x180050: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180054: 0xc06641a  jal         func_199068
    ctx->pc = 0x180054u;
    SET_GPR_U32(ctx, 31, 0x18005Cu);
    ctx->pc = 0x180058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180054u;
    // 0x180058: 0xaf8087d8  sw          $zero, -0x7828($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936536), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199068u, 0x180054u, 0x18005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18005Cu;
label_18005c:
    // 0x18005c: 0xc06641a  jal         func_199068
    ctx->pc = 0x18005Cu;
    SET_GPR_U32(ctx, 31, 0x180064u);
    ctx->pc = 0x180060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18005Cu;
    // 0x180060: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199068u, 0x18005Cu, 0x180064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180064u;
label_180064:
    // 0x180064: 0xc0694c0  jal         func_1A5300
    ctx->pc = 0x180064u;
    SET_GPR_U32(ctx, 31, 0x18006Cu);
    ctx->pc = 0x180068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180064u;
    // 0x180068: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5300u, 0x180064u, 0x18006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18006Cu;
label_18006c:
    // 0x18006c: 0xc06e068  jal         func_1B81A0
    ctx->pc = 0x18006Cu;
    SET_GPR_U32(ctx, 31, 0x180074u);
    ctx->pc = 0x1B81A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B81A0u, 0x18006Cu, 0x180074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180074u;
label_180074:
    // 0x180074: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x180074u;
    SET_GPR_U32(ctx, 31, 0x18007Cu);
    ctx->pc = 0x180078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180074u;
    // 0x180078: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x180074u, 0x18007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18007Cu;
label_18007c:
    // 0x18007c: 0xc06641a  jal         func_199068
    ctx->pc = 0x18007Cu;
    SET_GPR_U32(ctx, 31, 0x180084u);
    ctx->pc = 0x180080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18007Cu;
    // 0x180080: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199068u, 0x18007Cu, 0x180084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180084u;
label_180084:
    // 0x180084: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x180084u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x180088: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x180088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x18008c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x18008cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x180090: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x180090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x180094: 0xac233ffc  sw          $v1, 0x3FFC($at)
    ctx->pc = 0x180094u;
    runtime->Store32(rdram, ctx, 0x70003FFCu, GPR_U32(ctx, 3));
    // 0x180098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18009c: 0xaf808808  sw          $zero, -0x77F8($gp)
    ctx->pc = 0x18009cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 0));
    // 0x1800a0: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x1800a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x1800a4: 0xaf8287e4  sw          $v0, -0x781C($gp)
    ctx->pc = 0x1800a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936548), GPR_U32(ctx, 2));
    // 0x1800a8: 0x24840610  addiu       $a0, $a0, 0x610
    ctx->pc = 0x1800a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1552));
    // 0x1800ac: 0xaf808800  sw          $zero, -0x7800($gp)
    ctx->pc = 0x1800acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936576), GPR_U32(ctx, 0));
    // 0x1800b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1800b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800b4: 0xdc221000  ld          $v0, 0x1000($at)
    ctx->pc = 0x1800b4u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x1800b8: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x1800b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x1800bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1800bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1800c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1800c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1800c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1800c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1800c8: 0xc08d118  jal         func_234460
    ctx->pc = 0x1800C8u;
    SET_GPR_U32(ctx, 31, 0x1800D0u);
    ctx->pc = 0x1800CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1800C8u;
    // 0x1800cc: 0xaf828804  sw          $v0, -0x77FC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936580), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234460u, 0x1800C8u, 0x1800D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800D0u;
label_1800d0:
    // 0x1800d0: 0xaf8287e0  sw          $v0, -0x7820($gp)
    ctx->pc = 0x1800d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936544), GPR_U32(ctx, 2));
    // 0x1800d4: 0xc0694da  jal         func_1A5368
    ctx->pc = 0x1800D4u;
    SET_GPR_U32(ctx, 31, 0x1800DCu);
    ctx->pc = 0x1800D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1800D4u;
    // 0x1800d8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5368u, 0x1800D4u, 0x1800DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800DCu;
label_1800dc:
    // 0x1800dc: 0xc05c43c  jal         func_1710F0
    ctx->pc = 0x1800DCu;
    SET_GPR_U32(ctx, 31, 0x1800E4u);
    ctx->pc = 0x1710F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1710F0u, 0x1800DCu, 0x1800E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800E4u;
label_1800e4:
    // 0x1800e4: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1800E4u;
    SET_GPR_U32(ctx, 31, 0x1800ECu);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1800E4u, 0x1800ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800ECu;
}
