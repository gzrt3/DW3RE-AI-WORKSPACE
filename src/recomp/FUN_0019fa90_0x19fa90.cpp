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

// Function: FUN_0019fa90
// Address: 0x19fa90 - 0x19fb54
void FUN_0019fa90_0x19fa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019fa90_0x19fa90");
#endif

    switch (ctx->pc) {
        case 0x19faacu: goto label_19faac;
        case 0x19fabcu: goto label_19fabc;
        case 0x19faccu: goto label_19facc;
        case 0x19fae8u: goto label_19fae8;
        case 0x19faf8u: goto label_19faf8;
        case 0x19fb14u: goto label_19fb14;
        case 0x19fb24u: goto label_19fb24;
        case 0x19fb30u: goto label_19fb30;
        case 0x19fb38u: goto label_19fb38;
        default: break;
    }

    ctx->pc = 0x19fa90u;

    // 0x19fa90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19fa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19fa94: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x19fa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19fa98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19fa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19fa9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19fa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19faa0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19faa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19faa4: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FAA4u;
    SET_GPR_U32(ctx, 31, 0x19FAACu);
    ctx->pc = 0x19FAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FAA4u;
    // 0x19faa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FAA4u, 0x19FAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FAACu;
label_19faac:
    // 0x19faac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19faacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fab4: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FAB4u;
    SET_GPR_U32(ctx, 31, 0x19FABCu);
    ctx->pc = 0x19FAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FAB4u;
    // 0x19fab8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FAB4u, 0x19FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FABCu;
label_19fabc:
    // 0x19fabc: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x19fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x19fac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fac4: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FAC4u;
    SET_GPR_U32(ctx, 31, 0x19FACCu);
    ctx->pc = 0x19FAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FAC4u;
    // 0x19fac8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FAC4u, 0x19FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FACCu;
label_19facc:
    // 0x19facc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x19faccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x19fad0: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x19fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x19fad4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x19fad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19fad8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FAD8u;
    {
        const bool branch_taken_0x19fad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAD8u;
        // 0x19fadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fad8) {
            ctx->pc = 0x19FB00u;
            goto label_19fb00;
        }
    }
    ctx->pc = 0x19FAE0u;
    // 0x19fae0: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FAE0u;
    SET_GPR_U32(ctx, 31, 0x19FAE8u);
    ctx->pc = 0x19FAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FAE0u;
    // 0x19fae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FAE0u, 0x19FAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FAE8u;
label_19fae8:
    // 0x19fae8: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x19fae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x19faec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19faecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19faf0: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FAF0u;
    SET_GPR_U32(ctx, 31, 0x19FAF8u);
    ctx->pc = 0x19FAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FAF0u;
    // 0x19faf4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FAF0u, 0x19FAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FAF8u;
label_19faf8:
    // 0x19faf8: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x19faf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x19fafc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x19fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_19fb00:
    // 0x19fb00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19fb04: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19FB04u;
    {
        const bool branch_taken_0x19fb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB04u;
        // 0x19fb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb04) {
            ctx->pc = 0x19FB28u;
            goto label_19fb28;
        }
    }
    ctx->pc = 0x19FB0Cu;
    // 0x19fb0c: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FB0Cu;
    SET_GPR_U32(ctx, 31, 0x19FB14u);
    ctx->pc = 0x19FB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB0Cu;
    // 0x19fb10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FB0Cu, 0x19FB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB14u;
label_19fb14:
    // 0x19fb14: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x19fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    // 0x19fb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb1c: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FB1Cu;
    SET_GPR_U32(ctx, 31, 0x19FB24u);
    ctx->pc = 0x19FB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB1Cu;
    // 0x19fb20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FB1Cu, 0x19FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB24u;
label_19fb24:
    // 0x19fb24: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x19fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
label_19fb28:
    // 0x19fb28: 0xc067f9c  jal         func_19FE70
    ctx->pc = 0x19FB28u;
    SET_GPR_U32(ctx, 31, 0x19FB30u);
    ctx->pc = 0x19FB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB28u;
    // 0x19fb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FE70u, 0x19FB28u, 0x19FB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB30u;
label_19fb30:
    // 0x19fb30: 0xc067ed6  jal         func_19FB58
    ctx->pc = 0x19FB30u;
    SET_GPR_U32(ctx, 31, 0x19FB38u);
    ctx->pc = 0x19FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB30u;
    // 0x19fb34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FB58u, 0x19FB30u, 0x19FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB38u;
label_19fb38:
    // 0x19fb38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19fb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19fb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fb44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19fb44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fb48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fb48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fb4c: 0x8067fae  j           func_19FEB8
    ctx->pc = 0x19FB4Cu;
    ctx->pc = 0x19FB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB4Cu;
    // 0x19fb50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FEB8u;
    FUN_0019feb8_0x19feb8(rdram, ctx, runtime); return;
    ctx->pc = 0x19FB54u;
}
