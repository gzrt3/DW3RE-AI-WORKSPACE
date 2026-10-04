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

// Function: FUN_001b81f0
// Address: 0x1b81f0 - 0x1b8230
void FUN_001b81f0_0x1b81f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b81f0_0x1b81f0");
#endif

    switch (ctx->pc) {
        case 0x1b8228u: goto label_1b8228;
        default: break;
    }

    ctx->pc = 0x1b81f0u;

    // 0x1b81f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b81f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b81f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1b81f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b81f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b81fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1b81fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1b8200: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8204: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1b8204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x1b8208: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1b8208u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1b820c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b820cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8210: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1b8210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1b8214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b8214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8218: 0x2813c  dsll32      $s0, $v0, 4
    ctx->pc = 0x1b8218u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1b821c: 0x10813e  dsrl32      $s0, $s0, 4
    ctx->pc = 0x1b821cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 4));
    // 0x1b8220: 0xc066c98  jal         func_19B260
    ctx->pc = 0x1B8220u;
    SET_GPR_U32(ctx, 31, 0x1B8228u);
    ctx->pc = 0x1B8224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8220u;
    // 0x1b8224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B260u, 0x1B8220u, 0x1B8228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8228u;
label_1b8228:
    // 0x1b8228: 0xc066c46  jal         func_19B118
    ctx->pc = 0x1B8228u;
    SET_GPR_U32(ctx, 31, 0x1B8230u);
    ctx->pc = 0x1B822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8228u;
    // 0x1b822c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B118u, 0x1B8228u, 0x1B8230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8230u;
}
