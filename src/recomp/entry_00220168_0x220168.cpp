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

// Function: entry_00220168
// Address: 0x220168 - 0x220188
void entry_00220168_0x220168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220168_0x220168");
#endif

    switch (ctx->pc) {
        case 0x220170u: goto label_220170;
        case 0x220184u: goto label_220184;
        default: break;
    }

    ctx->pc = 0x220168u;

    // 0x220168: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x220168u;
    SET_GPR_U32(ctx, 31, 0x220170u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x220168u, 0x220170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220170u;
label_220170:
    // 0x220170: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220170u;
    {
        const bool branch_taken_0x220170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220170u;
        // 0x220174: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220170) {
            ctx->pc = 0x220188u;
            return;
        }
    }
    ctx->pc = 0x220178u;
    // 0x220178: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x220178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x22017c: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x22017Cu;
    SET_GPR_U32(ctx, 31, 0x220184u);
    ctx->pc = 0x220180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22017Cu;
    // 0x220180: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x22017Cu, 0x220184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220184u;
label_220184:
    // 0x220184: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x220184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x220188u;
}
