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

// Function: FUN_0021c4e0
// Address: 0x21c4e0 - 0x21c57c
void FUN_0021c4e0_0x21c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021c4e0_0x21c4e0");
#endif

    switch (ctx->pc) {
        case 0x21c4f0u: goto label_21c4f0;
        case 0x21c4f8u: goto label_21c4f8;
        case 0x21c53cu: goto label_21c53c;
        case 0x21c544u: goto label_21c544;
        case 0x21c54cu: goto label_21c54c;
        case 0x21c56cu: goto label_21c56c;
        case 0x21c578u: goto label_21c578;
        default: break;
    }

    ctx->pc = 0x21c4e0u;

    // 0x21c4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c4e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c4e8: 0xc087164  jal         func_21C590
    ctx->pc = 0x21C4E8u;
    SET_GPR_U32(ctx, 31, 0x21C4F0u);
    ctx->pc = 0x21C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C590u, 0x21C4E8u, 0x21C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4F0u;
label_21c4f0:
    // 0x21c4f0: 0xc045bac  jal         func_116EB0
    ctx->pc = 0x21C4F0u;
    SET_GPR_U32(ctx, 31, 0x21C4F8u);
    ctx->pc = 0x116EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EB0u, 0x21C4F0u, 0x21C4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4F8u;
label_21c4f8:
    // 0x21c4f8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21c4fc: 0x8c228eb0  lw          $v0, -0x7150($at)
    ctx->pc = 0x21c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x588EB0u));
    // 0x21c500: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21C500u;
    {
        const bool branch_taken_0x21c500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c500) {
            ctx->pc = 0x21C534u;
            goto label_21c534;
        }
    }
    ctx->pc = 0x21C508u;
    // 0x21c508: 0x8442002c  lh          $v0, 0x2C($v0)
    ctx->pc = 0x21c508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x21c50c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x21c50cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21c510: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x21C510u;
    {
        const bool branch_taken_0x21c510 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C510u;
        // 0x21c514: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c510) {
            ctx->pc = 0x21C534u;
            goto label_21c534;
        }
    }
    ctx->pc = 0x21C518u;
    // 0x21c518: 0x8c238d34  lw          $v1, -0x72CC($at)
    ctx->pc = 0x21c518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937908)));
    // 0x21c51c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x21c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21c520: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x21c520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x21c524: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x21c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21c528: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x21c528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x21c52c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x21c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21c530: 0xa040008c  sb          $zero, 0x8C($v0)
    ctx->pc = 0x21c530u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 0));
label_21c534:
    // 0x21c534: 0xc053250  jal         func_14C940
    ctx->pc = 0x21C534u;
    SET_GPR_U32(ctx, 31, 0x21C53Cu);
    ctx->pc = 0x21C538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C534u;
    // 0x21c538: 0x8f8480d0  lw          $a0, -0x7F30($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C940u, 0x21C534u, 0x21C53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C53Cu;
label_21c53c:
    // 0x21c53c: 0xc055478  jal         func_1551E0
    ctx->pc = 0x21C53Cu;
    SET_GPR_U32(ctx, 31, 0x21C544u);
    ctx->pc = 0x1551E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1551E0u, 0x21C53Cu, 0x21C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C544u;
label_21c544:
    // 0x21c544: 0xc064710  jal         func_191C40
    ctx->pc = 0x21C544u;
    SET_GPR_U32(ctx, 31, 0x21C54Cu);
    ctx->pc = 0x191C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191C40u, 0x21C544u, 0x21C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C54Cu;
label_21c54c:
    // 0x21c54c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21c550: 0x90228ea2  lbu         $v0, -0x715E($at)
    ctx->pc = 0x21c550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x588EA2u));
    // 0x21c554: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21C554u;
    {
        const bool branch_taken_0x21c554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C554u;
        // 0x21c558: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c554) {
            ctx->pc = 0x21C570u;
            goto label_21c570;
        }
    }
    ctx->pc = 0x21C55Cu;
    // 0x21c55c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x21c55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x21c560: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21c560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c564: 0xc045460  jal         func_115180
    ctx->pc = 0x21C564u;
    SET_GPR_U32(ctx, 31, 0x21C56Cu);
    ctx->pc = 0x21C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C564u;
    // 0x21c568: 0x24a58d00  addiu       $a1, $a1, -0x7300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115180u, 0x21C564u, 0x21C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C56Cu;
label_21c56c:
    // 0x21c56c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21c56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c570:
    // 0x21c570: 0xc0571f8  jal         func_15C7E0
    ctx->pc = 0x21C570u;
    SET_GPR_U32(ctx, 31, 0x21C578u);
    ctx->pc = 0x15C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C7E0u, 0x21C570u, 0x21C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C578u;
label_21c578:
    // 0x21c578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x21c57cu;
}
