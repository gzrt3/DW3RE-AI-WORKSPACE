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

// Function: FUN_001a4ff8
// Address: 0x1a4ff8 - 0x1a5018
void FUN_001a4ff8_0x1a4ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4ff8_0x1a4ff8");
#endif

    switch (ctx->pc) {
        case 0x1a5010u: goto label_1a5010;
        default: break;
    }

    ctx->pc = 0x1a4ff8u;

    // 0x1a4ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5000: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5000u;
    {
        const bool branch_taken_0x1a5000 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A5004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5000u;
        // 0x1a5004: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5000) {
            ctx->pc = 0x1A5010u;
            goto label_1a5010;
        }
    }
    ctx->pc = 0x1A5008u;
    // 0x1a5008: 0xc06b6b4  jal         func_1ADAD0
    ctx->pc = 0x1A5008u;
    SET_GPR_U32(ctx, 31, 0x1A5010u);
    ctx->pc = 0x1A500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5008u;
    // 0x1a500c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADAD0u, 0x1A5008u, 0x1A5010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5010u;
label_1a5010:
    // 0x1a5010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5014: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a5018u;
}
