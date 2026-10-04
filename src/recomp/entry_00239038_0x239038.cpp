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

// Function: entry_00239038
// Address: 0x239038 - 0x2390b8
void entry_00239038_0x239038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239038_0x239038");
#endif

    switch (ctx->pc) {
        case 0x239048u: goto label_239048;
        case 0x239050u: goto label_239050;
        case 0x239088u: goto label_239088;
        default: break;
    }

    ctx->pc = 0x239038u;

label_239038:
    // 0x239038: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x239038u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_23903c:
    // 0x23903c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_239040:
    if (ctx->pc == 0x239040u) {
        ctx->pc = 0x239040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23903Cu;
        // 0x239040: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239044u;
        goto label_239044;
    }
    ctx->pc = 0x23903Cu;
    {
        const bool branch_taken_0x23903c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23903Cu;
        // 0x239040: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23903c) {
            ctx->pc = 0x2390B8u;
            return;
        }
    }
    ctx->pc = 0x239044u;
label_239044:
    // 0x239044: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x239044u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_239048:
    // 0x239048: 0x56400009  bnel        $s2, $zero, . + 4 + (0x9 << 2)
label_23904c:
    if (ctx->pc == 0x23904Cu) {
        ctx->pc = 0x23904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239048u;
        // 0x23904c: 0x2e430401  sltiu       $v1, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239050u;
        goto label_239050;
    }
    ctx->pc = 0x239048u;
    {
        const bool branch_taken_0x239048 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x239048) {
            ctx->pc = 0x23904Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239048u;
            // 0x23904c: 0x2e430401  sltiu       $v1, $s2, 0x401 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x239070u;
            goto label_239070;
        }
    }
    ctx->pc = 0x239050u;
label_239050:
    // 0x239050: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x239050u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_239054:
    // 0x239054: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x239054u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_239058:
    // 0x239058: 0x0  nop
    ctx->pc = 0x239058u;
    // NOP
label_23905c:
    // 0x23905c: 0x0  nop
    ctx->pc = 0x23905cu;
    // NOP
label_239060:
    // 0x239060: 0x0  nop
    ctx->pc = 0x239060u;
    // NOP
label_239064:
    // 0x239064: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_239068:
    if (ctx->pc == 0x239068u) {
        ctx->pc = 0x239068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239064u;
        // 0x239068: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23906Cu;
        goto label_23906c;
    }
    ctx->pc = 0x239064u;
    {
        const bool branch_taken_0x239064 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x239068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239064u;
        // 0x239068: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239064) {
            ctx->pc = 0x239050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239050;
        }
    }
    ctx->pc = 0x23906Cu;
label_23906c:
    // 0x23906c: 0x2e430401  sltiu       $v1, $s2, 0x401
    ctx->pc = 0x23906cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_239070:
    // 0x239070: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x239070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_239074:
    // 0x239074: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x239074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_239078:
    // 0x239078: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x239078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23907c:
    // 0x23907c: 0x243300b  movn        $a2, $s2, $v1
    ctx->pc = 0x23907cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
label_239080:
    // 0x239080: 0x40f809  jalr        $v0
label_239084:
    if (ctx->pc == 0x239084u) {
        ctx->pc = 0x239084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239080u;
        // 0x239084: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239088u;
        goto label_239088;
    }
    ctx->pc = 0x239080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239088u);
        ctx->pc = 0x239084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239080u;
        // 0x239084: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239080u, 0x239088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239088u;
label_239088:
    // 0x239088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23908c:
    // 0x23908c: 0x5a0000b8  blezl       $s0, . + 4 + (0xB8 << 2)
label_239090:
    if (ctx->pc == 0x239090u) {
        ctx->pc = 0x239090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23908Cu;
        // 0x239090: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239094u;
        goto label_239094;
    }
    ctx->pc = 0x23908Cu;
    {
        const bool branch_taken_0x23908c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x23908c) {
            ctx->pc = 0x239090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23908Cu;
            // 0x239090: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239370u;
            return;
        }
    }
    ctx->pc = 0x239094u;
label_239094:
    // 0x239094: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x239094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_239098:
    // 0x239098: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x239098u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_23909c:
    // 0x23909c: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x23909cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2390a0:
    // 0x2390a0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2390a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2390a4:
    // 0x2390a4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_2390a8:
    if (ctx->pc == 0x2390A8u) {
        ctx->pc = 0x2390A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390A4u;
        // 0x2390a8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390ACu;
        goto label_2390ac;
    }
    ctx->pc = 0x2390A4u;
    {
        const bool branch_taken_0x2390a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2390A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390A4u;
        // 0x2390a8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390a4) {
            ctx->pc = 0x239048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239048;
        }
    }
    ctx->pc = 0x2390ACu;
label_2390ac:
    // 0x2390ac: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_2390b0:
    if (ctx->pc == 0x2390B0u) {
        ctx->pc = 0x2390B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390ACu;
        // 0x2390b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390B4u;
        goto label_2390b4;
    }
    ctx->pc = 0x2390ACu;
    {
        const bool branch_taken_0x2390ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2390B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390ACu;
        // 0x2390b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390ac) {
            ctx->pc = 0x23937Cu;
            return;
        }
    }
    ctx->pc = 0x2390B4u;
label_2390b4:
    // 0x2390b4: 0x0  nop
    ctx->pc = 0x2390b4u;
    // NOP
    ctx->pc = 0x2390b8u;
}
