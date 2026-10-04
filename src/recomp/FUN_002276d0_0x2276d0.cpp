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

// Function: FUN_002276d0
// Address: 0x2276d0 - 0x227788
void FUN_002276d0_0x2276d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002276d0_0x2276d0");
#endif

    switch (ctx->pc) {
        case 0x227728u: goto label_227728;
        case 0x227770u: goto label_227770;
        case 0x227780u: goto label_227780;
        default: break;
    }

    ctx->pc = 0x2276d0u;

    // 0x2276d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2276d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2276d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2276d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2276d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2276d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2276dc: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2276dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2276e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2276e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2276e4: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x2276e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x2276e8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2276E8u;
    {
        const bool branch_taken_0x2276e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2276ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276E8u;
        // 0x2276ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2276e8) {
            ctx->pc = 0x227730u;
            goto label_227730;
        }
    }
    ctx->pc = 0x2276F0u;
    // 0x2276f0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2276f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x2276f4: 0x902250ba  lbu         $v0, 0x50BA($at)
    ctx->pc = 0x2276f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3650BAu));
    // 0x2276f8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2276F8u;
    {
        const bool branch_taken_0x2276f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2276f8) {
            ctx->pc = 0x227770u;
            goto label_227770;
        }
    }
    ctx->pc = 0x227700u;
    // 0x227700: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x227700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227708: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x227708u;
    {
        const bool branch_taken_0x227708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227708) {
            ctx->pc = 0x227770u;
            goto label_227770;
        }
    }
    ctx->pc = 0x227710u;
    // 0x227710: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x227710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x227714: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x227714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x227718: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x227718u;
    {
        const bool branch_taken_0x227718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227718) {
            ctx->pc = 0x227770u;
            goto label_227770;
        }
    }
    ctx->pc = 0x227720u;
    // 0x227720: 0xc089de8  jal         func_2277A0
    ctx->pc = 0x227720u;
    SET_GPR_U32(ctx, 31, 0x227728u);
    ctx->pc = 0x2277A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2277A0u, 0x227720u, 0x227728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227728u;
label_227728:
    // 0x227728: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x227728u;
    {
        const bool branch_taken_0x227728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227728u;
        // 0x22772c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227728) {
            ctx->pc = 0x227774u;
            goto label_227774;
        }
    }
    ctx->pc = 0x227730u;
label_227730:
    // 0x227730: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x227730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x227734: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x227734u;
    {
        const bool branch_taken_0x227734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x227738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227734u;
        // 0x227738: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227734) {
            ctx->pc = 0x227770u;
            goto label_227770;
        }
    }
    ctx->pc = 0x22773Cu;
    // 0x22773c: 0x902250b8  lbu         $v0, 0x50B8($at)
    ctx->pc = 0x22773cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20664)));
    // 0x227740: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x227740u;
    {
        const bool branch_taken_0x227740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227740) {
            ctx->pc = 0x227770u;
            goto label_227770;
        }
    }
    ctx->pc = 0x227748u;
    // 0x227748: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x227748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22774c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227750: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x227750u;
    {
        const bool branch_taken_0x227750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227750) {
            ctx->pc = 0x227770u;
            goto label_227770;
        }
    }
    ctx->pc = 0x227758u;
    // 0x227758: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x227758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22775c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x22775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x227760: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227760u;
    {
        const bool branch_taken_0x227760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227760) {
            ctx->pc = 0x227770u;
            goto label_227770;
        }
    }
    ctx->pc = 0x227768u;
    // 0x227768: 0xc089de8  jal         func_2277A0
    ctx->pc = 0x227768u;
    SET_GPR_U32(ctx, 31, 0x227770u);
    ctx->pc = 0x2277A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2277A0u, 0x227768u, 0x227770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227770u;
label_227770:
    // 0x227770: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x227770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227774:
    // 0x227774: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x227774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227778: 0xc05d760  jal         func_175D80
    ctx->pc = 0x227778u;
    SET_GPR_U32(ctx, 31, 0x227780u);
    ctx->pc = 0x22777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227778u;
    // 0x22777c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175D80u, 0x227778u, 0x227780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227780u;
label_227780:
    // 0x227780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x227788u;
}
