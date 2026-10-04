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

// Function: FUN_001a80b0
// Address: 0x1a80b0 - 0x1a80d4
void FUN_001a80b0_0x1a80b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a80b0_0x1a80b0");
#endif

    switch (ctx->pc) {
        case 0x1a80ccu: goto label_1a80cc;
        default: break;
    }

    ctx->pc = 0x1a80b0u;

    // 0x1a80b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a80b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a80b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a80b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a80b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a80b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a80bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a80bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a80c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a80c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a80c4: 0xc069ff2  jal         func_1A7FC8
    ctx->pc = 0x1A80C4u;
    SET_GPR_U32(ctx, 31, 0x1A80CCu);
    ctx->pc = 0x1A80C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80C4u;
    // 0x1a80c8: 0x3c110028  lui         $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7FC8u, 0x1A80C4u, 0x1A80CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A80CCu;
label_1a80cc:
    // 0x1a80cc: 0xc069218  jal         func_1A4860
    ctx->pc = 0x1A80CCu;
    SET_GPR_U32(ctx, 31, 0x1A80D4u);
    ctx->pc = 0x1A80D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80CCu;
    // 0x1a80d0: 0x8e245c00  lw          $a0, 0x5C00($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x1A80CCu, 0x1A80D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A80D4u;
}
