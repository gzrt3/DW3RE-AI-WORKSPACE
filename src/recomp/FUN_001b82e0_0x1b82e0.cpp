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

// Function: FUN_001b82e0
// Address: 0x1b82e0 - 0x1b8338
void FUN_001b82e0_0x1b82e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b82e0_0x1b82e0");
#endif

    switch (ctx->pc) {
        case 0x1b8320u: goto label_1b8320;
        case 0x1b8330u: goto label_1b8330;
        default: break;
    }

    ctx->pc = 0x1b82e0u;

    // 0x1b82e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b82e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b82e4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1b82e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b82e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b82ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1b82ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1b82f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b82f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b82f4: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1b82f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x1b82f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b82f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b82fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b82fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8300: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1b8300u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1b8304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8308: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1b8308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1b830c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b830cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8310: 0x2893c  dsll32      $s1, $v0, 4
    ctx->pc = 0x1b8310u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1b8314: 0x11893e  dsrl32      $s1, $s1, 4
    ctx->pc = 0x1b8314u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 4));
    // 0x1b8318: 0xc066c5c  jal         func_19B170
    ctx->pc = 0x1B8318u;
    SET_GPR_U32(ctx, 31, 0x1B8320u);
    ctx->pc = 0x1B831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8318u;
    // 0x1b831c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B170u, 0x1B8318u, 0x1B8320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8320u;
label_1b8320:
    // 0x1b8320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8324: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b8324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8328: 0xc066d10  jal         func_19B440
    ctx->pc = 0x1B8328u;
    SET_GPR_U32(ctx, 31, 0x1B8330u);
    ctx->pc = 0x1B832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8328u;
    // 0x1b832c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B440u, 0x1B8328u, 0x1B8330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8330u;
label_1b8330:
    // 0x1b8330: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1b8330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b8334: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x1b8334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    ctx->pc = 0x1b8338u;
}
