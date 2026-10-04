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

// Function: FUN_0011a710
// Address: 0x11a710 - 0x11a7b0
void FUN_0011a710_0x11a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011a710_0x11a710");
#endif

    switch (ctx->pc) {
        case 0x11a734u: goto label_11a734;
        case 0x11a74cu: goto label_11a74c;
        case 0x11a794u: goto label_11a794;
        case 0x11a7a0u: goto label_11a7a0;
        case 0x11a7acu: goto label_11a7ac;
        default: break;
    }

    ctx->pc = 0x11a710u;

    // 0x11a710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11a710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11a714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11a714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11a718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11a71c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11a71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11a720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a724: 0x6200021  bltz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x11A724u;
    {
        const bool branch_taken_0x11a724 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x11A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A724u;
        // 0x11a728: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a724) {
            ctx->pc = 0x11A7ACu;
            goto label_11a7ac;
        }
    }
    ctx->pc = 0x11A72Cu;
    // 0x11a72c: 0xc0713b0  jal         func_1C4EC0
    ctx->pc = 0x11A72Cu;
    SET_GPR_U32(ctx, 31, 0x11A734u);
    ctx->pc = 0x1C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EC0u, 0x11A72Cu, 0x11A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A734u;
label_11a734:
    // 0x11a734: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11a734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a73c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A73Cu;
    {
        const bool branch_taken_0x11a73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A73Cu;
        // 0x11a740: 0x3c033e61  lui         $v1, 0x3E61 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15969 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a73c) {
            ctx->pc = 0x11A760u;
            goto label_11a760;
        }
    }
    ctx->pc = 0x11A744u;
    // 0x11a744: 0xc0713b0  jal         func_1C4EC0
    ctx->pc = 0x11A744u;
    SET_GPR_U32(ctx, 31, 0x11A74Cu);
    ctx->pc = 0x11A748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A744u;
    // 0x11a748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EC0u, 0x11A744u, 0x11A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A74Cu;
label_11a74c:
    // 0x11a74c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11a74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a750: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11a754: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11A754u;
    {
        const bool branch_taken_0x11a754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A754u;
        // 0x11a758: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a754) {
            ctx->pc = 0x11A798u;
            goto label_11a798;
        }
    }
    ctx->pc = 0x11A75Cu;
    // 0x11a75c: 0x3c033e61  lui         $v1, 0x3E61
    ctx->pc = 0x11a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15969 << 16));
label_11a760:
    // 0x11a760: 0xdf868b70  ld          $a2, -0x7490($gp)
    ctx->pc = 0x11a760u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x11a764: 0x346447ae  ori         $a0, $v1, 0x47AE
    ctx->pc = 0x11a764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
    // 0x11a768: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x11a768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
    // 0x11a76c: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x11a76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x11a770: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11a770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a774: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x11a774u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11a778: 0x3c024128  lui         $v0, 0x4128
    ctx->pc = 0x11a778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16680 << 16));
    // 0x11a77c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x11a77cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11a780: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x11a780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11a784: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x11a784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x11a788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a78c: 0xc05c8b0  jal         func_1722C0
    ctx->pc = 0x11A78Cu;
    SET_GPR_U32(ctx, 31, 0x11A794u);
    ctx->pc = 0x11A790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A78Cu;
    // 0x11a790: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1722C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1722C0u, 0x11A78Cu, 0x11A794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A794u;
label_11a794:
    // 0x11a794: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a798:
    // 0x11a798: 0xc071390  jal         func_1C4E40
    ctx->pc = 0x11A798u;
    SET_GPR_U32(ctx, 31, 0x11A7A0u);
    ctx->pc = 0x11A79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A798u;
    // 0x11a79c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E40u, 0x11A798u, 0x11A7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7A0u;
label_11a7a0:
    // 0x11a7a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7a4: 0xc0713a8  jal         func_1C4EA0
    ctx->pc = 0x11A7A4u;
    SET_GPR_U32(ctx, 31, 0x11A7ACu);
    ctx->pc = 0x11A7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A7A4u;
    // 0x11a7a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EA0u, 0x11A7A4u, 0x11A7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7ACu;
label_11a7ac:
    // 0x11a7ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11a7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11a7b0u;
}
