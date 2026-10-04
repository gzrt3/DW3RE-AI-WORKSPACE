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

// Function: FUN_0013ef90
// Address: 0x13ef90 - 0x13f064
void FUN_0013ef90_0x13ef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ef90_0x13ef90");
#endif

    switch (ctx->pc) {
        case 0x13eff8u: goto label_13eff8;
        case 0x13f00cu: goto label_13f00c;
        case 0x13f048u: goto label_13f048;
        case 0x13f054u: goto label_13f054;
        case 0x13f060u: goto label_13f060;
        default: break;
    }

    ctx->pc = 0x13ef90u;

    // 0x13ef90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ef90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ef94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ef94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ef98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ef98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ef9c: 0x9082023a  lbu         $v0, 0x23A($a0)
    ctx->pc = 0x13ef9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 570)));
    // 0x13efa0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13EFA0u;
    {
        const bool branch_taken_0x13efa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFA0u;
        // 0x13efa4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efa0) {
            ctx->pc = 0x13EFC0u;
            goto label_13efc0;
        }
    }
    ctx->pc = 0x13EFA8u;
    // 0x13efa8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x13efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13efac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13efacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13efb0: 0x30422014  andi        $v0, $v0, 0x2014
    ctx->pc = 0x13efb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8212);
    // 0x13efb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13EFB4u;
    {
        const bool branch_taken_0x13efb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13efb4) {
            ctx->pc = 0x13EFC0u;
            goto label_13efc0;
        }
    }
    ctx->pc = 0x13EFBCu;
    // 0x13efbc: 0xa2000249  sb          $zero, 0x249($s0)
    ctx->pc = 0x13efbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 585), (uint8_t)GPR_U32(ctx, 0));
label_13efc0:
    // 0x13efc0: 0x92020232  lbu         $v0, 0x232($s0)
    ctx->pc = 0x13efc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
    // 0x13efc4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13EFC4u;
    {
        const bool branch_taken_0x13efc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13efc4) {
            ctx->pc = 0x13F00Cu;
            goto label_13f00c;
        }
    }
    ctx->pc = 0x13EFCCu;
    // 0x13efcc: 0x8603003c  lh          $v1, 0x3C($s0)
    ctx->pc = 0x13efccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x13efd0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x13efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x13efd4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13EFD4u;
    {
        const bool branch_taken_0x13efd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFD4u;
        // 0x13efd8: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efd4) {
            ctx->pc = 0x13F00Cu;
            goto label_13f00c;
        }
    }
    ctx->pc = 0x13EFDCu;
    // 0x13efdc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13EFDCu;
    {
        const bool branch_taken_0x13efdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13efdc) {
            ctx->pc = 0x13F00Cu;
            goto label_13f00c;
        }
    }
    ctx->pc = 0x13EFE4u;
    // 0x13efe4: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x13efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x13efe8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13EFE8u;
    {
        const bool branch_taken_0x13efe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFE8u;
        // 0x13efec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efe8) {
            ctx->pc = 0x13F00Cu;
            goto label_13f00c;
        }
    }
    ctx->pc = 0x13EFF0u;
    // 0x13eff0: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x13EFF0u;
    SET_GPR_U32(ctx, 31, 0x13EFF8u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x13EFF0u, 0x13EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EFF8u;
label_13eff8:
    // 0x13eff8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13effc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x13effcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13f000: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x13f000u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x13f004: 0xc05b2b8  jal         func_16CAE0
    ctx->pc = 0x13F004u;
    SET_GPR_U32(ctx, 31, 0x13F00Cu);
    ctx->pc = 0x13F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F004u;
    // 0x13f008: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CAE0u, 0x13F004u, 0x13F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F00Cu;
label_13f00c:
    // 0x13f00c: 0x9202023a  lbu         $v0, 0x23A($s0)
    ctx->pc = 0x13f00cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 570)));
    // 0x13f010: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13F010u;
    {
        const bool branch_taken_0x13f010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F010u;
        // 0x13f014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f010) {
            ctx->pc = 0x13F058u;
            goto label_13f058;
        }
    }
    ctx->pc = 0x13F018u;
    // 0x13f018: 0x920201a2  lbu         $v0, 0x1A2($s0)
    ctx->pc = 0x13f018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 418)));
    // 0x13f01c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13F01Cu;
    {
        const bool branch_taken_0x13f01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f01c) {
            ctx->pc = 0x13F054u;
            goto label_13f054;
        }
    }
    ctx->pc = 0x13F024u;
    // 0x13f024: 0x8603003c  lh          $v1, 0x3C($s0)
    ctx->pc = 0x13f024u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x13f028: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x13f028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x13f02c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F02Cu;
    {
        const bool branch_taken_0x13f02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F02Cu;
        // 0x13f030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f02c) {
            ctx->pc = 0x13F040u;
            goto label_13f040;
        }
    }
    ctx->pc = 0x13F034u;
    // 0x13f034: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x13f034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13f038: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F038u;
    {
        const bool branch_taken_0x13f038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f038) {
            ctx->pc = 0x13F054u;
            goto label_13f054;
        }
    }
    ctx->pc = 0x13F040u;
label_13f040:
    // 0x13f040: 0xc054588  jal         func_151620
    ctx->pc = 0x13F040u;
    SET_GPR_U32(ctx, 31, 0x13F048u);
    ctx->pc = 0x151620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151620u, 0x13F040u, 0x13F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F048u;
label_13f048:
    // 0x13f048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f04c: 0xc0452cc  jal         func_114B30
    ctx->pc = 0x13F04Cu;
    SET_GPR_U32(ctx, 31, 0x13F054u);
    ctx->pc = 0x13F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F04Cu;
    // 0x13f050: 0xa200023b  sb          $zero, 0x23B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 571), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B30u, 0x13F04Cu, 0x13F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F054u;
label_13f054:
    // 0x13f054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f058:
    // 0x13f058: 0xc0500b0  jal         func_1402C0
    ctx->pc = 0x13F058u;
    SET_GPR_U32(ctx, 31, 0x13F060u);
    ctx->pc = 0x1402C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1402C0u, 0x13F058u, 0x13F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F060u;
label_13f060:
    // 0x13f060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x13f064u;
}
