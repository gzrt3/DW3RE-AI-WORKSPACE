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

// Function: FUN_001583c0
// Address: 0x1583c0 - 0x158418
void FUN_001583c0_0x1583c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001583c0_0x1583c0");
#endif

    switch (ctx->pc) {
        case 0x1583d0u: goto label_1583d0;
        case 0x1583e0u: goto label_1583e0;
        case 0x1583e8u: goto label_1583e8;
        case 0x1583f8u: goto label_1583f8;
        case 0x158404u: goto label_158404;
        case 0x15840cu: goto label_15840c;
        case 0x158414u: goto label_158414;
        default: break;
    }

    ctx->pc = 0x1583c0u;

    // 0x1583c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1583c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1583c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1583c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1583c8: 0xc066998  jal         func_19A660
    ctx->pc = 0x1583C8u;
    SET_GPR_U32(ctx, 31, 0x1583D0u);
    ctx->pc = 0x1583CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583C8u;
    // 0x1583cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A660u, 0x1583C8u, 0x1583D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583D0u;
label_1583d0:
    // 0x1583d0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1583d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1583d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1583d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583d8: 0xc066a6c  jal         func_19A9B0
    ctx->pc = 0x1583D8u;
    SET_GPR_U32(ctx, 31, 0x1583E0u);
    ctx->pc = 0x1583DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583D8u;
    // 0x1583dc: 0x24a51f00  addiu       $a1, $a1, 0x1F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A9B0u, 0x1583D8u, 0x1583E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583E0u;
label_1583e0:
    // 0x1583e0: 0xc066998  jal         func_19A660
    ctx->pc = 0x1583E0u;
    SET_GPR_U32(ctx, 31, 0x1583E8u);
    ctx->pc = 0x1583E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583E0u;
    // 0x1583e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A660u, 0x1583E0u, 0x1583E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583E8u;
label_1583e8:
    // 0x1583e8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x1583e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x1583ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1583ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583f0: 0xc066a6c  jal         func_19A9B0
    ctx->pc = 0x1583F0u;
    SET_GPR_U32(ctx, 31, 0x1583F8u);
    ctx->pc = 0x1583F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583F0u;
    // 0x1583f4: 0x24a54000  addiu       $a1, $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A9B0u, 0x1583F0u, 0x1583F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583F8u;
label_1583f8:
    // 0x1583f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1583f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583fc: 0xc066440  jal         func_199100
    ctx->pc = 0x1583FCu;
    SET_GPR_U32(ctx, 31, 0x158404u);
    ctx->pc = 0x158400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583FCu;
    // 0x158400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x1583FCu, 0x158404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158404u;
label_158404:
    // 0x158404: 0xc05cd8c  jal         func_173630
    ctx->pc = 0x158404u;
    SET_GPR_U32(ctx, 31, 0x15840Cu);
    ctx->pc = 0x173630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173630u, 0x158404u, 0x15840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15840Cu;
label_15840c:
    // 0x15840c: 0xc064f80  jal         func_193E00
    ctx->pc = 0x15840Cu;
    SET_GPR_U32(ctx, 31, 0x158414u);
    ctx->pc = 0x193E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193E00u, 0x15840Cu, 0x158414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158414u;
label_158414:
    // 0x158414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x158418u;
}
