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

// Function: FUN_001a7c40
// Address: 0x1a7c40 - 0x1a7c60
void FUN_001a7c40_0x1a7c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7c40_0x1a7c40");
#endif

    ctx->pc = 0x1a7c40u;

    // 0x1a7c40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a7c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a7c44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a7c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a7c48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a7c4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a7c4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7c54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a7c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a7c58: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A7C58u;
    SET_GPR_U32(ctx, 31, 0x1A7C60u);
    ctx->pc = 0x1A7C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C58u;
    // 0x1a7c5c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A7C58u, 0x1A7C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C60u;
}
