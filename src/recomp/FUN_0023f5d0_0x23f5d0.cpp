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

// Function: FUN_0023f5d0
// Address: 0x23f5d0 - 0x23f658
void FUN_0023f5d0_0x23f5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023f5d0_0x23f5d0");
#endif

    switch (ctx->pc) {
        case 0x23f5e0u: goto label_23f5e0;
        case 0x23f600u: goto label_23f600;
        case 0x23f614u: goto label_23f614;
        case 0x23f61cu: goto label_23f61c;
        case 0x23f624u: goto label_23f624;
        case 0x23f62cu: goto label_23f62c;
        case 0x23f634u: goto label_23f634;
        case 0x23f63cu: goto label_23f63c;
        case 0x23f644u: goto label_23f644;
        case 0x23f64cu: goto label_23f64c;
        case 0x23f654u: goto label_23f654;
        default: break;
    }

    ctx->pc = 0x23f5d0u;

    // 0x23f5d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f5d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f5d8: 0xc08fd98  jal         func_23F660
    ctx->pc = 0x23F5D8u;
    SET_GPR_U32(ctx, 31, 0x23F5E0u);
    ctx->pc = 0x23F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F660u, 0x23F5D8u, 0x23F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F5E0u;
label_23f5e0:
    // 0x23f5e0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23F5E0u;
    {
        const bool branch_taken_0x23f5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5E0u;
        // 0x23f5e4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5e0) {
            ctx->pc = 0x23F654u;
            goto label_23f654;
        }
    }
    ctx->pc = 0x23F5E8u;
    // 0x23f5e8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x23f5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23f5ec: 0x240600ac  addiu       $a2, $zero, 0xAC
    ctx->pc = 0x23f5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x23f5f0: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x23f5f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x23f5f4: 0x240801f8  addiu       $t0, $zero, 0x1F8
    ctx->pc = 0x23f5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
    // 0x23f5f8: 0xc07aa5c  jal         func_1EA970
    ctx->pc = 0x23F5F8u;
    SET_GPR_U32(ctx, 31, 0x23F600u);
    ctx->pc = 0x23F5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F5F8u;
    // 0x23f5fc: 0x24090068  addiu       $t1, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA970u, 0x23F5F8u, 0x23F600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F600u;
label_23f600:
    // 0x23f600: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x23f600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23f604: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23f604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f608: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x23f608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23f60c: 0xc07aa7c  jal         func_1EA9F0
    ctx->pc = 0x23F60Cu;
    SET_GPR_U32(ctx, 31, 0x23F614u);
    ctx->pc = 0x23F610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F60Cu;
    // 0x23f610: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA9F0u, 0x23F60Cu, 0x23F614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F614u;
label_23f614:
    // 0x23f614: 0xc07ab08  jal         func_1EAC20
    ctx->pc = 0x23F614u;
    SET_GPR_U32(ctx, 31, 0x23F61Cu);
    ctx->pc = 0x23F618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F614u;
    // 0x23f618: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC20u, 0x23F614u, 0x23F61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F61Cu;
label_23f61c:
    // 0x23f61c: 0xc08fddc  jal         func_23F770
    ctx->pc = 0x23F61Cu;
    SET_GPR_U32(ctx, 31, 0x23F624u);
    ctx->pc = 0x23F620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F61Cu;
    // 0x23f620: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F770u, 0x23F61Cu, 0x23F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F624u;
label_23f624:
    // 0x23f624: 0xc044358  jal         func_110D60
    ctx->pc = 0x23F624u;
    SET_GPR_U32(ctx, 31, 0x23F62Cu);
    ctx->pc = 0x110D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D60u, 0x23F624u, 0x23F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F62Cu;
label_23f62c:
    // 0x23f62c: 0xc084b98  jal         func_212E60
    ctx->pc = 0x23F62Cu;
    SET_GPR_U32(ctx, 31, 0x23F634u);
    ctx->pc = 0x212E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212E60u, 0x23F62Cu, 0x23F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F634u;
label_23f634:
    // 0x23f634: 0xc08fddc  jal         func_23F770
    ctx->pc = 0x23F634u;
    SET_GPR_U32(ctx, 31, 0x23F63Cu);
    ctx->pc = 0x23F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F634u;
    // 0x23f638: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F770u, 0x23F634u, 0x23F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F63Cu;
label_23f63c:
    // 0x23f63c: 0xc07ab18  jal         func_1EAC60
    ctx->pc = 0x23F63Cu;
    SET_GPR_U32(ctx, 31, 0x23F644u);
    ctx->pc = 0x23F640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F63Cu;
    // 0x23f640: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC60u, 0x23F63Cu, 0x23F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F644u;
label_23f644:
    // 0x23f644: 0xc060258  jal         func_180960
    ctx->pc = 0x23F644u;
    SET_GPR_U32(ctx, 31, 0x23F64Cu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23F644u, 0x23F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F64Cu;
label_23f64c:
    // 0x23f64c: 0xc060258  jal         func_180960
    ctx->pc = 0x23F64Cu;
    SET_GPR_U32(ctx, 31, 0x23F654u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23F64Cu, 0x23F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F654u;
label_23f654:
    // 0x23f654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x23f658u;
}
