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

// Function: entry_0015ab64
// Address: 0x15ab64 - 0x15b6a0
void entry_0015ab64_0x15ab64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ab64_0x15ab64");
#endif

    switch (ctx->pc) {
        case 0x15af2cu: goto label_15af2c;
        case 0x15aff4u: goto label_15aff4;
        case 0x15b068u: goto label_15b068;
        case 0x15b0d8u: goto label_15b0d8;
        case 0x15b154u: goto label_15b154;
        case 0x15b1d4u: goto label_15b1d4;
        case 0x15b248u: goto label_15b248;
        case 0x15b2c4u: goto label_15b2c4;
        case 0x15b348u: goto label_15b348;
        case 0x15b3b8u: goto label_15b3b8;
        case 0x15b428u: goto label_15b428;
        case 0x15b4a4u: goto label_15b4a4;
        case 0x15b524u: goto label_15b524;
        case 0x15b598u: goto label_15b598;
        case 0x15b614u: goto label_15b614;
        default: break;
    }

    ctx->pc = 0x15ab64u;

    // 0x15ab64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15ab64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ab68: 0x3e00008  jr          $ra
    ctx->pc = 0x15AB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB68u;
        // 0x15ab6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AB70u;
    // 0x15ab70: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ab70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15ab74: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x15ab74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15ab78: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x15ab78u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x334AF4u));
    // 0x15ab7c: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AB7Cu;
    {
        const bool branch_taken_0x15ab7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x15AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB7Cu;
        // 0x15ab80: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab7c) {
            ctx->pc = 0x15AB8Cu;
            goto label_15ab8c;
        }
    }
    ctx->pc = 0x15AB84u;
    // 0x15ab84: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x15AB84u;
    {
        const bool branch_taken_0x15ab84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB84u;
        // 0x15ab88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab84) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AB8Cu;
label_15ab8c:
    // 0x15ab8c: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x15AB8Cu;
    {
        const bool branch_taken_0x15ab8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB8Cu;
        // 0x15ab90: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab8c) {
            ctx->pc = 0x15ABD4u;
            goto label_15abd4;
        }
    }
    ctx->pc = 0x15AB94u;
    // 0x15ab94: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ab94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15ab98: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x15ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x15ab9c: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15ab9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x15aba0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15ABA0u;
    {
        const bool branch_taken_0x15aba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABA0u;
        // 0x15aba4: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aba0) {
            ctx->pc = 0x15ABCCu;
            goto label_15abcc;
        }
    }
    ctx->pc = 0x15ABA8u;
    // 0x15aba8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15aba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15abac: 0x90234910  lbu         $v1, 0x4910($at)
    ctx->pc = 0x15abacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334910u));
    // 0x15abb0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15ABB0u;
    {
        const bool branch_taken_0x15abb0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABB0u;
        // 0x15abb4: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15abb0) {
            ctx->pc = 0x15ABC4u;
            goto label_15abc4;
        }
    }
    ctx->pc = 0x15ABB8u;
    // 0x15abb8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15ABB8u;
    {
        const bool branch_taken_0x15abb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15abb8) {
            ctx->pc = 0x15ABC4u;
            goto label_15abc4;
        }
    }
    ctx->pc = 0x15ABC0u;
    // 0x15abc0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x15abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_15abc4:
    // 0x15abc4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x15ABC4u;
    {
        const bool branch_taken_0x15abc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABC4u;
        // 0x15abc8: 0x2442001e  addiu       $v0, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15abc4) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ABCCu;
label_15abcc:
    // 0x15abcc: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x15ABCCu;
    {
        const bool branch_taken_0x15abcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15abcc) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ABD4u;
label_15abd4:
    // 0x15abd4: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x15abd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    // 0x15abd8: 0x2c610017  sltiu       $at, $v1, 0x17
    ctx->pc = 0x15abd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x15abdc: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x15ABDCu;
    {
        const bool branch_taken_0x15abdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABDCu;
        // 0x15abe0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15abdc) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ABE4u;
    // 0x15abe4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15abe8: 0x24848810  addiu       $a0, $a0, -0x77F0
    ctx->pc = 0x15abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936592));
    // 0x15abec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15abecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15abf0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15abf4: 0x600008  jr          $v1
    ctx->pc = 0x15ABF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15ABFCu: goto label_15abfc;
            case 0x15AC20u: goto label_15ac20;
            case 0x15AC28u: goto label_15ac28;
            case 0x15AC30u: goto label_15ac30;
            case 0x15AC38u: goto label_15ac38;
            case 0x15AC40u: goto label_15ac40;
            case 0x15AC48u: goto label_15ac48;
            case 0x15AC6Cu: goto label_15ac6c;
            case 0x15AC74u: goto label_15ac74;
            case 0x15ACA8u: goto label_15aca8;
            case 0x15ACB0u: goto label_15acb0;
            case 0x15ACB8u: goto label_15acb8;
            case 0x15ACECu: goto label_15acec;
            case 0x15ACF4u: goto label_15acf4;
            case 0x15ACFCu: goto label_15acfc;
            case 0x15AD04u: goto label_15ad04;
            case 0x15AD0Cu: goto label_15ad0c;
            case 0x15AD14u: goto label_15ad14;
            case 0x15AD1Cu: goto label_15ad1c;
            case 0x15AD40u: goto label_15ad40;
            case 0x15AD64u: goto label_15ad64;
            case 0x15AD6Cu: goto label_15ad6c;
            case 0x15AD74u: goto label_15ad74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ABF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15ABFCu;
label_15abfc:
    // 0x15abfc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15abfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15ac00: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x15ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x15ac04: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15ac04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x15ac08: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AC08u;
    {
        const bool branch_taken_0x15ac08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC08u;
        // 0x15ac0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac08) {
            ctx->pc = 0x15AC18u;
            goto label_15ac18;
        }
    }
    ctx->pc = 0x15AC10u;
    // 0x15ac10: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x15AC10u;
    {
        const bool branch_taken_0x15ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC10u;
        // 0x15ac14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac10) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC18u;
label_15ac18:
    // 0x15ac18: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x15AC18u;
    {
        const bool branch_taken_0x15ac18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ac18) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC20u;
label_15ac20:
    // 0x15ac20: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x15AC20u;
    {
        const bool branch_taken_0x15ac20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC20u;
        // 0x15ac24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac20) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC28u;
label_15ac28:
    // 0x15ac28: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x15AC28u;
    {
        const bool branch_taken_0x15ac28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC28u;
        // 0x15ac2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac28) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC30u;
label_15ac30:
    // 0x15ac30: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x15AC30u;
    {
        const bool branch_taken_0x15ac30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC30u;
        // 0x15ac34: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac30) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC38u;
label_15ac38:
    // 0x15ac38: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x15AC38u;
    {
        const bool branch_taken_0x15ac38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC38u;
        // 0x15ac3c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac38) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC40u;
label_15ac40:
    // 0x15ac40: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x15AC40u;
    {
        const bool branch_taken_0x15ac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC40u;
        // 0x15ac44: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac40) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC48u;
label_15ac48:
    // 0x15ac48: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ac48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15ac4c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x15ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x15ac50: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15ac50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x15ac54: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AC54u;
    {
        const bool branch_taken_0x15ac54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC54u;
        // 0x15ac58: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac54) {
            ctx->pc = 0x15AC64u;
            goto label_15ac64;
        }
    }
    ctx->pc = 0x15AC5Cu;
    // 0x15ac5c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x15AC5Cu;
    {
        const bool branch_taken_0x15ac5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC5Cu;
        // 0x15ac60: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac5c) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC64u;
label_15ac64:
    // 0x15ac64: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x15AC64u;
    {
        const bool branch_taken_0x15ac64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ac64) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC6Cu;
label_15ac6c:
    // 0x15ac6c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x15AC6Cu;
    {
        const bool branch_taken_0x15ac6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC6Cu;
        // 0x15ac70: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac6c) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC74u;
label_15ac74:
    // 0x15ac74: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ac74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15ac78: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x15ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x15ac7c: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15ac7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x15ac80: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15AC80u;
    {
        const bool branch_taken_0x15ac80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC80u;
        // 0x15ac84: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac80) {
            ctx->pc = 0x15AC98u;
            goto label_15ac98;
        }
    }
    ctx->pc = 0x15AC88u;
    // 0x15ac88: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x15ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x15ac8c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15AC8Cu;
    {
        const bool branch_taken_0x15ac8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC8Cu;
        // 0x15ac90: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac8c) {
            ctx->pc = 0x15ACA0u;
            goto label_15aca0;
        }
    }
    ctx->pc = 0x15AC94u;
    // 0x15ac94: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x15ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_15ac98:
    // 0x15ac98: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x15AC98u;
    {
        const bool branch_taken_0x15ac98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ac98) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ACA0u;
label_15aca0:
    // 0x15aca0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x15ACA0u;
    {
        const bool branch_taken_0x15aca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aca0) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ACA8u;
label_15aca8:
    // 0x15aca8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x15ACA8u;
    {
        const bool branch_taken_0x15aca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACA8u;
        // 0x15acac: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aca8) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ACB0u;
label_15acb0:
    // 0x15acb0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x15ACB0u;
    {
        const bool branch_taken_0x15acb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACB0u;
        // 0x15acb4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acb0) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ACB8u;
label_15acb8:
    // 0x15acb8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15acb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15acbc: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x15acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x15acc0: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15acc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x15acc4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15ACC4u;
    {
        const bool branch_taken_0x15acc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACC4u;
        // 0x15acc8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acc4) {
            ctx->pc = 0x15ACDCu;
            goto label_15acdc;
        }
    }
    ctx->pc = 0x15ACCCu;
    // 0x15accc: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x15acccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x15acd0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15ACD0u;
    {
        const bool branch_taken_0x15acd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACD0u;
        // 0x15acd4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acd0) {
            ctx->pc = 0x15ACE4u;
            goto label_15ace4;
        }
    }
    ctx->pc = 0x15ACD8u;
    // 0x15acd8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x15acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_15acdc:
    // 0x15acdc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x15ACDCu;
    {
        const bool branch_taken_0x15acdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15acdc) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ACE4u;
label_15ace4:
    // 0x15ace4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x15ACE4u;
    {
        const bool branch_taken_0x15ace4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ace4) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ACECu;
label_15acec:
    // 0x15acec: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x15ACECu;
    {
        const bool branch_taken_0x15acec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACECu;
        // 0x15acf0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acec) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ACF4u;
label_15acf4:
    // 0x15acf4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x15ACF4u;
    {
        const bool branch_taken_0x15acf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACF4u;
        // 0x15acf8: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acf4) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ACFCu;
label_15acfc:
    // 0x15acfc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x15ACFCu;
    {
        const bool branch_taken_0x15acfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACFCu;
        // 0x15ad00: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acfc) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD04u;
label_15ad04:
    // 0x15ad04: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x15AD04u;
    {
        const bool branch_taken_0x15ad04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD04u;
        // 0x15ad08: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad04) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD0Cu;
label_15ad0c:
    // 0x15ad0c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15AD0Cu;
    {
        const bool branch_taken_0x15ad0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD0Cu;
        // 0x15ad10: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad0c) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD14u;
label_15ad14:
    // 0x15ad14: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x15AD14u;
    {
        const bool branch_taken_0x15ad14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD14u;
        // 0x15ad18: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad14) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD1Cu;
label_15ad1c:
    // 0x15ad1c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ad1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15ad20: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x15ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x15ad24: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15ad24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x15ad28: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AD28u;
    {
        const bool branch_taken_0x15ad28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD28u;
        // 0x15ad2c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad28) {
            ctx->pc = 0x15AD38u;
            goto label_15ad38;
        }
    }
    ctx->pc = 0x15AD30u;
    // 0x15ad30: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15AD30u;
    {
        const bool branch_taken_0x15ad30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD30u;
        // 0x15ad34: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad30) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD38u;
label_15ad38:
    // 0x15ad38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x15AD38u;
    {
        const bool branch_taken_0x15ad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ad38) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD40u;
label_15ad40:
    // 0x15ad40: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ad40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15ad44: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x15ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x15ad48: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15ad48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x15ad4c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AD4Cu;
    {
        const bool branch_taken_0x15ad4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD4Cu;
        // 0x15ad50: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad4c) {
            ctx->pc = 0x15AD5Cu;
            goto label_15ad5c;
        }
    }
    ctx->pc = 0x15AD54u;
    // 0x15ad54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15AD54u;
    {
        const bool branch_taken_0x15ad54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD54u;
        // 0x15ad58: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad54) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD5Cu;
label_15ad5c:
    // 0x15ad5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15AD5Cu;
    {
        const bool branch_taken_0x15ad5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ad5c) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD64u;
label_15ad64:
    // 0x15ad64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15AD64u;
    {
        const bool branch_taken_0x15ad64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD64u;
        // 0x15ad68: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad64) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD6Cu;
label_15ad6c:
    // 0x15ad6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15AD6Cu;
    {
        const bool branch_taken_0x15ad6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD6Cu;
        // 0x15ad70: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad6c) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD74u;
label_15ad74:
    // 0x15ad74: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x15ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_15ad78:
    // 0x15ad78: 0x3e00008  jr          $ra
    ctx->pc = 0x15AD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AD80u;
    // 0x15ad80: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ad80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15ad84: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15ad84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15ad88: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x15ad88u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x15ad8c: 0x10660004  beq         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x15AD8Cu;
    {
        const bool branch_taken_0x15ad8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x15AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD8Cu;
        // 0x15ad90: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad8c) {
            ctx->pc = 0x15ADA0u;
            goto label_15ada0;
        }
    }
    ctx->pc = 0x15AD94u;
    // 0x15ad94: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x15ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15ad98: 0x14650009  bne         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15AD98u;
    {
        const bool branch_taken_0x15ad98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x15ad98) {
            ctx->pc = 0x15ADC0u;
            goto label_15adc0;
        }
    }
    ctx->pc = 0x15ADA0u;
label_15ada0:
    // 0x15ada0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15ada4: 0x90234910  lbu         $v1, 0x4910($at)
    ctx->pc = 0x15ada4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
    // 0x15ada8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x15ada8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15adac: 0x0  nop
    ctx->pc = 0x15adacu;
    // NOP
    // 0x15adb0: 0x0  nop
    ctx->pc = 0x15adb0u;
    // NOP
    // 0x15adb4: 0x1010  mfhi        $v0
    ctx->pc = 0x15adb4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x15adb8: 0x10000237  b           . + 4 + (0x237 << 2)
    ctx->pc = 0x15ADB8u;
    {
        const bool branch_taken_0x15adb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADB8u;
        // 0x15adbc: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15adb8) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15ADC0u;
label_15adc0:
    // 0x15adc0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15adc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15adc4: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x15adc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Du));
    // 0x15adc8: 0x2c610017  sltiu       $at, $v1, 0x17
    ctx->pc = 0x15adc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x15adcc: 0x10200232  beqz        $at, . + 4 + (0x232 << 2)
    ctx->pc = 0x15ADCCu;
    {
        const bool branch_taken_0x15adcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADCCu;
        // 0x15add0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15adcc) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15ADD4u;
    // 0x15add4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15add4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15add8: 0x24848870  addiu       $a0, $a0, -0x7790
    ctx->pc = 0x15add8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936688));
    // 0x15addc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15addcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15ade0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ade4: 0x600008  jr          $v1
    ctx->pc = 0x15ADE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15ADECu: goto label_15adec;
            case 0x15ADF4u: goto label_15adf4;
            case 0x15ADFCu: goto label_15adfc;
            case 0x15AE04u: goto label_15ae04;
            case 0x15AE0Cu: goto label_15ae0c;
            case 0x15AE14u: goto label_15ae14;
            case 0x15AE1Cu: goto label_15ae1c;
            case 0x15AE24u: goto label_15ae24;
            case 0x15AE2Cu: goto label_15ae2c;
            case 0x15AEACu: goto label_15aeac;
            case 0x15AEB4u: goto label_15aeb4;
            case 0x15AEBCu: goto label_15aebc;
            case 0x15AF08u: goto label_15af08;
            case 0x15AF10u: goto label_15af10;
            case 0x15AF18u: goto label_15af18;
            case 0x15AF9Cu: goto label_15af9c;
            case 0x15AFD0u: goto label_15afd0;
            case 0x15AFD8u: goto label_15afd8;
            case 0x15AFE0u: goto label_15afe0;
            case 0x15B334u: goto label_15b334;
            case 0x15B684u: goto label_15b684;
            case 0x15B68Cu: goto label_15b68c;
            case 0x15B694u: goto label_15b694;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ADE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15ADECu;
label_15adec:
    // 0x15adec: 0x1000022a  b           . + 4 + (0x22A << 2)
    ctx->pc = 0x15ADECu;
    {
        const bool branch_taken_0x15adec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADECu;
        // 0x15adf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15adec) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15ADF4u;
label_15adf4:
    // 0x15adf4: 0x10000228  b           . + 4 + (0x228 << 2)
    ctx->pc = 0x15ADF4u;
    {
        const bool branch_taken_0x15adf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADF4u;
        // 0x15adf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15adf4) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15ADFCu;
label_15adfc:
    // 0x15adfc: 0x10000226  b           . + 4 + (0x226 << 2)
    ctx->pc = 0x15ADFCu;
    {
        const bool branch_taken_0x15adfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADFCu;
        // 0x15ae00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15adfc) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AE04u;
label_15ae04:
    // 0x15ae04: 0x10000224  b           . + 4 + (0x224 << 2)
    ctx->pc = 0x15AE04u;
    {
        const bool branch_taken_0x15ae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE04u;
        // 0x15ae08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae04) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AE0Cu;
label_15ae0c:
    // 0x15ae0c: 0x10000222  b           . + 4 + (0x222 << 2)
    ctx->pc = 0x15AE0Cu;
    {
        const bool branch_taken_0x15ae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE0Cu;
        // 0x15ae10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae0c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AE14u;
label_15ae14:
    // 0x15ae14: 0x10000220  b           . + 4 + (0x220 << 2)
    ctx->pc = 0x15AE14u;
    {
        const bool branch_taken_0x15ae14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE14u;
        // 0x15ae18: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae14) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AE1Cu;
label_15ae1c:
    // 0x15ae1c: 0x1000021e  b           . + 4 + (0x21E << 2)
    ctx->pc = 0x15AE1Cu;
    {
        const bool branch_taken_0x15ae1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE1Cu;
        // 0x15ae20: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae1c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AE24u;
label_15ae24:
    // 0x15ae24: 0x1000021c  b           . + 4 + (0x21C << 2)
    ctx->pc = 0x15AE24u;
    {
        const bool branch_taken_0x15ae24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE24u;
        // 0x15ae28: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae24) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AE2Cu;
label_15ae2c:
    // 0x15ae2c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ae2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15ae30: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x15ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15ae34: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15ae34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x15ae38: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AE38u;
    {
        const bool branch_taken_0x15ae38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE38u;
        // 0x15ae3c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae38) {
            ctx->pc = 0x15AE48u;
            goto label_15ae48;
        }
    }
    ctx->pc = 0x15AE40u;
    // 0x15ae40: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x15AE40u;
    {
        const bool branch_taken_0x15ae40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE40u;
        // 0x15ae44: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae40) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AE48u;
label_15ae48:
    // 0x15ae48: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15AE48u;
    {
        const bool branch_taken_0x15ae48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE48u;
        // 0x15ae4c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae48) {
            ctx->pc = 0x15AE80u;
            goto label_15ae80;
        }
    }
    ctx->pc = 0x15AE50u;
    // 0x15ae50: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ae50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15ae54: 0x9023490f  lbu         $v1, 0x490F($at)
    ctx->pc = 0x15ae54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Fu));
    // 0x15ae58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AE58u;
    {
        const bool branch_taken_0x15ae58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE58u;
        // 0x15ae5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae58) {
            ctx->pc = 0x15AE68u;
            goto label_15ae68;
        }
    }
    ctx->pc = 0x15AE60u;
    // 0x15ae60: 0x1000020d  b           . + 4 + (0x20D << 2)
    ctx->pc = 0x15AE60u;
    {
        const bool branch_taken_0x15ae60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE60u;
        // 0x15ae64: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae60) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AE68u;
label_15ae68:
    // 0x15ae68: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AE68u;
    {
        const bool branch_taken_0x15ae68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15ae68) {
            ctx->pc = 0x15AE78u;
            goto label_15ae78;
        }
    }
    ctx->pc = 0x15AE70u;
    // 0x15ae70: 0x10000209  b           . + 4 + (0x209 << 2)
    ctx->pc = 0x15AE70u;
    {
        const bool branch_taken_0x15ae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE70u;
        // 0x15ae74: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae70) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AE78u;
label_15ae78:
    // 0x15ae78: 0x10000207  b           . + 4 + (0x207 << 2)
    ctx->pc = 0x15AE78u;
    {
        const bool branch_taken_0x15ae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE78u;
        // 0x15ae7c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae78) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AE80u;
label_15ae80:
    // 0x15ae80: 0x9023490f  lbu         $v1, 0x490F($at)
    ctx->pc = 0x15ae80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18703)));
    // 0x15ae84: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AE84u;
    {
        const bool branch_taken_0x15ae84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE84u;
        // 0x15ae88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae84) {
            ctx->pc = 0x15AE94u;
            goto label_15ae94;
        }
    }
    ctx->pc = 0x15AE8Cu;
    // 0x15ae8c: 0x10000202  b           . + 4 + (0x202 << 2)
    ctx->pc = 0x15AE8Cu;
    {
        const bool branch_taken_0x15ae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE8Cu;
        // 0x15ae90: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae8c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AE94u;
label_15ae94:
    // 0x15ae94: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AE94u;
    {
        const bool branch_taken_0x15ae94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15ae94) {
            ctx->pc = 0x15AEA4u;
            goto label_15aea4;
        }
    }
    ctx->pc = 0x15AE9Cu;
    // 0x15ae9c: 0x100001fe  b           . + 4 + (0x1FE << 2)
    ctx->pc = 0x15AE9Cu;
    {
        const bool branch_taken_0x15ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE9Cu;
        // 0x15aea0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae9c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AEA4u;
label_15aea4:
    // 0x15aea4: 0x100001fc  b           . + 4 + (0x1FC << 2)
    ctx->pc = 0x15AEA4u;
    {
        const bool branch_taken_0x15aea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEA4u;
        // 0x15aea8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aea4) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AEACu;
label_15aeac:
    // 0x15aeac: 0x100001fa  b           . + 4 + (0x1FA << 2)
    ctx->pc = 0x15AEACu;
    {
        const bool branch_taken_0x15aeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEACu;
        // 0x15aeb0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aeac) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AEB4u;
label_15aeb4:
    // 0x15aeb4: 0x100001f8  b           . + 4 + (0x1F8 << 2)
    ctx->pc = 0x15AEB4u;
    {
        const bool branch_taken_0x15aeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEB4u;
        // 0x15aeb8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aeb4) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AEBCu;
label_15aebc:
    // 0x15aebc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15aebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15aec0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x15aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x15aec4: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15aec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x15aec8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15AEC8u;
    {
        const bool branch_taken_0x15aec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEC8u;
        // 0x15aecc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aec8) {
            ctx->pc = 0x15AF00u;
            goto label_15af00;
        }
    }
    ctx->pc = 0x15AED0u;
    // 0x15aed0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15aed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15aed4: 0x9023490f  lbu         $v1, 0x490F($at)
    ctx->pc = 0x15aed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Fu));
    // 0x15aed8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AED8u;
    {
        const bool branch_taken_0x15aed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AED8u;
        // 0x15aedc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aed8) {
            ctx->pc = 0x15AEE8u;
            goto label_15aee8;
        }
    }
    ctx->pc = 0x15AEE0u;
    // 0x15aee0: 0x100001ed  b           . + 4 + (0x1ED << 2)
    ctx->pc = 0x15AEE0u;
    {
        const bool branch_taken_0x15aee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEE0u;
        // 0x15aee4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aee0) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AEE8u;
label_15aee8:
    // 0x15aee8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AEE8u;
    {
        const bool branch_taken_0x15aee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15aee8) {
            ctx->pc = 0x15AEF8u;
            goto label_15aef8;
        }
    }
    ctx->pc = 0x15AEF0u;
    // 0x15aef0: 0x100001e9  b           . + 4 + (0x1E9 << 2)
    ctx->pc = 0x15AEF0u;
    {
        const bool branch_taken_0x15aef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEF0u;
        // 0x15aef4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aef0) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AEF8u;
label_15aef8:
    // 0x15aef8: 0x100001e7  b           . + 4 + (0x1E7 << 2)
    ctx->pc = 0x15AEF8u;
    {
        const bool branch_taken_0x15aef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEF8u;
        // 0x15aefc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aef8) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AF00u;
label_15af00:
    // 0x15af00: 0x100001e5  b           . + 4 + (0x1E5 << 2)
    ctx->pc = 0x15AF00u;
    {
        const bool branch_taken_0x15af00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15af00) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AF08u;
label_15af08:
    // 0x15af08: 0x100001e3  b           . + 4 + (0x1E3 << 2)
    ctx->pc = 0x15AF08u;
    {
        const bool branch_taken_0x15af08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF08u;
        // 0x15af0c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af08) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AF10u;
label_15af10:
    // 0x15af10: 0x100001e1  b           . + 4 + (0x1E1 << 2)
    ctx->pc = 0x15AF10u;
    {
        const bool branch_taken_0x15af10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF10u;
        // 0x15af14: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af10) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AF18u;
label_15af18:
    // 0x15af18: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15af18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x15af1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15af1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af20: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15af20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x15af24: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x15af24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x15af28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15af28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15af2c:
    // 0x15af2c: 0x0  nop
    ctx->pc = 0x15af2cu;
    // NOP
    // 0x15af30: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15af30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x15af34: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15AF34u;
    {
        const bool branch_taken_0x15af34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15af34) {
            ctx->pc = 0x15AF60u;
            goto label_15af60;
        }
    }
    ctx->pc = 0x15AF3Cu;
    // 0x15af3c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15af3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15af40: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15af40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15af44: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15AF44u;
    {
        const bool branch_taken_0x15af44 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15af44) {
            ctx->pc = 0x15AF60u;
            goto label_15af60;
        }
    }
    ctx->pc = 0x15AF4Cu;
    // 0x15af4c: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15af4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15af50: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AF50u;
    {
        const bool branch_taken_0x15af50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF50u;
        // 0x15af54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af50) {
            ctx->pc = 0x15AF60u;
            goto label_15af60;
        }
    }
    ctx->pc = 0x15AF58u;
    // 0x15af58: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15AF58u;
    {
        const bool branch_taken_0x15af58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15af58) {
            ctx->pc = 0x15AF84u;
            goto label_15af84;
        }
    }
    ctx->pc = 0x15AF60u;
label_15af60:
    // 0x15af60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15af60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15af64: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15af64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x15af68: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15AF68u;
    {
        const bool branch_taken_0x15af68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF68u;
        // 0x15af6c: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af68) {
            ctx->pc = 0x15AF2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15af2c;
        }
    }
    ctx->pc = 0x15AF70u;
    // 0x15af70: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15af70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15af74: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15af74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15af78: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15AF78u;
    {
        const bool branch_taken_0x15af78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF78u;
        // 0x15af7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af78) {
            ctx->pc = 0x15AF2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15af2c;
        }
    }
    ctx->pc = 0x15AF80u;
    // 0x15af80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15af80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15af84:
    // 0x15af84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AF84u;
    {
        const bool branch_taken_0x15af84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15af84) {
            ctx->pc = 0x15AF94u;
            goto label_15af94;
        }
    }
    ctx->pc = 0x15AF8Cu;
    // 0x15af8c: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x15AF8Cu;
    {
        const bool branch_taken_0x15af8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF8Cu;
        // 0x15af90: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af8c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AF94u;
label_15af94:
    // 0x15af94: 0x100001c0  b           . + 4 + (0x1C0 << 2)
    ctx->pc = 0x15AF94u;
    {
        const bool branch_taken_0x15af94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF94u;
        // 0x15af98: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af94) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AF9Cu;
label_15af9c:
    // 0x15af9c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15af9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15afa0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x15afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15afa4: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15afa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x15afa8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AFA8u;
    {
        const bool branch_taken_0x15afa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFA8u;
        // 0x15afac: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afa8) {
            ctx->pc = 0x15AFB8u;
            goto label_15afb8;
        }
    }
    ctx->pc = 0x15AFB0u;
    // 0x15afb0: 0x100001b9  b           . + 4 + (0x1B9 << 2)
    ctx->pc = 0x15AFB0u;
    {
        const bool branch_taken_0x15afb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFB0u;
        // 0x15afb4: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afb0) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AFB8u;
label_15afb8:
    // 0x15afb8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AFB8u;
    {
        const bool branch_taken_0x15afb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15afb8) {
            ctx->pc = 0x15AFC8u;
            goto label_15afc8;
        }
    }
    ctx->pc = 0x15AFC0u;
    // 0x15afc0: 0x100001b5  b           . + 4 + (0x1B5 << 2)
    ctx->pc = 0x15AFC0u;
    {
        const bool branch_taken_0x15afc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFC0u;
        // 0x15afc4: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afc0) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AFC8u;
label_15afc8:
    // 0x15afc8: 0x100001b3  b           . + 4 + (0x1B3 << 2)
    ctx->pc = 0x15AFC8u;
    {
        const bool branch_taken_0x15afc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFC8u;
        // 0x15afcc: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afc8) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AFD0u;
label_15afd0:
    // 0x15afd0: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x15AFD0u;
    {
        const bool branch_taken_0x15afd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFD0u;
        // 0x15afd4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afd0) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AFD8u;
label_15afd8:
    // 0x15afd8: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x15AFD8u;
    {
        const bool branch_taken_0x15afd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFD8u;
        // 0x15afdc: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afd8) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15AFE0u;
label_15afe0:
    // 0x15afe0: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x15afe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15afe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15afe8: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x15afec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15afecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15aff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15aff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15aff4:
    // 0x15aff4: 0x0  nop
    ctx->pc = 0x15aff4u;
    // NOP
    // 0x15aff8: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15aff8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x15affc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15AFFCu;
    {
        const bool branch_taken_0x15affc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15affc) {
            ctx->pc = 0x15B028u;
            goto label_15b028;
        }
    }
    ctx->pc = 0x15B004u;
    // 0x15b004: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b004u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b008: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15b00c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B00Cu;
    {
        const bool branch_taken_0x15b00c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b00c) {
            ctx->pc = 0x15B028u;
            goto label_15b028;
        }
    }
    ctx->pc = 0x15B014u;
    // 0x15b014: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15b018: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B018u;
    {
        const bool branch_taken_0x15b018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B018u;
        // 0x15b01c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b018) {
            ctx->pc = 0x15B028u;
            goto label_15b028;
        }
    }
    ctx->pc = 0x15B020u;
    // 0x15b020: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15B020u;
    {
        const bool branch_taken_0x15b020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b020) {
            ctx->pc = 0x15B04Cu;
            goto label_15b04c;
        }
    }
    ctx->pc = 0x15B028u;
label_15b028:
    // 0x15b028: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b02c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x15b030: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15B030u;
    {
        const bool branch_taken_0x15b030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B030u;
        // 0x15b034: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b030) {
            ctx->pc = 0x15AFF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15aff4;
        }
    }
    ctx->pc = 0x15B038u;
    // 0x15b038: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b03c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b03cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15b040: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15B040u;
    {
        const bool branch_taken_0x15b040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B040u;
        // 0x15b044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b040) {
            ctx->pc = 0x15AFF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15aff4;
        }
    }
    ctx->pc = 0x15B048u;
    // 0x15b048: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b04c:
    // 0x15b04c: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x15B04Cu;
    {
        const bool branch_taken_0x15b04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B04Cu;
        // 0x15b050: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b04c) {
            ctx->pc = 0x15B1C4u;
            goto label_15b1c4;
        }
    }
    ctx->pc = 0x15B054u;
    // 0x15b054: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15b054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x15b058: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b05c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x15b060: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x15b060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15b064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b068:
    // 0x15b068: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x15b06c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15B06Cu;
    {
        const bool branch_taken_0x15b06c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b06c) {
            ctx->pc = 0x15B098u;
            goto label_15b098;
        }
    }
    ctx->pc = 0x15B074u;
    // 0x15b074: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b078: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15b07c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B07Cu;
    {
        const bool branch_taken_0x15b07c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b07c) {
            ctx->pc = 0x15B098u;
            goto label_15b098;
        }
    }
    ctx->pc = 0x15B084u;
    // 0x15b084: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b084u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15b088: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B088u;
    {
        const bool branch_taken_0x15b088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B088u;
        // 0x15b08c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b088) {
            ctx->pc = 0x15B098u;
            goto label_15b098;
        }
    }
    ctx->pc = 0x15B090u;
    // 0x15b090: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15B090u;
    {
        const bool branch_taken_0x15b090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b090) {
            ctx->pc = 0x15B0BCu;
            goto label_15b0bc;
        }
    }
    ctx->pc = 0x15B098u;
label_15b098:
    // 0x15b098: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b09c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x15b0a0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x15B0A0u;
    {
        const bool branch_taken_0x15b0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0A0u;
        // 0x15b0a4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0a0) {
            ctx->pc = 0x15B068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b068;
        }
    }
    ctx->pc = 0x15B0A8u;
    // 0x15b0a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b0ac: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b0acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15b0b0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x15B0B0u;
    {
        const bool branch_taken_0x15b0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0B0u;
        // 0x15b0b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0b0) {
            ctx->pc = 0x15B068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b068;
        }
    }
    ctx->pc = 0x15B0B8u;
    // 0x15b0b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b0bc:
    // 0x15b0bc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x15B0BCu;
    {
        const bool branch_taken_0x15b0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0BCu;
        // 0x15b0c0: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0bc) {
            ctx->pc = 0x15B144u;
            goto label_15b144;
        }
    }
    ctx->pc = 0x15B0C4u;
    // 0x15b0c4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x15b0c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b0c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b0cc: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x15b0d0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15b0d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b0d8:
    // 0x15b0d8: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b0d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x15b0dc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15B0DCu;
    {
        const bool branch_taken_0x15b0dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b0dc) {
            ctx->pc = 0x15B108u;
            goto label_15b108;
        }
    }
    ctx->pc = 0x15B0E4u;
    // 0x15b0e4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b0e8: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b0e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15b0ec: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B0ECu;
    {
        const bool branch_taken_0x15b0ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b0ec) {
            ctx->pc = 0x15B108u;
            goto label_15b108;
        }
    }
    ctx->pc = 0x15B0F4u;
    // 0x15b0f4: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b0f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15b0f8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B0F8u;
    {
        const bool branch_taken_0x15b0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0F8u;
        // 0x15b0fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0f8) {
            ctx->pc = 0x15B108u;
            goto label_15b108;
        }
    }
    ctx->pc = 0x15B100u;
    // 0x15b100: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15B100u;
    {
        const bool branch_taken_0x15b100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b100) {
            ctx->pc = 0x15B12Cu;
            goto label_15b12c;
        }
    }
    ctx->pc = 0x15B108u;
label_15b108:
    // 0x15b108: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b10c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b10cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x15b110: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x15B110u;
    {
        const bool branch_taken_0x15b110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B110u;
        // 0x15b114: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b110) {
            ctx->pc = 0x15B0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b0d8;
        }
    }
    ctx->pc = 0x15B118u;
    // 0x15b118: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b11c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b11cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15b120: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x15B120u;
    {
        const bool branch_taken_0x15b120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B120u;
        // 0x15b124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b120) {
            ctx->pc = 0x15B0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b0d8;
        }
    }
    ctx->pc = 0x15B128u;
    // 0x15b128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b12c:
    // 0x15b12c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B12Cu;
    {
        const bool branch_taken_0x15b12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b12c) {
            ctx->pc = 0x15B13Cu;
            goto label_15b13c;
        }
    }
    ctx->pc = 0x15B134u;
    // 0x15b134: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x15B134u;
    {
        const bool branch_taken_0x15b134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B134u;
        // 0x15b138: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b134) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B13Cu;
label_15b13c:
    // 0x15b13c: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x15B13Cu;
    {
        const bool branch_taken_0x15b13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B13Cu;
        // 0x15b140: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b13c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B144u;
label_15b144:
    // 0x15b144: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b148: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x15b14c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15b150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b154:
    // 0x15b154: 0x0  nop
    ctx->pc = 0x15b154u;
    // NOP
    // 0x15b158: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b158u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x15b15c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15B15Cu;
    {
        const bool branch_taken_0x15b15c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b15c) {
            ctx->pc = 0x15B188u;
            goto label_15b188;
        }
    }
    ctx->pc = 0x15B164u;
    // 0x15b164: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b164u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b168: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15b16c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B16Cu;
    {
        const bool branch_taken_0x15b16c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b16c) {
            ctx->pc = 0x15B188u;
            goto label_15b188;
        }
    }
    ctx->pc = 0x15B174u;
    // 0x15b174: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b174u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15b178: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B178u;
    {
        const bool branch_taken_0x15b178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B178u;
        // 0x15b17c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b178) {
            ctx->pc = 0x15B188u;
            goto label_15b188;
        }
    }
    ctx->pc = 0x15B180u;
    // 0x15b180: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15B180u;
    {
        const bool branch_taken_0x15b180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b180) {
            ctx->pc = 0x15B1ACu;
            goto label_15b1ac;
        }
    }
    ctx->pc = 0x15B188u;
label_15b188:
    // 0x15b188: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b18c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b18cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x15b190: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15B190u;
    {
        const bool branch_taken_0x15b190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B190u;
        // 0x15b194: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b190) {
            ctx->pc = 0x15B154u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b154;
        }
    }
    ctx->pc = 0x15B198u;
    // 0x15b198: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b19c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b19cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15b1a0: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15B1A0u;
    {
        const bool branch_taken_0x15b1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1A0u;
        // 0x15b1a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1a0) {
            ctx->pc = 0x15B154u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b154;
        }
    }
    ctx->pc = 0x15B1A8u;
    // 0x15b1a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b1a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b1ac:
    // 0x15b1ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B1ACu;
    {
        const bool branch_taken_0x15b1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b1ac) {
            ctx->pc = 0x15B1BCu;
            goto label_15b1bc;
        }
    }
    ctx->pc = 0x15B1B4u;
    // 0x15b1b4: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x15B1B4u;
    {
        const bool branch_taken_0x15b1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1B4u;
        // 0x15b1b8: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1b4) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B1BCu;
label_15b1bc:
    // 0x15b1bc: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x15B1BCu;
    {
        const bool branch_taken_0x15b1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1BCu;
        // 0x15b1c0: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1bc) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B1C4u;
label_15b1c4:
    // 0x15b1c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b1c8: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x15b1cc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x15b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15b1d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b1d4:
    // 0x15b1d4: 0x0  nop
    ctx->pc = 0x15b1d4u;
    // NOP
    // 0x15b1d8: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b1d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x15b1dc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15B1DCu;
    {
        const bool branch_taken_0x15b1dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b1dc) {
            ctx->pc = 0x15B208u;
            goto label_15b208;
        }
    }
    ctx->pc = 0x15B1E4u;
    // 0x15b1e4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b1e8: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15b1ec: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B1ECu;
    {
        const bool branch_taken_0x15b1ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b1ec) {
            ctx->pc = 0x15B208u;
            goto label_15b208;
        }
    }
    ctx->pc = 0x15B1F4u;
    // 0x15b1f4: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b1f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15b1f8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B1F8u;
    {
        const bool branch_taken_0x15b1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1F8u;
        // 0x15b1fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1f8) {
            ctx->pc = 0x15B208u;
            goto label_15b208;
        }
    }
    ctx->pc = 0x15B200u;
    // 0x15b200: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15B200u;
    {
        const bool branch_taken_0x15b200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b200) {
            ctx->pc = 0x15B22Cu;
            goto label_15b22c;
        }
    }
    ctx->pc = 0x15B208u;
label_15b208:
    // 0x15b208: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b20c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b20cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x15b210: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15B210u;
    {
        const bool branch_taken_0x15b210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B210u;
        // 0x15b214: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b210) {
            ctx->pc = 0x15B1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b1d4;
        }
    }
    ctx->pc = 0x15B218u;
    // 0x15b218: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b21c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15b220: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15B220u;
    {
        const bool branch_taken_0x15b220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B220u;
        // 0x15b224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b220) {
            ctx->pc = 0x15B1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b1d4;
        }
    }
    ctx->pc = 0x15B228u;
    // 0x15b228: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b22c:
    // 0x15b22c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x15B22Cu;
    {
        const bool branch_taken_0x15b22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B22Cu;
        // 0x15b230: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b22c) {
            ctx->pc = 0x15B2B4u;
            goto label_15b2b4;
        }
    }
    ctx->pc = 0x15B234u;
    // 0x15b234: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15b234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x15b238: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b23c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x15b240: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15b240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15b244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b248:
    // 0x15b248: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b248u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x15b24c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15B24Cu;
    {
        const bool branch_taken_0x15b24c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b24c) {
            ctx->pc = 0x15B278u;
            goto label_15b278;
        }
    }
    ctx->pc = 0x15B254u;
    // 0x15b254: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b254u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b258: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15b25c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B25Cu;
    {
        const bool branch_taken_0x15b25c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b25c) {
            ctx->pc = 0x15B278u;
            goto label_15b278;
        }
    }
    ctx->pc = 0x15B264u;
    // 0x15b264: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15b268: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B268u;
    {
        const bool branch_taken_0x15b268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B268u;
        // 0x15b26c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b268) {
            ctx->pc = 0x15B278u;
            goto label_15b278;
        }
    }
    ctx->pc = 0x15B270u;
    // 0x15b270: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15B270u;
    {
        const bool branch_taken_0x15b270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b270) {
            ctx->pc = 0x15B29Cu;
            goto label_15b29c;
        }
    }
    ctx->pc = 0x15B278u;
label_15b278:
    // 0x15b278: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b27c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b27cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x15b280: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x15B280u;
    {
        const bool branch_taken_0x15b280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B280u;
        // 0x15b284: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b280) {
            ctx->pc = 0x15B248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b248;
        }
    }
    ctx->pc = 0x15B288u;
    // 0x15b288: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b28c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b28cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15b290: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x15B290u;
    {
        const bool branch_taken_0x15b290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B290u;
        // 0x15b294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b290) {
            ctx->pc = 0x15B248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b248;
        }
    }
    ctx->pc = 0x15B298u;
    // 0x15b298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b29c:
    // 0x15b29c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B29Cu;
    {
        const bool branch_taken_0x15b29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b29c) {
            ctx->pc = 0x15B2ACu;
            goto label_15b2ac;
        }
    }
    ctx->pc = 0x15B2A4u;
    // 0x15b2a4: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x15B2A4u;
    {
        const bool branch_taken_0x15b2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2A4u;
        // 0x15b2a8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2a4) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B2ACu;
label_15b2ac:
    // 0x15b2ac: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x15B2ACu;
    {
        const bool branch_taken_0x15b2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2ACu;
        // 0x15b2b0: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2ac) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B2B4u;
label_15b2b4:
    // 0x15b2b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b2b8: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x15b2bc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15b2c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b2c4:
    // 0x15b2c4: 0x0  nop
    ctx->pc = 0x15b2c4u;
    // NOP
    // 0x15b2c8: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b2c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x15b2cc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15B2CCu;
    {
        const bool branch_taken_0x15b2cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b2cc) {
            ctx->pc = 0x15B2F8u;
            goto label_15b2f8;
        }
    }
    ctx->pc = 0x15B2D4u;
    // 0x15b2d4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b2d8: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b2d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15b2dc: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B2DCu;
    {
        const bool branch_taken_0x15b2dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b2dc) {
            ctx->pc = 0x15B2F8u;
            goto label_15b2f8;
        }
    }
    ctx->pc = 0x15B2E4u;
    // 0x15b2e4: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b2e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15b2e8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B2E8u;
    {
        const bool branch_taken_0x15b2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2E8u;
        // 0x15b2ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2e8) {
            ctx->pc = 0x15B2F8u;
            goto label_15b2f8;
        }
    }
    ctx->pc = 0x15B2F0u;
    // 0x15b2f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15B2F0u;
    {
        const bool branch_taken_0x15b2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b2f0) {
            ctx->pc = 0x15B31Cu;
            goto label_15b31c;
        }
    }
    ctx->pc = 0x15B2F8u;
label_15b2f8:
    // 0x15b2f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b2fc: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x15b300: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15B300u;
    {
        const bool branch_taken_0x15b300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B300u;
        // 0x15b304: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b300) {
            ctx->pc = 0x15B2C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b2c4;
        }
    }
    ctx->pc = 0x15B308u;
    // 0x15b308: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b30c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b30cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15b310: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15B310u;
    {
        const bool branch_taken_0x15b310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B310u;
        // 0x15b314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b310) {
            ctx->pc = 0x15B2C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b2c4;
        }
    }
    ctx->pc = 0x15B318u;
    // 0x15b318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b31c:
    // 0x15b31c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B31Cu;
    {
        const bool branch_taken_0x15b31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b31c) {
            ctx->pc = 0x15B32Cu;
            goto label_15b32c;
        }
    }
    ctx->pc = 0x15B324u;
    // 0x15b324: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x15B324u;
    {
        const bool branch_taken_0x15b324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B324u;
        // 0x15b328: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b324) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B32Cu;
label_15b32c:
    // 0x15b32c: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x15B32Cu;
    {
        const bool branch_taken_0x15b32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B32Cu;
        // 0x15b330: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b32c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B334u;
label_15b334:
    // 0x15b334: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15b334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x15b338: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b33c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x15b340: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15b340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b348:
    // 0x15b348: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b348u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x15b34c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15B34Cu;
    {
        const bool branch_taken_0x15b34c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b34c) {
            ctx->pc = 0x15B378u;
            goto label_15b378;
        }
    }
    ctx->pc = 0x15B354u;
    // 0x15b354: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b354u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b358: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15b35c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B35Cu;
    {
        const bool branch_taken_0x15b35c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b35c) {
            ctx->pc = 0x15B378u;
            goto label_15b378;
        }
    }
    ctx->pc = 0x15B364u;
    // 0x15b364: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15b368: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B368u;
    {
        const bool branch_taken_0x15b368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15b368) {
            ctx->pc = 0x15B378u;
            goto label_15b378;
        }
    }
    ctx->pc = 0x15B370u;
    // 0x15b370: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15B370u;
    {
        const bool branch_taken_0x15b370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b370) {
            ctx->pc = 0x15B39Cu;
            goto label_15b39c;
        }
    }
    ctx->pc = 0x15B378u;
label_15b378:
    // 0x15b378: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b37c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x15b380: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x15B380u;
    {
        const bool branch_taken_0x15b380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B380u;
        // 0x15b384: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b380) {
            ctx->pc = 0x15B348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b348;
        }
    }
    ctx->pc = 0x15B388u;
    // 0x15b388: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b38c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15b390: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x15B390u;
    {
        const bool branch_taken_0x15b390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B390u;
        // 0x15b394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b390) {
            ctx->pc = 0x15B348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b348;
        }
    }
    ctx->pc = 0x15B398u;
    // 0x15b398: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15b398u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b39c:
    // 0x15b39c: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x15B39Cu;
    {
        const bool branch_taken_0x15b39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B39Cu;
        // 0x15b3a0: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b39c) {
            ctx->pc = 0x15B514u;
            goto label_15b514;
        }
    }
    ctx->pc = 0x15B3A4u;
    // 0x15b3a4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15b3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x15b3a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b3a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b3ac: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x15b3b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15b3b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b3b8:
    // 0x15b3b8: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b3b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x15b3bc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15B3BCu;
    {
        const bool branch_taken_0x15b3bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b3bc) {
            ctx->pc = 0x15B3E8u;
            goto label_15b3e8;
        }
    }
    ctx->pc = 0x15B3C4u;
    // 0x15b3c4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b3c8: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b3c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15b3cc: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B3CCu;
    {
        const bool branch_taken_0x15b3cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b3cc) {
            ctx->pc = 0x15B3E8u;
            goto label_15b3e8;
        }
    }
    ctx->pc = 0x15B3D4u;
    // 0x15b3d4: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b3d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15b3d8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B3D8u;
    {
        const bool branch_taken_0x15b3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3D8u;
        // 0x15b3dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3d8) {
            ctx->pc = 0x15B3E8u;
            goto label_15b3e8;
        }
    }
    ctx->pc = 0x15B3E0u;
    // 0x15b3e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15B3E0u;
    {
        const bool branch_taken_0x15b3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b3e0) {
            ctx->pc = 0x15B40Cu;
            goto label_15b40c;
        }
    }
    ctx->pc = 0x15B3E8u;
label_15b3e8:
    // 0x15b3e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b3ec: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x15b3f0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x15B3F0u;
    {
        const bool branch_taken_0x15b3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3F0u;
        // 0x15b3f4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3f0) {
            ctx->pc = 0x15B3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b3b8;
        }
    }
    ctx->pc = 0x15B3F8u;
    // 0x15b3f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b3fc: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15b400: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x15B400u;
    {
        const bool branch_taken_0x15b400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B400u;
        // 0x15b404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b400) {
            ctx->pc = 0x15B3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b3b8;
        }
    }
    ctx->pc = 0x15B408u;
    // 0x15b408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b40c:
    // 0x15b40c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x15B40Cu;
    {
        const bool branch_taken_0x15b40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B40Cu;
        // 0x15b410: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b40c) {
            ctx->pc = 0x15B494u;
            goto label_15b494;
        }
    }
    ctx->pc = 0x15B414u;
    // 0x15b414: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15b414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x15b418: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b41c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x15b420: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x15b420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x15b424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b428:
    // 0x15b428: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x15b42c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15B42Cu;
    {
        const bool branch_taken_0x15b42c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b42c) {
            ctx->pc = 0x15B458u;
            goto label_15b458;
        }
    }
    ctx->pc = 0x15B434u;
    // 0x15b434: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b434u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b438: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15b43c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B43Cu;
    {
        const bool branch_taken_0x15b43c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b43c) {
            ctx->pc = 0x15B458u;
            goto label_15b458;
        }
    }
    ctx->pc = 0x15B444u;
    // 0x15b444: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b444u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15b448: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B448u;
    {
        const bool branch_taken_0x15b448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B448u;
        // 0x15b44c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b448) {
            ctx->pc = 0x15B458u;
            goto label_15b458;
        }
    }
    ctx->pc = 0x15B450u;
    // 0x15b450: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15B450u;
    {
        const bool branch_taken_0x15b450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b450) {
            ctx->pc = 0x15B47Cu;
            goto label_15b47c;
        }
    }
    ctx->pc = 0x15B458u;
label_15b458:
    // 0x15b458: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b45c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x15b460: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x15B460u;
    {
        const bool branch_taken_0x15b460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B460u;
        // 0x15b464: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b460) {
            ctx->pc = 0x15B428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b428;
        }
    }
    ctx->pc = 0x15B468u;
    // 0x15b468: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b46c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b46cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15b470: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x15B470u;
    {
        const bool branch_taken_0x15b470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B470u;
        // 0x15b474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b470) {
            ctx->pc = 0x15B428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b428;
        }
    }
    ctx->pc = 0x15B478u;
    // 0x15b478: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b47c:
    // 0x15b47c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B47Cu;
    {
        const bool branch_taken_0x15b47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b47c) {
            ctx->pc = 0x15B48Cu;
            goto label_15b48c;
        }
    }
    ctx->pc = 0x15B484u;
    // 0x15b484: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x15B484u;
    {
        const bool branch_taken_0x15b484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B484u;
        // 0x15b488: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b484) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B48Cu;
label_15b48c:
    // 0x15b48c: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x15B48Cu;
    {
        const bool branch_taken_0x15b48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B48Cu;
        // 0x15b490: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b48c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B494u;
label_15b494:
    // 0x15b494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b498: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x15b49c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x15b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x15b4a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b4a4:
    // 0x15b4a4: 0x0  nop
    ctx->pc = 0x15b4a4u;
    // NOP
    // 0x15b4a8: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b4a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x15b4ac: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15B4ACu;
    {
        const bool branch_taken_0x15b4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b4ac) {
            ctx->pc = 0x15B4D8u;
            goto label_15b4d8;
        }
    }
    ctx->pc = 0x15B4B4u;
    // 0x15b4b4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b4b8: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b4b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15b4bc: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B4BCu;
    {
        const bool branch_taken_0x15b4bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b4bc) {
            ctx->pc = 0x15B4D8u;
            goto label_15b4d8;
        }
    }
    ctx->pc = 0x15B4C4u;
    // 0x15b4c4: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b4c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15b4c8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B4C8u;
    {
        const bool branch_taken_0x15b4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4C8u;
        // 0x15b4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4c8) {
            ctx->pc = 0x15B4D8u;
            goto label_15b4d8;
        }
    }
    ctx->pc = 0x15B4D0u;
    // 0x15b4d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15B4D0u;
    {
        const bool branch_taken_0x15b4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b4d0) {
            ctx->pc = 0x15B4FCu;
            goto label_15b4fc;
        }
    }
    ctx->pc = 0x15B4D8u;
label_15b4d8:
    // 0x15b4d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b4dc: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b4dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x15b4e0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15B4E0u;
    {
        const bool branch_taken_0x15b4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4E0u;
        // 0x15b4e4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4e0) {
            ctx->pc = 0x15B4A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b4a4;
        }
    }
    ctx->pc = 0x15B4E8u;
    // 0x15b4e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b4ec: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15b4f0: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15B4F0u;
    {
        const bool branch_taken_0x15b4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4F0u;
        // 0x15b4f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4f0) {
            ctx->pc = 0x15B4A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b4a4;
        }
    }
    ctx->pc = 0x15B4F8u;
    // 0x15b4f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b4fc:
    // 0x15b4fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B4FCu;
    {
        const bool branch_taken_0x15b4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b4fc) {
            ctx->pc = 0x15B50Cu;
            goto label_15b50c;
        }
    }
    ctx->pc = 0x15B504u;
    // 0x15b504: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x15B504u;
    {
        const bool branch_taken_0x15b504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B504u;
        // 0x15b508: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b504) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B50Cu;
label_15b50c:
    // 0x15b50c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x15B50Cu;
    {
        const bool branch_taken_0x15b50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B50Cu;
        // 0x15b510: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b50c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B514u;
label_15b514:
    // 0x15b514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b518: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x15b51c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15b520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b524:
    // 0x15b524: 0x0  nop
    ctx->pc = 0x15b524u;
    // NOP
    // 0x15b528: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x15b52c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15B52Cu;
    {
        const bool branch_taken_0x15b52c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b52c) {
            ctx->pc = 0x15B558u;
            goto label_15b558;
        }
    }
    ctx->pc = 0x15B534u;
    // 0x15b534: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b534u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b538: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15b53c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B53Cu;
    {
        const bool branch_taken_0x15b53c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b53c) {
            ctx->pc = 0x15B558u;
            goto label_15b558;
        }
    }
    ctx->pc = 0x15B544u;
    // 0x15b544: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b544u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15b548: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B548u;
    {
        const bool branch_taken_0x15b548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B548u;
        // 0x15b54c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b548) {
            ctx->pc = 0x15B558u;
            goto label_15b558;
        }
    }
    ctx->pc = 0x15B550u;
    // 0x15b550: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15B550u;
    {
        const bool branch_taken_0x15b550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b550) {
            ctx->pc = 0x15B57Cu;
            goto label_15b57c;
        }
    }
    ctx->pc = 0x15B558u;
label_15b558:
    // 0x15b558: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b55c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x15b560: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15B560u;
    {
        const bool branch_taken_0x15b560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B560u;
        // 0x15b564: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b560) {
            ctx->pc = 0x15B524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b524;
        }
    }
    ctx->pc = 0x15B568u;
    // 0x15b568: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b56c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b56cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15b570: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15B570u;
    {
        const bool branch_taken_0x15b570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B570u;
        // 0x15b574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b570) {
            ctx->pc = 0x15B524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b524;
        }
    }
    ctx->pc = 0x15B578u;
    // 0x15b578: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b57c:
    // 0x15b57c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x15B57Cu;
    {
        const bool branch_taken_0x15b57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B57Cu;
        // 0x15b580: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b57c) {
            ctx->pc = 0x15B604u;
            goto label_15b604;
        }
    }
    ctx->pc = 0x15B584u;
    // 0x15b584: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x15b584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x15b588: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b58c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x15b590: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x15b590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x15b594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b598:
    // 0x15b598: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b598u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x15b59c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15B59Cu;
    {
        const bool branch_taken_0x15b59c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b59c) {
            ctx->pc = 0x15B5C8u;
            goto label_15b5c8;
        }
    }
    ctx->pc = 0x15B5A4u;
    // 0x15b5a4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b5a8: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b5a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15b5ac: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B5ACu;
    {
        const bool branch_taken_0x15b5ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b5ac) {
            ctx->pc = 0x15B5C8u;
            goto label_15b5c8;
        }
    }
    ctx->pc = 0x15B5B4u;
    // 0x15b5b4: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b5b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15b5b8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B5B8u;
    {
        const bool branch_taken_0x15b5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5B8u;
        // 0x15b5bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5b8) {
            ctx->pc = 0x15B5C8u;
            goto label_15b5c8;
        }
    }
    ctx->pc = 0x15B5C0u;
    // 0x15b5c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15B5C0u;
    {
        const bool branch_taken_0x15b5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b5c0) {
            ctx->pc = 0x15B5ECu;
            goto label_15b5ec;
        }
    }
    ctx->pc = 0x15B5C8u;
label_15b5c8:
    // 0x15b5c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b5cc: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x15b5d0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x15B5D0u;
    {
        const bool branch_taken_0x15b5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5D0u;
        // 0x15b5d4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5d0) {
            ctx->pc = 0x15B598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b598;
        }
    }
    ctx->pc = 0x15B5D8u;
    // 0x15b5d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b5dc: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b5dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15b5e0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x15B5E0u;
    {
        const bool branch_taken_0x15b5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5E0u;
        // 0x15b5e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5e0) {
            ctx->pc = 0x15B598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b598;
        }
    }
    ctx->pc = 0x15B5E8u;
    // 0x15b5e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b5e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b5ec:
    // 0x15b5ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B5ECu;
    {
        const bool branch_taken_0x15b5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b5ec) {
            ctx->pc = 0x15B5FCu;
            goto label_15b5fc;
        }
    }
    ctx->pc = 0x15B5F4u;
    // 0x15b5f4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x15B5F4u;
    {
        const bool branch_taken_0x15b5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5F4u;
        // 0x15b5f8: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5f4) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B5FCu;
label_15b5fc:
    // 0x15b5fc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x15B5FCu;
    {
        const bool branch_taken_0x15b5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5FCu;
        // 0x15b600: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5fc) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B604u;
label_15b604:
    // 0x15b604: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b608: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15b608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x15b60c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x15b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x15b610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b614:
    // 0x15b614: 0x0  nop
    ctx->pc = 0x15b614u;
    // NOP
    // 0x15b618: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x15b618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x15b61c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15B61Cu;
    {
        const bool branch_taken_0x15b61c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b61c) {
            ctx->pc = 0x15B648u;
            goto label_15b648;
        }
    }
    ctx->pc = 0x15B624u;
    // 0x15b624: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15b624u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b628: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x15b628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x15b62c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B62Cu;
    {
        const bool branch_taken_0x15b62c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15b62c) {
            ctx->pc = 0x15B648u;
            goto label_15b648;
        }
    }
    ctx->pc = 0x15B634u;
    // 0x15b634: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x15b634u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15b638: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B638u;
    {
        const bool branch_taken_0x15b638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B638u;
        // 0x15b63c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b638) {
            ctx->pc = 0x15B648u;
            goto label_15b648;
        }
    }
    ctx->pc = 0x15B640u;
    // 0x15b640: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15B640u;
    {
        const bool branch_taken_0x15b640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b640) {
            ctx->pc = 0x15B66Cu;
            goto label_15b66c;
        }
    }
    ctx->pc = 0x15B648u;
label_15b648:
    // 0x15b648: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b64c: 0x28a200ff  slti        $v0, $a1, 0xFF
    ctx->pc = 0x15b64cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x15b650: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15B650u;
    {
        const bool branch_taken_0x15b650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B650u;
        // 0x15b654: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b650) {
            ctx->pc = 0x15B614u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b614;
        }
    }
    ctx->pc = 0x15B658u;
    // 0x15b658: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b65c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x15b65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15b660: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15B660u;
    {
        const bool branch_taken_0x15b660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B660u;
        // 0x15b664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b660) {
            ctx->pc = 0x15B614u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b614;
        }
    }
    ctx->pc = 0x15B668u;
    // 0x15b668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b66c:
    // 0x15b66c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B66Cu;
    {
        const bool branch_taken_0x15b66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b66c) {
            ctx->pc = 0x15B67Cu;
            goto label_15b67c;
        }
    }
    ctx->pc = 0x15B674u;
    // 0x15b674: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15B674u;
    {
        const bool branch_taken_0x15b674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B674u;
        // 0x15b678: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b674) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B67Cu;
label_15b67c:
    // 0x15b67c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15B67Cu;
    {
        const bool branch_taken_0x15b67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B67Cu;
        // 0x15b680: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b67c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B684u;
label_15b684:
    // 0x15b684: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15B684u;
    {
        const bool branch_taken_0x15b684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B684u;
        // 0x15b688: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b684) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B68Cu;
label_15b68c:
    // 0x15b68c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15B68Cu;
    {
        const bool branch_taken_0x15b68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B68Cu;
        // 0x15b690: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b68c) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B694u;
label_15b694:
    // 0x15b694: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x15b694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_15b698:
    // 0x15b698: 0x3e00008  jr          $ra
    ctx->pc = 0x15B698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B6A0u;
}
