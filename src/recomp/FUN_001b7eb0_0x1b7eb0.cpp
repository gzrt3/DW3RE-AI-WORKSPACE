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

// Function: FUN_001b7eb0
// Address: 0x1b7eb0 - 0x1b7f1c
void FUN_001b7eb0_0x1b7eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7eb0_0x1b7eb0");
#endif

    switch (ctx->pc) {
        case 0x1b7ef8u: goto label_1b7ef8;
        case 0x1b7f00u: goto label_1b7f00;
        case 0x1b7f0cu: goto label_1b7f0c;
        case 0x1b7f18u: goto label_1b7f18;
        default: break;
    }

    ctx->pc = 0x1b7eb0u;

    // 0x1b7eb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b7eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b7eb4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1b7eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1b7eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7ebc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1b7ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1b7ec0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1b7ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x1b7ec4: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1b7ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1b7ec8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1b7ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1b7ecc: 0xffa40038  sd          $a0, 0x38($sp)
    ctx->pc = 0x1b7eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 4));
    // 0x1b7ed0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1b7ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1b7ed4: 0xffa50030  sd          $a1, 0x30($sp)
    ctx->pc = 0x1b7ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 5));
    // 0x1b7ed8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1b7ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7edc: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x1b7edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x1b7ee0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b7ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b7ee4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1b7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b7ee8: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1b7ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x1b7eec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b7eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ef0: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1B7EF0u;
    SET_GPR_U32(ctx, 31, 0x1B7EF8u);
    ctx->pc = 0x1B7EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7EF0u;
    // 0x1b7ef4: 0xffa30020  sd          $v1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1B7EF0u, 0x1B7EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7EF8u;
label_1b7ef8:
    // 0x1b7ef8: 0xc066998  jal         func_19A660
    ctx->pc = 0x1B7EF8u;
    SET_GPR_U32(ctx, 31, 0x1B7F00u);
    ctx->pc = 0x1B7EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7EF8u;
    // 0x1b7efc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A660u, 0x1B7EF8u, 0x1B7F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F00u;
label_1b7f00:
    // 0x1b7f00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b7f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f04: 0xc066a6c  jal         func_19A9B0
    ctx->pc = 0x1B7F04u;
    SET_GPR_U32(ctx, 31, 0x1B7F0Cu);
    ctx->pc = 0x1B7F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7F04u;
    // 0x1b7f08: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A9B0u, 0x1B7F04u, 0x1B7F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F0Cu;
label_1b7f0c:
    // 0x1b7f0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b7f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f10: 0xc066440  jal         func_199100
    ctx->pc = 0x1B7F10u;
    SET_GPR_U32(ctx, 31, 0x1B7F18u);
    ctx->pc = 0x1B7F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7F10u;
    // 0x1b7f14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x1B7F10u, 0x1B7F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F18u;
label_1b7f18:
    // 0x1b7f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1b7f1cu;
}
