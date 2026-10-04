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

// Function: FUN_0021c320
// Address: 0x21c320 - 0x21c3a4
void FUN_0021c320_0x21c320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021c320_0x21c320");
#endif

    switch (ctx->pc) {
        case 0x21c340u: goto label_21c340;
        case 0x21c358u: goto label_21c358;
        case 0x21c378u: goto label_21c378;
        case 0x21c390u: goto label_21c390;
        default: break;
    }

    ctx->pc = 0x21c320u;

    // 0x21c320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c324: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21c328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c32c: 0x90238ea2  lbu         $v1, -0x715E($at)
    ctx->pc = 0x21c32cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x588EA2u));
    // 0x21c330: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C330u;
    {
        const bool branch_taken_0x21c330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C330u;
        // 0x21c334: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c330) {
            ctx->pc = 0x21C340u;
            goto label_21c340;
        }
    }
    ctx->pc = 0x21C338u;
    // 0x21c338: 0xc0452cc  jal         func_114B30
    ctx->pc = 0x21C338u;
    SET_GPR_U32(ctx, 31, 0x21C340u);
    ctx->pc = 0x21C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C338u;
    // 0x21c33c: 0x24848d00  addiu       $a0, $a0, -0x7300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B30u, 0x21C338u, 0x21C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C340u;
label_21c340:
    // 0x21c340: 0x8f8392c8  lw          $v1, -0x6D38($gp)
    ctx->pc = 0x21c340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939336)));
    // 0x21c344: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x21c344u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x21c348: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C348u;
    {
        const bool branch_taken_0x21c348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c348) {
            ctx->pc = 0x21C360u;
            goto label_21c360;
        }
    }
    ctx->pc = 0x21C350u;
    // 0x21c350: 0xc044a04  jal         func_112810
    ctx->pc = 0x21C350u;
    SET_GPR_U32(ctx, 31, 0x21C358u);
    ctx->pc = 0x112810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112810u, 0x21C350u, 0x21C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C358u;
label_21c358:
    // 0x21c358: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21C358u;
    {
        const bool branch_taken_0x21c358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C358u;
        // 0x21c35c: 0x8f848590  lw          $a0, -0x7A70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c358) {
            ctx->pc = 0x21C394u;
            goto label_21c394;
        }
    }
    ctx->pc = 0x21C360u;
label_21c360:
    // 0x21c360: 0x8f8492cc  lw          $a0, -0x6D34($gp)
    ctx->pc = 0x21c360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939340)));
    // 0x21c364: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21c364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c368: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C368u;
    {
        const bool branch_taken_0x21c368 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x21C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C368u;
        // 0x21c36c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c368) {
            ctx->pc = 0x21C380u;
            goto label_21c380;
        }
    }
    ctx->pc = 0x21C370u;
    // 0x21c370: 0xc041478  jal         func_1051E0
    ctx->pc = 0x21C370u;
    SET_GPR_U32(ctx, 31, 0x21C378u);
    ctx->pc = 0x1051E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E0u, 0x21C370u, 0x21C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C378u;
label_21c378:
    // 0x21c378: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21C378u;
    {
        const bool branch_taken_0x21c378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c378) {
            ctx->pc = 0x21C390u;
            goto label_21c390;
        }
    }
    ctx->pc = 0x21C380u;
label_21c380:
    // 0x21c380: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C380u;
    {
        const bool branch_taken_0x21c380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21c380) {
            ctx->pc = 0x21C390u;
            goto label_21c390;
        }
    }
    ctx->pc = 0x21C388u;
    // 0x21c388: 0xc044a18  jal         func_112860
    ctx->pc = 0x21C388u;
    SET_GPR_U32(ctx, 31, 0x21C390u);
    ctx->pc = 0x112860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112860u, 0x21C388u, 0x21C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C390u;
label_21c390:
    // 0x21c390: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x21c390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_21c394:
    // 0x21c394: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x21c394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x21c398: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x21c398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x21c39c: 0xaf838590  sw          $v1, -0x7A70($gp)
    ctx->pc = 0x21c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 3));
    // 0x21c3a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x21c3a4u;
}
