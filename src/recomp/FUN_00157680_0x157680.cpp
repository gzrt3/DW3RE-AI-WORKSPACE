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

// Function: FUN_00157680
// Address: 0x157680 - 0x157794
void FUN_00157680_0x157680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157680_0x157680");
#endif

    switch (ctx->pc) {
        case 0x157694u: goto label_157694;
        case 0x157704u: goto label_157704;
        case 0x157714u: goto label_157714;
        case 0x15776cu: goto label_15776c;
        case 0x15777cu: goto label_15777c;
        case 0x157790u: goto label_157790;
        default: break;
    }

    ctx->pc = 0x157680u;

    // 0x157680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x157680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x157684: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x157684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x157688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15768c: 0xc05b564  jal         func_16D590
    ctx->pc = 0x15768Cu;
    SET_GPR_U32(ctx, 31, 0x157694u);
    ctx->pc = 0x157690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15768Cu;
    // 0x157690: 0x8c24c9ac  lw          $a0, -0x3654($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D590u, 0x15768Cu, 0x157694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157694u;
label_157694:
    // 0x157694: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x157694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x157698: 0x8c22c9b0  lw          $v0, -0x3650($at)
    ctx->pc = 0x157698u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x29C9B0u));
    // 0x15769c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15769Cu;
    {
        const bool branch_taken_0x15769c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1576A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15769Cu;
        // 0x1576a0: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15769c) {
            ctx->pc = 0x1576B0u;
            goto label_1576b0;
        }
    }
    ctx->pc = 0x1576A4u;
    // 0x1576a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1576A4u;
    {
        const bool branch_taken_0x1576a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1576A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576A4u;
        // 0x1576a8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576a4) {
            ctx->pc = 0x1576B4u;
            goto label_1576b4;
        }
    }
    ctx->pc = 0x1576ACu;
    // 0x1576ac: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1576acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1576b0:
    // 0x1576b0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1576b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1576b4:
    // 0x1576b4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1576B4u;
    {
        const bool branch_taken_0x1576b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1576B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576B4u;
        // 0x1576b8: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576b4) {
            ctx->pc = 0x1576CCu;
            goto label_1576cc;
        }
    }
    ctx->pc = 0x1576BCu;
    // 0x1576bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1576BCu;
    {
        const bool branch_taken_0x1576bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1576C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576BCu;
        // 0x1576c0: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576bc) {
            ctx->pc = 0x1576D0u;
            goto label_1576d0;
        }
    }
    ctx->pc = 0x1576C4u;
    // 0x1576c4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1576C4u;
    {
        const bool branch_taken_0x1576c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1576C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576C4u;
        // 0x1576c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576c4) {
            ctx->pc = 0x15770Cu;
            goto label_15770c;
        }
    }
    ctx->pc = 0x1576CCu;
label_1576cc:
    // 0x1576cc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1576ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_1576d0:
    // 0x1576d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1576d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1576d4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1576d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1576d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1576d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1576dc: 0x82282d  daddu       $a1, $a0, $v0
    ctx->pc = 0x1576dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1576e0: 0x41138  dsll        $v0, $a0, 4
    ctx->pc = 0x1576e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 4);
    // 0x1576e4: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1576e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1576e8: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x1576e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x1576ec: 0x44182d  daddu       $v1, $v0, $a0
    ctx->pc = 0x1576ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1576f0: 0x310f8  dsll        $v0, $v1, 3
    ctx->pc = 0x1576f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 3);
    // 0x1576f4: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x1576f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1576f8: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x1576f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x1576fc: 0xc06d554  jal         func_1B5550
    ctx->pc = 0x1576FCu;
    SET_GPR_U32(ctx, 31, 0x157704u);
    ctx->pc = 0x157700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1576FCu;
    // 0x157700: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5550u, 0x1576FCu, 0x157704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157704u;
label_157704:
    // 0x157704: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x157704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x157708: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x157708u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_15770c:
    // 0x15770c: 0xc05af40  jal         func_16BD00
    ctx->pc = 0x15770Cu;
    SET_GPR_U32(ctx, 31, 0x157714u);
    ctx->pc = 0x16BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD00u, 0x15770Cu, 0x157714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157714u;
label_157714:
    // 0x157714: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x157714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x157718: 0x8c22c9b4  lw          $v0, -0x364C($at)
    ctx->pc = 0x157718u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x29C9B4u));
    // 0x15771c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15771Cu;
    {
        const bool branch_taken_0x15771c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x157720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15771Cu;
        // 0x157720: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15771c) {
            ctx->pc = 0x157730u;
            goto label_157730;
        }
    }
    ctx->pc = 0x157724u;
    // 0x157724: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x157724u;
    {
        const bool branch_taken_0x157724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157724u;
        // 0x157728: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157724) {
            ctx->pc = 0x157734u;
            goto label_157734;
        }
    }
    ctx->pc = 0x15772Cu;
    // 0x15772c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x15772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_157730:
    // 0x157730: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x157730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_157734:
    // 0x157734: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x157734u;
    {
        const bool branch_taken_0x157734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157734u;
        // 0x157738: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157734) {
            ctx->pc = 0x15774Cu;
            goto label_15774c;
        }
    }
    ctx->pc = 0x15773Cu;
    // 0x15773c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15773Cu;
    {
        const bool branch_taken_0x15773c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15773Cu;
        // 0x157740: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15773c) {
            ctx->pc = 0x15774Cu;
            goto label_15774c;
        }
    }
    ctx->pc = 0x157744u;
    // 0x157744: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x157744u;
    {
        const bool branch_taken_0x157744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157744) {
            ctx->pc = 0x157774u;
            goto label_157774;
        }
    }
    ctx->pc = 0x15774Cu;
label_15774c:
    // 0x15774c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15774cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x157750: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x157750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x157754: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x157754u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x157758: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x157758u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x15775c: 0x62282d  daddu       $a1, $v1, $v0
    ctx->pc = 0x15775cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x157760: 0x313b8  dsll        $v0, $v1, 14
    ctx->pc = 0x157760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 14);
    // 0x157764: 0xc06d554  jal         func_1B5550
    ctx->pc = 0x157764u;
    SET_GPR_U32(ctx, 31, 0x15776Cu);
    ctx->pc = 0x157768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157764u;
    // 0x157768: 0x43202f  dsubu       $a0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5550u, 0x157764u, 0x15776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15776Cu;
label_15776c:
    // 0x15776c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x15776cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x157770: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x157770u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_157774:
    // 0x157774: 0xc05b228  jal         func_16C8A0
    ctx->pc = 0x157774u;
    SET_GPR_U32(ctx, 31, 0x15777Cu);
    ctx->pc = 0x16C8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C8A0u, 0x157774u, 0x15777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15777Cu;
label_15777c:
    // 0x15777c: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x15777cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x157780: 0x8c24ca48  lw          $a0, -0x35B8($at)
    ctx->pc = 0x157780u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x29CA48u));
    // 0x157784: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x157784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x157788: 0xc06dfe4  jal         func_1B7F90
    ctx->pc = 0x157788u;
    SET_GPR_U32(ctx, 31, 0x157790u);
    ctx->pc = 0x15778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157788u;
    // 0x15778c: 0x8c25ca4c  lw          $a1, -0x35B4($at) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F90u, 0x157788u, 0x157790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157790u;
label_157790:
    // 0x157790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x157794u;
}
