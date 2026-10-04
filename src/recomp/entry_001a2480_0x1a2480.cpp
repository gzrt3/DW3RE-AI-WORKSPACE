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

// Function: entry_001a2480
// Address: 0x1a2480 - 0x1a2494
void entry_001a2480_0x1a2480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2480_0x1a2480");
#endif

    ctx->pc = 0x1a2480u;

    // 0x1a2480: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a2480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2484: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2484u;
    {
        const bool branch_taken_0x1a2484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1A2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2484u;
        // 0x1a2488: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2484) {
            ctx->pc = 0x1A2494u;
            return;
        }
    }
    ctx->pc = 0x1A248Cu;
    // 0x1a248c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A248Cu;
    SET_GPR_U32(ctx, 31, 0x1A2494u);
    ctx->pc = 0x1A2490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A248Cu;
    // 0x1a2490: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A248Cu, 0x1A2494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2494u;
}
