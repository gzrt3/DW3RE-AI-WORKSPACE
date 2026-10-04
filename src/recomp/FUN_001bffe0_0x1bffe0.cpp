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

// Function: FUN_001bffe0
// Address: 0x1bffe0 - 0x1c0040
void FUN_001bffe0_0x1bffe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bffe0_0x1bffe0");
#endif

    switch (ctx->pc) {
        case 0x1bfffcu: goto label_1bfffc;
        case 0x1c0008u: goto label_1c0008;
        case 0x1c0038u: goto label_1c0038;
        default: break;
    }

    ctx->pc = 0x1bffe0u;

    // 0x1bffe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bffe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bffe4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1bffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x1bffe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bffec: 0x24429000  addiu       $v0, $v0, -0x7000
    ctx->pc = 0x1bffecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938624));
    // 0x1bfff0: 0xaf8288ec  sw          $v0, -0x7714($gp)
    ctx->pc = 0x1bfff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936812), GPR_U32(ctx, 2));
    // 0x1bfff4: 0xc08fd5c  jal         func_23F570
    ctx->pc = 0x1BFFF4u;
    SET_GPR_U32(ctx, 31, 0x1BFFFCu);
    ctx->pc = 0x1BFFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFFF4u;
    // 0x1bfff8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F570u, 0x1BFFF4u, 0x1BFFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFFFCu;
label_1bfffc:
    // 0x1bfffc: 0xaf8288e8  sw          $v0, -0x7718($gp)
    ctx->pc = 0x1bfffcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936808), GPR_U32(ctx, 2));
    // 0x1c0000: 0xc08fd5c  jal         func_23F570
    ctx->pc = 0x1C0000u;
    SET_GPR_U32(ctx, 31, 0x1C0008u);
    ctx->pc = 0x1C0004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0000u;
    // 0x1c0004: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F570u, 0x1C0000u, 0x1C0008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0008u;
label_1c0008:
    // 0x1c0008: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1c0008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1c000c: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x1c000cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
    // 0x1c0010: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x1c0010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x1c0014: 0xaf8288e4  sw          $v0, -0x771C($gp)
    ctx->pc = 0x1c0014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936804), GPR_U32(ctx, 2));
    // 0x1c0018: 0x24847000  addiu       $a0, $a0, 0x7000
    ctx->pc = 0x1c0018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x1c001c: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x1c001cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
    // 0x1c0020: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c0020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c0024: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x1c0024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x1c0028: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x1c0028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
    // 0x1c002c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c002cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0030: 0xc08e64a  jal         func_239928
    ctx->pc = 0x1C0030u;
    SET_GPR_U32(ctx, 31, 0x1C0038u);
    ctx->pc = 0x1C0034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0030u;
    // 0x1c0034: 0x2444fff0  addiu       $a0, $v0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239928u, 0x1C0030u, 0x1C0038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0038u;
label_1c0038:
    // 0x1c0038: 0xc08e660  jal         func_239980
    ctx->pc = 0x1C0038u;
    SET_GPR_U32(ctx, 31, 0x1C0040u);
    ctx->pc = 0x1C003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0038u;
    // 0x1c003c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239980u, 0x1C0038u, 0x1C0040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0040u;
}
